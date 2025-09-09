#include<iostream>
using namespace std;

int binary(int arr[], int n, int key){
    int start=0;
    int end=n-1;

    while(start<=end){
      
      int mid=(start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin>>n;

    int *arr=new int [n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int search;
    cout<<"Enter the element to be searched: ";
    cin>>search;

    int ans= binary(arr, n, search);
    cout<<ans<<endl;


 return 0;

}