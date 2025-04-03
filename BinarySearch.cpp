//Binary Search
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0;  //implements the left and right nodes in array
    int right=n-1;
    
    int key;
    cin>>key;
    int found=-1; //used here found because while loop executes 
    
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            found=mid;
            break;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    
    if(found!=-1){
        cout<<key<<" is present"<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
}