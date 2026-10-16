#include<bits/stdc++.h>
using namespace std;


void learningVector(){

    vector <int> vec;
    vec.push_back(1); // store 1
    vec.emplace_back(5);
    vec.emplace_back(6);
    vec.emplace_back(7);
    vec.emplace_back(8);
    cout << "done" <<endl;
    cout << vec[0] <<endl;

    
    vector <int> :: iterator it = vec.begin();
    it++;
    for (auto it = vec.begin(); it < vec.end(); it++){
        cout << * (it) << " ";
    }

   
   

}


int main (){
    learningVector();
    
   


    return 0;
}


// how to define a vector

// // vector <int> v;
// // v.push_back()
// // v.emplace_back()
// // v.insert()



// how to define a iterator

// vector <date_type> ::iterator it (anyname) = v.begin() ---> this is use for allocate the memory 

