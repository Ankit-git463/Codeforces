# include<iostream>

using namespace std;

int main() {
    int a,b,c,d;

    cin>>a>>b>>c>>d;
    int diff=d-b;
    
    for(int i=0 ; i<=100 ; i++){
        for(int j= 0 ; j <=100 ; j++){
            if (a*i ==c*j+diff){
                cout<<a*i+b;
                return 0 ;
            }
            
        }
    }

    cout<<-1;
    return 0 ;
}