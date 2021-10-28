/**
 * 引入標準程式庫中相關的輸入、輸出程式
 */
#include <iostream>
// 引入標準程式庫中相關的字串程式

// std 為標準程式庫的命名空間
using namespace std;

int main() {
    cout << "Hello World!";
    cout << endl;
    cout << "what your name? ";
    string a;
    string b("Hi ");
    cin >> a;
    cout << b << a;
    return 0;
}
// 執行exe, .\ exe檔案名
