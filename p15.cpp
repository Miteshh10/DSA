 #include<iostream>
 using namespace std;

 int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){
        for(int s=0;s<n-i;s++){
            cout<<" ";
    
        }

        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }