#include<bits/stdc++.h>
using namespace std;


int main(){

//string st();//="abcd";// it's a dynamic array that's why size not given here..starting size 1 need increase it's automatically increase
////st="xyz";
//st="acdfefefdsfdsljldfjldasjfdljfderdljd";
//cout<<st.capacity()<<endl;
//cin>>st;
//cout<<st<<endl;
string st(10,'x');// use constructor st(length,what we want to replace)
cout<<st.max_size()<<endl;
cout<<st<<endl;
string st1;
string st2;
cin>>st1>>st2;
if(st1==st2){
    cout<<"Yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
st1+=st2;
cout<<st1<<endl;


return 0;

}
