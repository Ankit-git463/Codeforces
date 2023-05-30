# include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int n ;
    cin>>n;

    int arr[12];
    int maxsum=0;

    for(int i = 0 ; i< 12 ; i++){
        cin>>arr[i];
        maxsum+=arr[i];
    }

    if(maxsum<n){
        cout<<-1;
        return 0;
    }

    sort(arr , arr+12 );
    reverse(arr , arr+12 );

   

    int ans=0,count=0;

   

    for(int i = 0 ; i< 12 ; i++){
        
        if (ans>=n) break;

        ans=ans+arr[i];
        count++;

        
        
    }

    cout<<count;
    return 0;




}