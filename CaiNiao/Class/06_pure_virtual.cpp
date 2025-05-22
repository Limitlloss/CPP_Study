#include <iostream>
using namespace std;
 
class Shape {
public:
    virtual int area() = 0;  // 纯虚函数，强制子类实现此方法
};
 
class Rectangle : public Shape {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) { }
    
    int area() override {  // 实现纯虚函数
        return width * height;
    }
};
 
int main() {
    Shape *shape = new Rectangle(10, 5);
    cout << "Rectangle Area: " << shape->area() << endl;  // 输出: Rectangle Area: 50
    delete shape;
}