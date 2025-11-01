#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    vector<int>arr;
    
    for(int i=0; i<n-1; i++){
        int input;
        cin>>input;
        
        arr.push_back(input);
    }
    
    sort(arr.begin(), arr.end());
    
    int mex = 1;
    
    for(int i=0; i<arr.size(); i++){
        if(mex==arr[i]){
            mex++;
        }
        else if(arr[i]>mex){
            break;
        }
    }
    
    cout<<mex;
    
    
    
    return 0;
}