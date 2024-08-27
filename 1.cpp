#include<bits/stdc++.h>
using namespace std;
bool Binary_ser(int arr[],int n,int target){
     int e=n-1;
     int s=0;
     int c=0;
     int f=0;
      int mid=(s+e)/2;
    while(s<=e){
        c++;
        if(arr[mid]==target){
            f=1;
            break;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    if(f==1){
        cout<<"the given number of operation: "<<c<<endl;
        return true;
    }
    else{
        cout<<"the given number of operation: "<<c<<endl;
        return false;
    }
}
bool binary_serch(int arr[],int traget,int e,int s){
    if(s<=e){
            
    int mid=(s+e)/2;
   
    if(arr[mid]==traget){
        return true;
    }
    else if(arr[mid]<traget){
        bool y=binary_serch(arr,traget,e,mid+1);
        return y;
    }
    else{
        bool x=binary_serch(arr,traget,mid-1,s);
        return x;
    }
    }
    return false;
}
int main(){
    
    int s=0;
    int n;
    cout<<"Enter the size of arr:"<<endl;
    cin>>n;
    cout<<"Enter the value o5f elemnt : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=n-1;
    while(true){
    int target;
    cout<<"Enter the value of elemnt to serach: "<<endl;
    cin>>target;
    if(Binary_ser(arr,n,target)){
        cout<<"present!!"<<endl;
    }
    else{
        cout<<"not presnt!!"<<endl;
    }

    if(binary_serch(arr,target,e,s)){
        cout<<"present!!"<<endl;
    }
    else{
        cout<<"not presnt!!"<<endl;
    }
    }
    
}