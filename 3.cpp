// Bubble sort 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of the array\n";
    for(int i =0 ;i<5; i++){
        
        cin>>arr[i];
    }
    for(int i = 0; i<5-1; i++){
        for(int j = 0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}