#include <iostream>
// Lambda函数很简洁，但变化较多。

// 1、什么也不捕获，或者是故意不用 Lambda 函数外部的变量
/*

#include <iostream>
using namespace std;

int main()
{
    int i = 1024;
    auto func = [] { cout << i; };
    func();
}  // 结果报错，因为未指定默认捕获模式
    // error: use of undeclared identifier 'i'
*/

// 正确的如下：
/*
#include <iostream>
using namespace std;

int main()
{
    int i = 1024;
    auto func = [=]{  // [=] 表明将外部的所有变量拷贝一份到该Lambda函数内部
        cout << i;
    };
    func();
}
 */
// 2、引用捕获
/*
#include <iostream>
using namespace std;

int main()
{
    int i = 1024;
    std::cout << &i << std::endl;
    auto fun1 = [&]{
        std::cout << &i << std::endl;
    };
    fun1();
}
*/

// 3、复制并引用捕获
/*
#include <iostream>
using namespace std;

int main()
{
    int i = 1024, j = 2048;

    cout << "i:" << &i << endl;
    cout << "j:" << &j << endl;

    auto fun1 = [=, &i]{ // 默认拷贝外部所有变量，但引用变量 i
        cout << "i:" << &i << endl;
        cout << "j:" << &j << endl;
    };
    fun1();
}
*/

// 4、指定引用或复制
/*
#include <iostream>
using namespace std;

int main()
{
    int i = 1024, j = 2048;

    cout << "outside i value:" << i << " addr:" << &i << endl;

    auto fun1 = [i]{
        cout << "inside  i value:" << i << " addr:" << &i << endl;
        // cout << j << endl; // j 未捕获
    };
    fun1();
}
 */

// 5、捕获this指针
/*
#include <iostream>
using namespace std;

class test
{
public:
    void hello() {
        cout << "test hello!n";
    };
    void lambda() {
        auto fun = [this]{ // 捕获了 this 指针
            this->hello(); // 这里 this 调用的就是 class test 的对象了
        };
        fun();
    }
};

int main()
{
    test t;
    t.lambda();
}

*/

int main()
{
    int result = [](int a, int b)
    {
        return a * b;
    }(5, 10);
    std::cout << "result=" << result << std::endl;
}