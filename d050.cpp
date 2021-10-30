#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    a +=9;
    if (a>24){
        a-=24;
    }
    //cout<<(h-15+24)%24<<endl;//%=求h-15+24除24的"餘數"
    cout << a;




}