#include<iostream>
using namespace std;

void pattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=i; j++){
            cout << "* ";

        }
        cout << endl;
    }
}
void pattern3(int n) {
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4 (int n) {

    for(int i = 1; i<=n; i++) {
        for (int j = 1; j<=n-i+1; j++){
            cout << "* " ;
        }
        cout <<endl;
    }
}
void pattern5 (int n) {
    for(int i = 1; i<=n; i++) {
        for (int j = 1; j<=n-i+1; j++){
            cout << j << " " ;
        }
        cout <<endl;
    }
}
void pattern6(int n){
    for (int i = 1; i <= 2 * n - 1; i++){
        int stars = i;
        
        if (i > n) {
            stars = 2 * n - i; // Fixed line
        }
        for (int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern7(int n){
    int start = 1;
    for (int i = 1 ; i<=n; i++){
        if (i%2==1) start = 1;
        else start =0;
        for (int j =1; j<=i; j++){
            cout << start;
            if (j<i){
                cout << " "; 
            }
            start = 1-start;
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<= n-i; j++){
            cout << " ";
        }    
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
        
        
    }
}
void pattern9 (int n){
    for (int i =1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << j ; 
        }
        for (int k = 1; k <=n-i; k++){
            cout << " ";
        }
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        for (int k =i; k>=1; k--){
            cout << k;
        }
        cout << endl;


    }
}
void pattern10 (int n){
    int ver = 1;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << ver;
            ver= ver+1;

        }
        cout<<endl;
    }
}
void pattern11 (int n){
    for (int i = 0; i <=n ; i++){
        for (char ch ='A'; ch <= 'A' +i; ch++){
            cout << ch ;


        }
        cout <<endl;
    }
}
void pattern12 (int n){
    for (int i =0 ; i<n; i++){
        for (char ch = 'A'; ch <'A'+( n-i); ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern13 (int n){
    char ch = 'A';
    for (int i= 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout << ch;
            
            
        }
        ch = ch +1;
        cout << endl;
    }
}
void pattern14 (int n) {
    for (int i = 0 ; i < n; i++){
        // space
        for (int j = 0; j< n-i-1; j++){
            cout << " ";
        }
        // charcter
        char ch = 'A';
        
        for (int j = 0 ; j< 2*i +1; j++){
            cout << ch;
            if  (j<(2*i+1)/2){
                ch++;
            }else {
                ch--;
            }
        }
        // space
        
        
        cout << endl;
    }
}
void pattern15 (int n) {
    for (int i = 1; i<=n; i++){
        char ch = 'A';
        for (int j =1; j<=i; j++){
            cout << ch;
            
        }
        cout << endl;
    }
}
    
    






int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    pattern15(n);
    return 0;
}