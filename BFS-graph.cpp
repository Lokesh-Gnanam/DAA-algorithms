
//program should not be empty:  QUEUE

//queue is empty if the rear is less than front 

#include<iostream>
using namespace std;

int main(){
    int n,e;//no of edges and nodes
    cin>>n>>e;
     
    int m[n][n];//adj matrix with directions
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        m[s][d]=1;
    }
    cout<<"Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    //BFS-BREADTH FIRST SEARCH
    int q[n];
    int f=0;
    int r=-1;
    int st;
    cin>>st;
    q[++r]=st;//enqueue
    
    while(r>=f){
        int fq=q[f];
        f++;//dequeue
        for(int i=0;i<n;i++){
            if(m[fq][i]!=0){
                int fl=0;
                for(int j=0;j<r;j++){
                    if(q[j]==i){
                        fl=1;
                    }
                }
                if(fl==0){
                    q[++r]=i;//enqueue
                }
            }
        }
    }
    cout<<"BFS = "<<endl;
    for(int i=0;i<r;i++){
        cout<<q[i]<<"\t";
        
    }
    return 0;
    
}