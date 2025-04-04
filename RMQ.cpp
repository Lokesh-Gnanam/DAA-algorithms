#include<iostream>
#include<climits>
using namespace std;
int rmq(int arr[], int l, int r){
    int mini=INT_MAX;
    for(int i=l;i<=r;i++){
        mini=min(arr[i],mini);
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    cout<<"Minimum Range Query ["<<l<<","<<r<<"] is = "<<rmq(arr,l,r);
}