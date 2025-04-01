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
