// hello.cpp — C++ 基础示例
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "请输入你的名字：";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
