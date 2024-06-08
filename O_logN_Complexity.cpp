#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // while(n>0){ //O(logN)
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n=n/10;
    // }
    for(int i=0; i<n; i=i*2){ //O(logN)
        cout<<i<<endl;
    }
    // Multiplication and division er khetre O(logN) complexity hoy.
    //O(logN) complexity O(N) er ceye better performance kore.
    //O(logN) complexity te 10^18 er jonno 60 ti step complete korte hoy.
    return 0;
}