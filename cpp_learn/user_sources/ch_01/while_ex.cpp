#include <iostream>
int main() {
    int sum = 0, value = 0, i = 0;
    while (std::cin >> value) {
        sum += value;
        i++;
    }
    std::cout << "Sum of " << i << " numbers is " << sum << std ::endl;
    return 0;
}
