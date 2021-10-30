#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a;
    cin >> a;
    cout <<  fixed << setprecision(3) << (a-32)*5/9;
    //fixed 為固定小數點位數
    //setprecision 為指定輸出位數
    //fixed << setprecision(X) 為指定小數點位數


}