//lets go in map
// it has UNIQUE KEYS IN SORTED ORDER
#include<bits/stdc++.h>
using namespace std;
void explained_map(){
    map<int,int> mp;
    map<int,pair<int,int>> mpp;
    mp[1] = 2; // {1 :2}
    mpp[1] = {1,2}; //{1 : {1,2}}
    mpp.insert({2,{2,3}});
    mp.emplace(2,3);
    map<int, int> :: iterator it;
    map<int , pair<int, int>> :: iterator itt;
    
    for (auto it : mp){
        cout<< it.first << " : " << it.second << endl;
    }

    cout << mpp[1].first<<" : " << mpp[2].first << " " << mpp[2].second<<endl;
    mpp.insert({3,{1,1}});
    mpp.insert({4,{2,9}});
    mpp.insert({5,{10,12}});
    mpp.insert({6,{5,5}});
    mpp.insert({7,{7,7}});
    
    cout << mpp[1].first << " : " << mpp[2].first << " " <<mpp[2].second << endl;
   

}




int main(){
    explained_map();
    return 0;
}