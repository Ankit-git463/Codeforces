# include<iostream>
using namespace std;

int main(){

    string s ;
    cin>>s;

   

    while(true){
        int pos=s.find("WUB");
        if (pos!=-1){
            (pos==0)?s.replace(pos ,3 , ""): s.replace(pos,3, " "); 
        }
        else{
            break;
        }
    }

    cout<<s;
    return 0;
}