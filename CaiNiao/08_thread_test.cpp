#include <iostream>
#include <thread>
#include <exception>

thread_local int threadSpecificVar = 0;

void thread_func_cout(int id) {
    threadSpecificVar = id;
    try {
        while (true) {
            std::cout << "Thread_id:" << threadSpecificVar << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1)); // 将单位更改为秒，更符合语义
        }
    } catch (const std::exception& e) {
        std::cerr << "Thread " << id << " encountered an error: " << e.what() << std::endl;
    }
}

int main() {
    try {
        std::thread t1(thread_func_cout, 1);
        std::thread t2(thread_func_cout, 2);

        t1.join(); // 等待线程t1执行完毕
        t2.join(); // 等待线程t2执行完毕
    } catch (const std::exception& e) {
        std::cerr << "Main function encountered an error: " << e.what() << std::endl;
    }

    return 0;
}
