#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    string dna;
    cin>>dna;
    
    int rep {1}, max_rep {1};
    
    for(int i = 1; i<(int)dna.length(); i++){
        if(dna[i]==dna[i-1]){
            rep++;
        }
        else{
            
            rep=1;
        }
        max_rep = max(max_rep, rep);
    }
    
    
    
    cout<<max_rep;
    
    return 0;
}