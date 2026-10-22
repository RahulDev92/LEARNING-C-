//it is 
//UNORDERED AND UNIQUE
// ITS TIME COMPLEXITY IS O(1)
#include<bits/stdc++.h>
using namespace std;
void UnorderdSet(){ // its all the function work as set.
    unordered_set<int> us;
    us.insert(1);
    us.emplace(3);
    us.insert(1);
    us.emplace(2);
    us.insert(4);
    us.emplace(9);
    us.insert(5);
    us.emplace(0);
    unordered_set<int> :: iterator it ;
    for (auto it =us.begin(); it !=us.end() ; it++){
        cout << *it <<" ";

    }
    cout << endl;

}
int main(){
    UnorderdSet();
    return 0;
}