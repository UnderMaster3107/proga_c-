#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{1, 2, 3, 4, 5};
    int sum = 0;
    bool allEqual = true;

    
    int firstElement = numbers[0];

    for (int number : numbers) {
        sum += number;

        
        if (number != firstElement) {
            allEqual = false;
        }
    }

    std::cout << "Сумма элементов вектора: " << sum << std::endl;

    if (allEqual) {
        std::cout << "Все элементы вектора равны." << std::endl;
    } else {
        std::cout << "Элементы вектора не равны." << std::endl;
    }

    return 0;
}
