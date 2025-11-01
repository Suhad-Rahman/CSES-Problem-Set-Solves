#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n;
    cin>>n;
    long long move{};
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            move += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    
    cout<<move;
    
    return 0;
}