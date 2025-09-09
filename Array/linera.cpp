#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
int m;
cin>>m;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int *arr= new int[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    
    cout<<linearSearch(arr, n, key)<<endl;  
    
    
}