#include<iostream> 
using namespace std;

int main() {
    int n , v;
    cin>>n>>v;


    if ((n-1)<=v){
        cout<<n-1;
        return 0; 
    }

    else{
        int x=n-1-v;
        cout<<v-1 + ((x+1)*(x+2))/2;
        return 0 ;
    }
}
