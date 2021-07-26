#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of matrix"<<endl;
    cin>>n;
    int a[n][n],s1=0,s2=0;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j)
                s1+=a[i][j];
            if(i+j==n)
                s2+=a[i][j];
        }
    }

    cout<<"The Sum of Primary Diagonal is: "<<s1<<endl;
    cout<<"The Sum of Secondary Diagonal is: "<<s2<<endl;

    return 0;
}