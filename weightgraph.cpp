#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int adm[n][n]; //adm-adjacent matrix
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           adm[i][j]=0;
        }
    }
    
    //weighted graph output
    //get edges 
    
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int s,d,weight;
        cin>>s>>d>>weight;
        adm[s-1][d-1]=weight;
    }
    //2d array output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adm[i][j]<<"\t";
        }
      cout<<"\n";
    }
}