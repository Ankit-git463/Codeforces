#include<iostream>
 
 
 
using namespace std;
int main(){
    int N=1000000007;
 
    int f1,f2,f3,n;
    cin>>f1>>f2;
    cin>>n;
 
    f3=f2-f1;
    int ans=0;
   
    
    
 
    switch(n%6){
        case 0: ans=-f3;break;
        case 1: ans=f1;break;
        case 2: ans=f2;break;
        case 3: ans=f3;break;
        case 4: ans=-f1;break;
        case 5: ans=-f2;break;
        
    }

    
    if(ans<0 and ans!=0){ 
        if(ans%N==0){cout<<0;
        }
        else{
            cout<<(ans%N)+N;
            }
        }
    else{ 
        cout<<ans%N;
    }
 
 
}