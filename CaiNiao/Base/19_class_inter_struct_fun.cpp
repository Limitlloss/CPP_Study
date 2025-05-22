#include <iostream>
#include <cstring> // 添加cstring头文件以使用strcpy

class Student
{
private:
    int id;
    char name[20];
    int age;

public:
    // 增加对输入参数的检查
    Student(int i, const char *n, int a) : id(i), age(a) {
        if (n == nullptr || strlen(n) >= 20) {
            std::cerr << "Error: Invalid name provided." << std::endl;
            exit(1); // 使用exit退出程序以避免未定义行为
        }
        if (age < 0) {
            std::cerr << "Error: Age cannot be negative." << std::endl;
            exit(1); // 使用exit退出程序以避免未定义行为
        }
        strcpy(name, n); // 使用strcpy初始化name成员变量
    }

    void show_student_info() {
        std::cout << "ID: " << id << " Name: " << name << " Age: " << age << std::endl;
    }
};

int main()
{
    Student s1(101, "John", 20);
    s1.show_student_info();
    return 0;
}
