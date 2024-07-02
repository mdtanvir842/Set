#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(5);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(4);
    for(auto u:st){
        cout<<u<<endl;
    }
//another
    /*set<int>st;
    for(int i=0;i<5;i++){
        int p;
        cin>>p;
        st.insert(p);
    }
    for(auto u:st){
        cout<<u<<endl;
    }*/
    //1.unique
    //2.sort
    //Both done automatically.
}
