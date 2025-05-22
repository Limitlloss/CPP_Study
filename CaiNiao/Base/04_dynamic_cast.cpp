#include <iostream>
class Base{
    public :
        virtual  ~Base()=default;
};
class Derived :public Base{
    public:
        void show_class(){
            std::cout<<"Derived cout"<<std::endl;
        }
};
int main(){
    Base* ptr_base=new Derived();//创建一个指向派生类对象的基类指针；
    Derived* ptr_derived=dynamic_cast<Derived *>(ptr_base);
    if(ptr_derived!=nullptr){
        ptr_derived->show_class();
    }
    else{
        std::cout<<"dynamic_cast failed"<<std::endl;
    }
    delete ptr_base;
    return 0;
}