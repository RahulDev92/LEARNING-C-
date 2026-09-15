#include<iostream>
using namespace std;
int main(){
    // CHECKING ADULT OR NOT
    // int age;
    // cout << "Enter your Age : " <<endl;

    // cin >> age;
    // if (age>=18){
    //     cout<< "you are adult ! ";
    // }
    // else{
    //     cout << "you are not adult ";
    // }



    // CHECKING ELIGIBLITY FOR JOB OR RETIREMENT
    int age;
    cout << "Enter your AGE : ";
    cin >> age;
    if (age<18){
        cout << "not eligible for Job ! ";

    }
    else if (age>=18 && age<=55){
        cout << "Eligible For Job ";
    }

    else if(age>=55 && age <=57){
        cout << "Eligible for job but retirement soon..";

    }
    else if (age>57){
        cout << "retirement Time.";
    }



    



    return 0;
}