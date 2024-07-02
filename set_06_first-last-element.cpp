#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st={1,2,3,4,5,6,7,8,9,10};
    cout<<*st.begin()<<endl;//first element
    cout<<*++st.begin()<<endl;//second element
    cout<<*--st.end()<<endl;//last element
    cout<<*st.rbegin()<<endl;//last element
    //cout<<*++++st.begin()<<endl;//third element    
    //cout<<*----st.end()<<endl;//before last element
}
