#include<bits/stdc++.h>
using namespace std;
void insertInvector(){
    vector<int> v(2,100); // {100,100}
    v.insert(v.begin(), 50); // {50, 100 ,100}
    v.insert(v.begin()+1,2,300);  // {50,300,300,100,100}
    
    vector<int> :: iterator it ;
    for (auto it =v.begin(); it <v.end();it++){
        cout << *(it) << " ";
    }
    cout<<endl;


    vector<int> cp(2,10);
    v.insert(v.begin(),cp.begin(),cp.end());
    for (auto it =v.begin(); it <v.end();it++){
        cout << *(it) << " ";

    }
    cout << "this is for pop back and size";
    cout << v.size();
    v.pop_back();
    for (auto it =v.begin(); it <v.end();it++){
        cout << *(it) << " ";

    }
    cout << "this is swap" <<endl;
    vector<int> v1,v2;
    v1 ={10,20};
    v2 = {30,40};
    v1.swap(v2);
    for (auto it =v1.begin(); it <v1.end();it++){
        cout << *(it) << " ";

    }
    cout << "this is clear" <<endl;

    v.clear();
    for (auto it =v.begin(); it <v.end();it++){
        cout << *(it) << " ";

    }
    cout << v.empty();



}






int main (){
    insertInvector();
    return 0;

}