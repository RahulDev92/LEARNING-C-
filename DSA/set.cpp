// lets go with set
// SET IS UNIQUE AND SORTED
#include<bits/stdc++.h>
using namespace std;
void learnSet(){
    set<int> s;
    s.emplace(1);
    s.insert(3);
    s.insert(3);
    s.emplace(2);
    s.insert(4);
    s.erase(1);


    set<int> :: iterator it ;
    for (auto it = s.begin(); it != s.end(); it++){
        cout << *(it)<<' ';// {2,3,4} // because it store only unique and sorted form
    }
    cout << endl;
    it = s.find(3);
    it =s.find(4);
    cout <<s.count(3);
    

}



int main(){
    learnSet();
    return 0;

}