#include <iostream>
#include <string>

int main() {
    try {
        std::string name;
        std::cout << "请输入你的名字" << std::endl;
        std::getline(std::cin, name);
        std::cout << "你输入的名字是" << name << std::endl;
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "发生错误: " << e.what() << std::endl;
        return 1;
    }
}
