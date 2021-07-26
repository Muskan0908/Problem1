#include <bits/stdc++.h>
using namespace std;
void print(int i,int x){
    if(i>x)
        return;
    cout<<i<<endl;
    print(i+2,x);
}
int main(){
    int x;
    cin>>x;
    print(0,x);
    return 0;
}