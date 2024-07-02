#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st={2,1,1,2,5,4,7};
    cout<<st.count(2)<<endl;//1
    //cout<<count(st.begin(),st.end(),4)<<endl;
    cout<<st.count(8)<<endl;//0
}
