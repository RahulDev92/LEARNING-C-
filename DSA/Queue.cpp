#include<bits/stdc++.h>
using namespace std;
void ExplainedQueue(){ //it has FIFO (first in first out)

    queue<int> qu;
    qu.push(1); //{1}
    qu.push(3); //{1,3}
    qu.emplace(2);//{1,3,2}
    qu.emplace(4);//{1,3,2,4}
    qu.back()+=10;//{1,3,2,14}
    cout << qu.back()<<endl; //14
    cout << qu.front()<< endl; //1
    qu.pop(); // pop from front 
    cout << qu.back()<<endl; 
    cout << qu.front()<< endl; //{3,2,14}
    


}





int main (){
    ExplainedQueue();
    return 0;
}