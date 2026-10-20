// Lets understand List
#include<bits/stdc++.h>
using namespace std;
void ExplainedList(){
    list<int> lst;
    lst.push_back(1); // {1}
    lst.emplace_back(2); // {1,2}
    lst.push_front(3); // {3,1,2}
    lst.emplace_front(4); //{4,3,2,1}


    list<int> :: iterator it = lst.begin();
    for (auto it = lst.begin(); it != lst.end(); it++){
        cout << *(it) <<' ';

    }
    cout << endl;
}


void Swaplist(){
    list<int> lst1 = {1,2,3,4};
    list<int> lst2 = {5,6,7,8};
    lst1.swap(lst2);
    list <int> :: iterator it;
    for (auto it =lst1.begin(); it !=lst1.end(); it++){
        cout << *(it)<<" ";
    }
    cout<< endl;
    cout << lst1.size()<<endl;;
    cout << lst1.empty();


}


int main (){
    ExplainedList();
    
    Swaplist();
    return 0;
}


