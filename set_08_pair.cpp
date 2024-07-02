#include<bits/stdc++.h>
using namespace std;
int main(){
    set<pair<int,int>>st={{1,2},{2,4},{3,4},{4,5},{4,4},{4,5},{0,8},{6,8},{2,4}};
    for(auto u:st){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<"Another"<<endl;
    set<pair<int,int>>stt;
    stt.insert({3,4});
    stt.insert({9,8});
    stt.insert({10,7});
    stt.insert({2,4});
    stt.insert({3,6});
    stt.insert({3,3});
    stt.insert({8,8});
    for(auto u:stt){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<stt.size()<<endl;
}
