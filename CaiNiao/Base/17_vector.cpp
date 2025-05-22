#include <iostream>
#include <vector>

int main() {
    try {
        std::vector<int> v_test = {1, 2, 3, 4}; // 直接初始化，减少不必要的 push_back 调用
        for (size_t i = 0; i < v_test.size(); ++i) { // 使用 size_t 类型更符合标准
            std::cout << "v_test[" << i << "] = " << v_test[i] << std::endl;
        }
        std::cout << std::endl;
    } catch (const std::exception& e) { // 捕获并处理可能的异常
        std::cerr << "发生错误: " << e.what() << std::endl;
    }
    return 0; // 明确返回值
}
