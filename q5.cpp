#include <iostream>
#include <string>

std::string reverse(std::string str) {
    std::string result;
    auto str_size = str.size();
    result.resize(str_size + 1);

    for (int i = 0; i <= str_size; ++i)
        result[i] = str[str_size - i];

    return result;
}

int main() {
    std::string str("Target sistemas");
    std::cout << str << " - " << reverse(str) << '\n';
}
