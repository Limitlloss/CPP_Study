#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

// 自定义类型示例
struct Person {
    string name;
    int age;
};

enum class Color { RED, GREEN, BLUE }; // 强类型枚举(C++11)

union Number {
    int i;
    double d;
};

// 类型别名
typedef unsigned short USHORT;
using MyInt = int;

// 继承层次结构
class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    // 基本数据类型
    bool isCppFun = true;
    char grade = 'A';
    int age = 30;
    float price = 19.99f;
    double pi = 3.1415926535;

    // 带修饰符的类型
    unsigned int positive = 1000;
    long bigNumber = 1000000L;
    long long hugeNumber = 9'223'372'036'854'775'807LL;

    // 输出基本类型
    cout << "基本类型示例:\n";
    cout << "bool: " << isCppFun << "\nchar: " << grade
         << "\nint: " << age << "\nfloat: " << price
         << "\ndouble: " << pi << "\nunsigned: " << positive
         << "\nlong long: " << hugeNumber << "\n\n";

    // 结构体和枚举
    Person p {"Alice", 25};
    Color favorite = Color::GREEN;
    Number num;
    num.i = 42;

    cout << "结构体: " << p.name << ", " << p.age << "岁\n";
    cout << "枚举值: " << static_cast<int>(favorite) << endl;
    cout << "联合体: " << num.i << "\n\n";

    // 数组和指针
    int nums[5] = {1, 2, 3, 4, 5};
    int* ptr = nums;
    int& ref = age;

    cout << "数组第三个元素: " << nums[2] << endl;
    cout << "指针解引用: " << *(ptr+1) << endl;
    cout << "引用修改前: " << ref;
    ref = 35;
    cout << " 修改后: " << age << "\n\n";

    // 标准库容器
    vector<string> names {"Bob", "Charlie", "David"};
    array<int, 3> scores = {90, 85, 95};

    cout << "vector元素: ";
    for (const auto& name : names) {
        cout << name << " ";
    }

    cout << "\narray元素: ";
    for (auto score : scores) {
        cout << score << " ";
    }
    cout << "\n\n";

    // 类型转换示例
    int count = 15;
    
    // 静态转换
    double preciseCount = static_cast<double>(count);
    
    // 常量转换
    const int MAX = 100;
    int& mutableMax = const_cast<int&>(MAX);
    mutableMax = 200;  // 注意：实际修改const变量是未定义行为
    
    // 重新解释转换
    int value = 65;
    char* charPtr = reinterpret_cast<char*>(&value);
    
    // 动态转换
    Animal* animal = new Dog();
    if (Dog* dog = dynamic_cast<Dog*>(animal)) {
        cout << "动态转换成功: ";
        dog->speak();
    }
    delete animal;

    cout << "\n类型转换结果:\n"
         << "静态转换: " << preciseCount
         << "\n修改后的MAX: " << MAX  // 可能仍显示100，取决于编译器优化
         << "\n重新解释转换: " << *charPtr
         << endl;

    return 0;
}