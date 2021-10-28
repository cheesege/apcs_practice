/**
 * 引入標準程式庫中相關的輸入、輸出程式
 */
#include <iostream>
// 引入標準程式庫中相關的字串程式

// std 為標準程式庫的命名空間
using namespace std;

int main() {
    for (int i = -10; i < 10; ++i) {
        for (int j = 10 - abs(i); j > 0 + 1; --j)
            cout << "電電起司 ";
        for (int j = 9 * 15 - (10 - abs(i)); j > 0 + 1; --j)
            cout << "i need to sleep im so tired　　　　 "; // have a good dream, good night!bye
        for (int j = 10 - abs(i); j > 0 + 1; --j) {
            cout << "電電起司 ";
        }
        cout << endl;
    }
    return 0;
}
// 執行exe, .\ exe檔案名
