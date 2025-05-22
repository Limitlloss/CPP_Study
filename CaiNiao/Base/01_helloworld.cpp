#include <iostream>
using namespace std;

int main() {
    try {
        int num = 999;
        cout << "Hello World! and num=" << num << endl;
    } catch (const exception& e) {
        cerr << "程序运行时发生错误: " << e.what() << endl;
        return 1;
    }
    return 0;
}
