# include<iostream >

using namespace std;

int main (){


    int a,b ;
    cin>>a>>b;
    if (a==b){
        cout<<a;
        return 0;
    }
    
    int count = b-a+1;
    int c2=0;
    
    
    if (a%2==0 and count%2!=0){
        c2=count/2 +1;
        cout<<2;
        return 0;

    }
    else{
        c2 =count/2;
        cout<<2;
        return 0;

    }
    


}