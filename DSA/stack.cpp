#include<bits/stdc++.h>
using namespace std;

void ExplainedStack(){ // It hold a LIFO based elements (Last in First Out)
    stack<int> st;
    st.push(1); // {1}
    st.push(2); //{2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}
    cout <<st.top()<<endl;
    cout << st.empty()<<endl;
    cout<< st.size()<<endl;
    stack<int> st1,st2;
    st1.swap(st2);


}




int main(){
    ExplainedStack();
    return 0;
}