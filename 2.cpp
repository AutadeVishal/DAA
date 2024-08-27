#include<bits/stdc++.h>
using namespace std;

int rec(int n){
if(n<=1){
    return 1;
}
return n*rec(n-1);
}

int count_zero(int n){
    int co=0;
    while(n>=5){
          n/=5;
            co++;
           
        }
    return co;
}

int number_of_one(int n){
        if(n==0)
        {
            return 0;
        }
    int high=n*5;
    int low=0;
    int mid=(low+high)/2;
    int ans=0;
    while(low<high){
        if(count_zero(mid)==n){
            return mid;
        }
       else if(count_zero(mid)<n){
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return low;
}
int main(){
    cout<<"Enter the number :"<<endl;
    int n;
    cin>>n;
    int i=0;
    int k=number_of_one(n);
    cout<<"the given : "<<k<<endl;
}