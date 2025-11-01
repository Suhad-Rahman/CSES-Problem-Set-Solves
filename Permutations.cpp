#include<iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    if(n!=2 && n!=3){
        
        for(int i = 2; i<=n; i+=2){
            cout<<i<<" ";
        }
        
        for(int i=1; i<=n; i+=2) {
            cout<<i;
            
            if(i+2<=n){
                cout<<" ";
            }
        }
        
    }
    
    else if(n==1){
        cout<<1;
    }
    
    else{
        cout<<"NO SOLUTION";
    }
    
    return 0;
}