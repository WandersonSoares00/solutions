#include <iostream>

bool is_fib(int x) {
    int prev1 = 0;
    int prev2 = 1;
    int curr = prev1;
    
    while (curr <= x){
        if (curr == x)
            return true;
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return false;
}

int main(int argc, char **argv) {
    int v = 21;

    std::cout << v << " e " << is_fib(v) << '\n';
}
