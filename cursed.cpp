#include <iostream>
#include <cstdio>

template<int N>
struct x{ x(){ std::cout << N; } };
struct uncreatable{ template <typename T> uncreatable() { std::cout << "Never prints"; } };
int main()
{
    int arr[5] = {0,1,2,3,4}; int brr[5] = {4,3,2,1,0};
    for (int i = 0; i < 5; i++) { std::cout << arr[i[brr]]; }
    std::cout << std::endl;
    int i = 0; while(putchar(i++["Hello World"]) && putchar(' '));
    std::cout << std::endl;
    //uncreatable u; // this object can never be created
    []{};[](){}();
    x <('y')> z;
    return 0;
}