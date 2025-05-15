#include <iostream>
using namespace std;

int main() {
    int calcu_num;
    cout << "请输入int类 型数字，然后将会返回该值的2倍：" << endl;

    // 尝试读取用户输入
    if (!(cin >> calcu_num)) { // 检查输入是否有效
        cout << "输入无效！请输入整数。\r\n" << endl;
        cin.clear(); // 清除错误标志
        cin.ignore(10000, '\n'); // 丢弃缓冲区中剩余的无效输入
    } else {
        cout << "返回值：" << calcu_num * 2 << endl;
    }
    system("pause");
    return 0;
}