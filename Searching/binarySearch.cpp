#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>&arr, int target){
    
    int l = 0;
    int r = arr.size()-1;

    while(l < r){
        int mid = l + (r-l)/2; // to avoid integer overflow
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return -1;
}

int bSRecursive(vector<int>&arr, int target, int l, int r){
    
    int mid = l + (r-l)/2; // to avoid integer overflow

    while(l < r){
        if(arr[mid] ==target){
            return mid;
        }
        else if(arr[mid] < target){
            return bSRecursive(arr, target, mid+1, r);
        }
        else{
            return bSRecursive(arr, target, l, mid-1);
        }
    }
    return -1;
}
int main(){
    
    vector<int>arr = {10,20,30,40,50};
    int target = 40;

    // int idx = binarySearch(arr, target);
    int idx = bSRecursive(arr, target, 0, arr.size()-1);
    if(idx != -1){
        cout<<"Element found at index: "<<idx<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}