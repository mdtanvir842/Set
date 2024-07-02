#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>st;
    st.insert("Tanvir");
    st.insert("Md");
    st.insert("Alam");
    st.insert("Emon");
    st.insert("Araf");
    st.insert("Alam");
    for(auto u:st){
        cout<<u<<endl;
    }
    cout<<st.size()<<endl;
}
