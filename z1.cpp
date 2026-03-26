#include <iostream>

int main() {
    int a = 1;
    double b = 2.333333;
    float c = 3.2222222;
    char d = 'a';
    bool e = false;
    
    double ab = static_cast<double>(a);
    int ba = static_cast<int>(b);
    std::cout << ab << ' ' << ba << '\n';
    float bc = static_cast<float>(b);
    double cb = static_cast<double>(c);
    std::cout << bc << ' ' << cb << '\n';
    int da = static_cast<int>(d);
    char ad = static_cast<char>(a);
    std::cout << da << ' ' << ad << '\n';
    bool ae = static_cast<bool>(a);
    int ea = static_cast<int>(e);
    std::cout << ae << ' ' << ea << '\n';
    
    return 0;
}
