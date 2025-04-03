//Linear Search

#include<iostream>
using namespace std;
int main(){
    int n; //get the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    
    if(flag!=0){
        cout<<key<<" is present"<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
}