#include <iostream>

void makeNegative(int& n) {
    n = -n ;
}

int main() {
    int value = 8;
    makeNegative(value);
    std::cout << value << '\n';
}