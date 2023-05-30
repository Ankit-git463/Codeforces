# include <iostream> 
# include<algorithm>
using namespace std;

int main(){
  
    
    int arr[50]={0};
    

    string s;
    cin>>s;

    int size=(s.size()+1)/2;
    int count =0;

    for (int x=0 ; x<s.size() ; x++){
        if (s[x]=='1' or s[x]=='2' or s[x]=='3'){
            arr[count]=s[x]-48;
            count++;

        }

    }

 
    sort(arr, arr+size);
    count =0;
    for(int i =0 ; i<s.size() ; i++){
        if (i%2==0){
            cout<<arr[count];
            count++;
        }
        else{
            cout<<'+';
        }
    }

}