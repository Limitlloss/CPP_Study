#include <iostream>
int main(){
    int a=10;
    int &b=a;
    int *c=&a;
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"&a="<<&a<<std::endl;
    std::cout<<"b="<<b<<std::endl;
    std::cout<<"&b="<<&b<<std::endl;
    std::cout<<"c="<<c<<std::endl;
    std::cout<<"*c="<<*c<<std::endl;

}