#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //constant
    cin>>n; //constant
    int a[n]; //array declare er alada complexity ace.
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s=0; //constant
    for(int i=0; i<n; i++){
        //ai programmer time complexity hocce O(n). Karon ekhane O(n) for take input loop + O(n) for cal s loop ba O(2n)=> O(n) step complete hocce. Kintu zodi i er man 2 ba 3 kore barto taholeo O(n) complexity hoto.
        //Constant complexity bad zabe
        s+=a[i]
    }
    cout<<s<<endl;
    return 0;
}