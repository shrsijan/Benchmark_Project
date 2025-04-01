#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

void memoryBenchmark() {
    const size_t array_size = 500000000;
    double total_time = 0.0;
    double dummy_read_value = 0.0;
    vector<float> my_arr(array_size, 0.0f);

    auto start = chrono::high_resolution_clock::now();
    for (size_t i = 0; i < array_size; ++i) {
        my_arr[i] = static_cast<float>(i);
    }
    for (size_t i = 0; i < array_size; ++i) {
        dummy_read_value = my_arr[i];
    }
    auto end = chrono::high_resolution_clock::now();
    total_time = chrono::duration<double>(end - start).count();
    cout << ANSI_COLOR_YELLOW << "Benchmark:" << ANSI_COLOR_RESET << endl;

