#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int edit(string a, string b, int n, int m){
    if(!n) return m;
    if(!m) return n;
    
    if(a[n-1]==b[m-1])
    {
        return edit(a,b,n-1,m-1);
    }
    
    return 1+min({edit(a,b,n-1,m),edit(a,b,n,m-1),edit(a,b,n-1,m-1)});
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<edit(a,b,a.size(),b.size());
}