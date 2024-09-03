#include <iostream>
#include <vector>

double sum(std::vector<std::pair<std::string, double>> *data_set) {
    double sum = 0;
    for (const auto& data : *data_set) {
        sum += data.second;
    }
    return sum;
}

void summary(std::vector<std::pair<std::string, double>> *data_set) {
    auto total = sum(data_set);
    
    std::cout << "Estado" << " -- " << "faturamento" << " -- %\n";
    for (const auto& data : *data_set) {
        std::cout << data.first << " -- " << data.second << " -- " << data.second / total * 100 << '\n';
    }
    std::cout << "total -------- " << total << '\n';
}

int main() {
    std::vector<std::pair<std::string, double>> data = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"Outros", 19849.53}
    };
    
    summary(&data);
}
