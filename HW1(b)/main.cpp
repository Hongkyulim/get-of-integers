#include <iostream>

using namespace std;
//you dont want to print the same elements

bool check(int arr[], int compare){
    for(int i=0; i<10; i++){
        if(arr[i]==compare){
            return true;
        }
    }
    return false;
}

int main(){

    int temp;
    
    int array[10];
    int printed[10]={};
    int counter4Zero=0;
    
    cout<<"Type in 10 elements."<<endl;
    for(int i=0; i<10; i++){
        cout<<"array["<<i<<"] :";
        cin>>temp;
        array[i] = temp;
    }
    
    for(int i=0; i<10; i++){
        int counter=0;
        
        for(int i2=0; i2<10; i2++){
            if(array[i]==array[i2]){
                counter++;
            }
        }
        
        if(!check(printed, array[i])){
            cout<<array[i]<<" : "<<counter<<endl;
        }
        
        if(array[i]==0&&counter>0&&counter4Zero==0){
            if(check(printed, array[i])){
                cout<<array[i]<<" : "<<counter<<endl;
            }
            counter4Zero++;
        }
        
        printed[i]=array[i];
        
    }
    
    
    
    return 0;
}









