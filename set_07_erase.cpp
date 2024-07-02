#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st={1,2,3,2,4};
    st.erase(2);
    st.erase(st.begin());
    st.erase(--st.end());
    cout<<st.size()<<endl;
}
