#include<iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;

    int check=n%2;


    string s,x="";
    cin>>s;

   

        if (check==0){
            for(int i=0 ; i<n ; i++){
                x=s[i]+x;
                i++;
                x=x+s[i];
            }
        }

        else{
            for(int i=0 ; i<n ; i++){
                x=x+s[i];
                i++;
                x=s[i]+x;
            }
            

        }

        cout<<x;
        return 0;

}