#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // pairs
    pair<int, int> p = {1, 3};
    int num = p.first;
    cout << p.second << endl;
    cout << num << endl;
    cout << "The end of single pair" << endl;

    // nested pairs
    pair <int , pair<int , int>> pairs = {2 , {3,4}};
    cout << pairs.second.second << endl;


    pair <string, string> name = {"Rahul" , "Kumar"};
    cout << name.first << " " << name.second << endl;
    pair<string, pair<string, pair<int, pair<int, int>>>> veriable =
        {"Rahul", {"kumar", {7, {1, 2}}}};
    cout << veriable.second.second.second.first << endl;


    pair<int, int> arr[] = {{1,2} , {3,4} , {5,6} };
    cout << arr[0].second << endl;








    return 0;
}