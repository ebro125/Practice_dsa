#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int>&arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    
    vector<int>arr = {10,20,30,40,50};
    int target = 550;

    int idx = linearSearch(arr, target);
    if(idx != -1){
        cout<<"Element found at index: "<<idx<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}