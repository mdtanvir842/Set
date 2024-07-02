#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st={1,2,3,2,4};
    st.erase(2);
    cout<<st.size()<<endl;
}
