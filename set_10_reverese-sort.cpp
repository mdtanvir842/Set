#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int,greater<int>>s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(28);
    s.insert(3);
    s.insert(4);
    for(auto u:s){
        cout<<u<<endl;
    }
    set<string,greater<string>>s1;
    s1.insert("Md");
    s1.insert("Tanvir");
    s1.insert("Alam");
    s1.insert("Emon");
    s1.insert("Araf");
    for(auto u:s1){
        cout<<u<<endl;
    }
    set<pair<int,int>,greater<pair<int,int>>>s2;
    s2.insert({5,3});
    s2.insert({5,5});
    s2.insert({4,5});
    s2.insert({6,5});
    s2.insert({1,3});
    s2.insert({4,5});
    for(auto u:s2){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
