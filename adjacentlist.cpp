#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int adl[n][n]; //adl-adjacent List
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           adl[i][j]=0;
        }
    }
    
    //unweighted graph output
    //get edges 
    
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int s,d;
        cin>>s>>d;
        adl[s-1][d-1]=1;
    }
    //2d array output
    for(int i=0;i<n;i++){
        //capturing index for adjacent-list
        
        cout<<"Index "<<i+1 <<":"<<"\n";
        for(int j=0;j<n;j++){
            if(adl[i][j]!=0){
                
                cout<<j+1<<"\t";
            }
        }
     cout<<"\n";
    }
}