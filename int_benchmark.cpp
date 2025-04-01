#include <iostream>
#include <chrono>

using namespace std;

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

void integerBenchmark() {
    long long dummy_value = 7;
    long long res = 0;
    double total_time = 0.0;

    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 100000; ++j) {
            res = dummy_value + dummy_value;
        }
    }
    auto end = chrono::high_resolution_clock::now();
    total_time += chrono::duration<double>(end - start).count();

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 50000; ++j) {
            res = dummy_value * dummy_value;
        }
    }
    end = chrono::high_resolution_clock::now();
    total_time += chrono::duration<double>(end - start).count();

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 20000; ++j) {
            res = dummy_value / dummy_value;
        }
    }
    end = chrono::high_resolution_clock::now();
    total_time += chrono::duration<double>(end - start).count();

