#include <iostream>
#include <memory>
#include <thread>
#include <mutex>
using namespace std;

class Foo {
    int x;
    public :
    Foo(int x):x{x} {}
    int getX() { return x; }
    ~Foo() { cout << "~Foo" << endl; }
};

void fun(std::shared_ptr<Foo> sp, int count) {
        static std::mutex m1;
        std::lock_guard<std::mutex> loc(m1);
        cout << "thread:"<< count << " " << sp.use_count() << endl;
}

int main(){

    std::shared_ptr<Foo> sp(new Foo(100));
    cout << "main before: " << sp.use_count() << endl;
    thread t1(fun, sp, 1), t2(fun, sp, 2), t3(fun, sp, 3);
    t1.join(); t2.join(); t3.join();
    return 0;
}
