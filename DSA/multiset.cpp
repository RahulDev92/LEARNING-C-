//lets understand multiset
// IT IS SORTED BUT NOT UNIQUE
#include<bits/stdc++.h>
using namespace std;
void Explained_Multi_set(){
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(4);//{1,1,4}
    ms.insert(2);//{1,1,2,4}
    ms.insert(3);//{1,1,2,3,4}
    ms.erase(1);//{2,3,4}

    multiset<int> :: iterator it;
    for (auto it = ms.begin(); it !=ms.end(); it++){
        cout << *(it)<<" "; //{2,3,4}
    }
    cout <<endl;
    int cnt = ms.count(1);
    
    cout << cnt;
    ms.erase(ms.find(4)); //erase 4
    cout<<endl;
    for (auto it = ms.begin(); it !=ms.end(); it++){
        cout << *(it)<<" ";// {2,3}
    }
    cout<<endl;
    ms.emplace(5);
    ms.emplace(5);
    ms.emplace(6);
    ms.emplace(9);
    ms.emplace(8);
    ms.emplace(7);
    ms.emplace(10);// {2,3,5,5,6,7,8,9,10}
    ms.erase(ms.find(2),ms.find(5));
    for (auto it = ms.begin(); it !=ms.end(); it++){
        cout << *(it)<<" "; //{5,5,6,7,8,9,10}
    }
    cout<<endl;

    
}




int main(){
    Explained_Multi_set();
    return 0;
}