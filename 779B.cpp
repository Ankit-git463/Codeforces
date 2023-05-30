# include<bits/stdc++.h>

using namespace std ;

int main(){


    string s;
    int k;

    cin>>s>>k;

    int c0=0,c1=0;

    for (int i=s.size()-1 ;i>=0; i--){
        if (s[i]=='0')c0 ++;
        else c1++;

        if (c0==k){
            cout<<c1;
            return 0;
        }

        
    }

    if (s.find('0')!=-1){
        cout<<s.size()-1;
    }

    return 0;

}