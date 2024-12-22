#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec;
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


// how to input elements in vector
// how to print elements in vector
// how to access elements in vector
// how to update elements in vector