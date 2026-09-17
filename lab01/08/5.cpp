#include <vector>
#include <iostream>
int main() {
    // ƒобавлен двоичный литерал 0b1100 (это 12 в дес€тичной)
    std::vector<int> v = {1,2,3,4,5,0b1100};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}