#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    
    bool f=true;
    
    for(int i=0;i<=a.length()-b.length();i++){
        int j;
        for(j=0;j<b.length();j++){
            
            if(a[i+j]!=b[j]){
                break;
            }
        }
        
            if(j==b.length()){
               f=false;
               cout<<"Found at "<<i<<endl;
            }
            
    }
        if(f){
            cout<<"Not Found";
        }
}