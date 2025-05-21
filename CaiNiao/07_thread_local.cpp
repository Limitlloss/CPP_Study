#include <iostream>
#include <thread>
#include <stdexcept>

// 每个线程都有自己的 threadSpecificVar
thread_local int threadSpecificVar = 0;

// 线程函数，用于设置和打印线程特有的变量
void threadFunction(int id) {
    threadSpecificVar = id; // 设置线程特有的变量
    std::cout << "Thread " << id << ": threadSpecificVar = " << threadSpecificVar << std::endl;
}

// 主函数，创建并管理两个线程
int main() {
    try {
        std::thread t1(threadFunction, 1); // 创建第一个线程并传入参数1
        std::thread t2(threadFunction, 2); // 创建第二个线程并传入参数2

        if (t1.joinable()) {
            t1.join(); // 等待第一个线程完成
        }
        if (t2.joinable()) {
            t2.join(); // 等待第二个线程完成
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n'; // 捕获并打印异常信息
        return 1; // 返回非零值以表示程序异常退出
    }

    return 0; // 返回0表示程序正常退出
}