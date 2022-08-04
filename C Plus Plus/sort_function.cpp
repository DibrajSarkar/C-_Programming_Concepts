#include<bits/stdc++.h>
using namespace std;

int main(){

//int a[5]={2,1,4,5,3};
//sort(a,a+3); // until index 2 ..here start from 1

// sort until last
int n;
scanf("%d",&n);
int ar[n];

;// taking input
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}

sort(ar,ar+n);
for(int i=0;i<5;i++){
    cout<<ar[i]<<" ";
}



return 0;

}
