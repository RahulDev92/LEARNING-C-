#include<bits/stdc++.h>
using namespace std;

void explainedDeque(){
    deque<int> dq ;
    dq.push_back(1); //{1}

    dq.emplace_back(2); //{1,2}
    dq.insert(dq.begin(),4,3); //{3,3,3,3,1,2}
    dq.push_front(4);
    dq.emplace_front(5); //{5,4,3,3,3,3,1,2}
    dq.pop_back(); // {5,4,3,3,3,3,1}
    dq.pop_front(); // {4,3,3,3,3,1}
    // dq.clear(); // delete all the element form the deque

    cout<<dq.empty()<<endl; // true = 1, flase = 0
    

    deque<int> :: iterator it;
    for (auto it = dq.begin(); it < dq.end(); it++){
        cout << *(it) << ' ';


    }
    cout<< endl;
    cout<<dq.size()<<endl; // show the size of deque

}

int main(){
    explainedDeque();
    return 0;
}