#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st={2,1,1,2,5,4,7};
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    st.clear();
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
}
