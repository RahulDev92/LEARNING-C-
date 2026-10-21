//lets understand priority Queue
#include<bits/stdc++.h>
using namespace std;
void Explained_priority_queue(){
    priority_queue<int> pq;
    pq.push(9);
    pq.push(8);
    pq.emplace(1);
    pq.emplace(2);
    cout << pq.top()<<endl;
    pq.pop(); // it also pop from top like queue
    cout<< pq.top()<<endl;
    /*and its all the function are same as stack and queue
    */
    

}
//lets understand minimum heap
void minHeap(){
    priority_queue<int,vector<int>,greater<int>> pq; // i have to remember this 
    // this syntax this is min heap syntax
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    cout<<pq.top()<<endl;
    


}



int main(){
    Explained_priority_queue();
    minHeap();
    return 0;

}