#include <iostream>

class A {
public:
    A() {
        // throw 42;
    }
    ~A()
    {
        // throw 42;

    }
};

int main() {
    try {
        A a;
        throw 32;
    }
    catch(int a) {
        std::cout << a << std::endl;
    }
}
