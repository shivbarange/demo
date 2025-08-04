#include <iostream>
#include <cstring>

class MyString {
    char* data;
public:
    // Constructor
    MyString(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
        std::cout << "Constructor called\n";
    }

    // Destructor
    ~MyString() {
        delete[] data;
    }

    // Copy Constructor
    MyString(const MyString& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Copy Constructor called\n";
    }

    // Move Constructor
    MyString(MyString&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        std::cout << "Move Constructor called\n";
    }

    void display() const {
        if (data)
            std::cout << data << std::endl;
        else
            std::cout << "null\n";
    }
};

int main() {
    MyString a("Hello");
    MyString b = std::move(a);  // Triggers move constructor
    a.display(); // should print null
    b.display(); // should print Hello
    return 0;
}

