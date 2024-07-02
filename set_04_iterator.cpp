#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st={2,1,1,2,5,4,7};
    set<int>::iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<*it<<endl;
    }
}
