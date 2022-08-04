#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
int a[r][c];
// taking input
for(int i=0;i<r;i++){
    for(int  j=0;j<c;j++){
        cin>>a[i][j];
    }
}
int req_row;
cin>>req_row;
for(int i=0;i<c;i++){
    cout<<a[req_row][i]<<" ";
}



return 0;
}
