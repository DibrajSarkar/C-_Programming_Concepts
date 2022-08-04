#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
scanf("%d",&n);
int ar[n];
int mn=ar[0];
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
for(int i=0;i<n;i++){
//    if(ar[i]<mn){
//        mn=ar[i];
//    }
    mn=min(mn,ar[i]);// compare ar[i] with mn;

    cout<<"Index-> "<<i<<" -> "<<mn<<endl;
}

cout<<mn<<endl;


return 0;
}
