#include <iostream>
#include <time.h>

int main() {
    auto *arr = new unsigned[9];
    unsigned sum;

    double start = clock() * 1.0 / CLOCKS_PER_SEC;
    for (uint8_t i = 0; i < 10; ++i)
    {
        arr[i] = i*i*i;
    }
    for (uint8_t a = 1; a < 9; ++a)
        for(uint8_t b = 0; b < 9; ++b)
            for(uint8_t c = 0; c < 9; ++c)
            {
                sum = arr[a] + arr[b] + arr[c];
                if(sum == (a * 100 + b * 10 + c))
                    std::cout << sum << std::endl;
            }
    double end = clock() * 1.0 / CLOCKS_PER_SEC;
    std::cout << end - start << "sec" << std::endl;

    return 0;
}

