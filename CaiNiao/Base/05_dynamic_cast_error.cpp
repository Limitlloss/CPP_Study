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
    delete ptr_derived;
    /*
    delete ptr_base;
    delete ptr_base;//这句代码会导致内存泄漏，因为ptr_base指向的对象已经被释放了，但是还在使用。
     */
    return 0;
}