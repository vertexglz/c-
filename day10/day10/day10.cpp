#include <iostream>
#include <vector>
#include <cstddef>
#include <optional>


struct Stats {
    int sum = 0;
    int minVal;
    int maxVal;
    int evenCount = 0;
    double avg = 0.0;
    int negativeCount = 0;
};

std::optional<Stats> calculateResults(const std::vector <int>& numbers) {
    if (numbers.empty()) {
        return std::nullopt;
    }

    Stats result;
    result.minVal = numbers[0];
    result.maxVal = numbers[0];
    for (std::size_t i = 0; i < numbers.size();i++) {
        result.sum += numbers[i];

        if (numbers[i] > result.maxVal) {
            result.maxVal = numbers[i];
        }
        if (numbers[i] < result.minVal) {
            result.minVal = numbers[i];
        }
        if (numbers[i] % 2 == 0) {
            result.evenCount++;
        }
        if (numbers[i] < 0) {
            result.negativeCount++;
        }
    }
    result.avg = static_cast<double> (result.sum) / numbers.size();
    return result;
}

int main() {
    std::vector<int> numbers;
    
    std::optional<Stats> result = calculateResults(numbers);
    if (result.has_value()) {
        Stats stats = result.value();
        std::cout << stats.sum << '\n';
        std::cout << stats.minVal << '\n';
        std::cout << stats.maxVal << '\n';
        std::cout << stats.evenCount << '\n';
        std::cout << stats.avg << '\n';
        std::cout << stats.negativeCount << '\n';
    }
    else {
        std::cout << "Cannot calculate statistics: empty vector\n";
    }
    
    

    return 0;
}


/*В файле day10.cpp напиши программу, которая:
1. Создаёт std::vector<int> со значениями {3, 8, 12, 7, 15, 20, 21, 24}.
2. Вычисляет сумму всех чисел.
3. Вычисляет среднее значение без потери дробной части.
4. Находит минимум и максимум.
5. Считает количество чётных чисел.
6. Выводит все результаты с понятными подписями.*/


/*std::vector <int> numbers = { 3, 8, 12, 7, 15, 20, 21, 24 };
    int minValue = numbers[0];
    int maxValue = numbers[0];

    for (size_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxValue){
            maxValue = numbers[i];
        }
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }

    std::cout << "MinValue: " << minValue << '\n';
    std::cout << "МaxValue: " << maxValue << '\n';*/

/*std::vector<int> numbers = {3, 8, 12, 7, 15, 20, 21, 24};
    int sum = 0;

    for (size_t i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    double avg = static_cast<double>(sum) / numbers.size();
    std::cout << sum << '\n';
    std::cout << avg << '\n';*/

/*std::vector <int> numbers;

numbers.push_back(5);
numbers.push_back(10);
numbers.push_back(15);
std::cout << numbers.size() << '\n';
std::cout << numbers[0]<< ' ' << numbers[numbers.size() - 1] << '\n';
numbers.push_back(20);
std::cout << numbers.size() << '\n';

std::vector <int> numbers1 = { 3, 8, 12, 7, 15, 20, 21, 24 };

for (size_t i = 0; i < numbers1.size(); i++) {
    if (numbers1[i] % 2 == 0) {
        std::cout << numbers1[i] << '\n';

    }
}*/

    /*std::string language = "C++";
    std::cout<< language.size() << '\n';
    language[0] = 'G';
    language += " is powerful";
    std::cout << language << '\n';

    std::string text = "I study Python";
    std::cout << text.find("C++") << '\n';
    std::cout << text.size() << '\n';
    std::cout << text[text.size() - 1] << '\n';

    std::size_t firstPosition = text.find("C++");

    if (firstPosition == std::string::npos) {
        std::cout << "Substring not found" << '\n';
    }
    else {
        std::cout << firstPosition << '\n';
        std::size_t secondPosition = text.find("C++", firstPosition + std::string("C++").size());
        if (secondPosition == std::string::npos) {
            std::cout << "Second occurence not found" << '\n';
        }
        else {
            std::cout << secondPosition << '\n';
        };
    };*/

    