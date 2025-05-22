#include <iostream>
using namespace std;

// 基类 Shape，表示形状
class Shape
{
protected:
    int width, height; // 宽度和高度

public:
    // 构造函数，带有默认参数
    Shape(int initial_width = 0, int initial_height = 0) : width(initial_width), height(initial_height) {}

    // 虚函数 area，用于计算面积
    // 使用 virtual 关键字，实现多态
    virtual int area()
    {
        cout << "Shape class area: " << endl;
        return 0;
    }
};

// 派生类 Rectangle，表示矩形
class Rectangle : public Shape
{
public:
    // 构造函数，使用基类构造函数初始化 width 和 height
    Rectangle(int initial_width = 0, int initial_height = 0) : Shape(initial_width, initial_height) {}

    // 重写 area 函数，计算矩形面积
    int area() override
    {
        cout << "Rectangle class area: " << endl;
        return width * height;
    }
};

// 派生类 Triangle，表示三角形
class Triangle : public Shape
{
public:
    // 构造函数，使用基类构造函数初始化 width 和 height
    Triangle(int initial_width = 0, int initial_height = 0) : Shape(initial_width, initial_height) {}

    // 重写 area 函数，计算三角形面积
    int area() override
    {
        cout << "Triangle class area: " << endl;
        return (width * height / 2);
    }
};

// 主函数
int main()
{
    Shape *shape;         // 基类指针
    Rectangle rec(10, 7); // 矩形对象
    Triangle tri(10, 5);  // 三角形对象

    // 将基类指针指向矩形对象，并调用 area 函数
    shape = &rec;
    cout << "Rectangle Area: " << shape->area() << endl;

    // 将基类指针指向三角形对象，并调用 area 函数
    shape = &tri;
    cout << "Triangle Area: " << shape->area() << endl;

    return 0;
}