#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <cstdio>

using namespace std;

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

void mainBenchmark() {
    const size_t total_file_size = 1000000000;
    const size_t one_time_size = 100;
    double total_time = 0.0;

    ofstream output_file("dummyOneBillionBytes.txt", ios::binary);
    if (!output_file) {
        cerr << "Error: Could not open file for writing." << endl;


