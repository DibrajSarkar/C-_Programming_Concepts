#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
//            if(ar[i]>ar[j]){
//                int temp=ar[i]; for reduce this work we use swap() function for it.
//                ar[i]=ar[j];
//                ar[j]=temp;
//            }
                swap(ar[i],ar[j]);
        }
    }
    // sorting array
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}
