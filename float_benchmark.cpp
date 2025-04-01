#include <iostream>
#include <chrono>

// ANSI escape codes for colors
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"


void mainBenchmark() {
    double total_time = 0.0;
    double dummy_value = 8.4;
    double res = 1.2;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 100000; ++j) {
            res = dummy_value + dummy_value;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    total_time += std::chrono::duration<double>(end - start).count();
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 50000; ++j) {
            res = dummy_value * dummy_value;
        }
    }
    end = std::chrono::high_resolution_clock::now();
    total_time += std::chrono::duration<double>(end - start).count();
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 20000; ++j) {
            res = dummy_value / dummy_value;
        }
    }
    end = std::chrono::high_resolution_clock::now();
    total_time += std::chrono::duration<double>(end - start).count();
    std::cout << ANSI_COLOR_YELLOW << "Benchmark for Floating Point Operation" << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_GREEN << "64-bit Floating point operation benchmark"
          << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_RED << "For additions, multiplication, and division is: " << std::endl;
    std:: cout << total_time << " seconds" << ANSI_COLOR_RESET << std::endl;
}





