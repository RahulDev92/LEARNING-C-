#include<bits/stdc++.h>
using namespace std;
void Vector(){
        vector <int> v ; {}
        v.push_back(1); // {1}
        v.push_back(2); // {1,2}
        v.emplace_back(3); // {1,2,3}
        v.emplace_back(4);
        vector <int> vectorr(5,100) ; // another vector named vectorr {}
        // {100,100,100,100,100}

        

        vector <int> :: iterator it = v.begin();
        
        
        cout << *(it) <<" " <<endl; //1
        cout << v[0] <<" " <<endl; //1
        cout << v.at(0) << " " <<endl; //1
        vector<int> :: iterator vt = vectorr.begin();
        for (auto vt = vectorr.begin(); vt < vectorr.end(); vt++){
            cout << *(vt) << " " << endl;
        }
        
            
    
        for (vector <int> :: iterator it =v.begin(); it <v.end(); it++){
            cout << *(it) << " ";

        };    
        cout <<endl;


        v.erase(v.begin()+2, v.begin()+4); // erase 2

        for (auto it = v.begin(); it< v.end(); it++){
            cout << *(it) <<" ";
        }





    }



int main(){
    Vector();
    return 0;
}