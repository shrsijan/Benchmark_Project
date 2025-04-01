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

void hardDriveBenchmark2() {
    const size_t total_file_size = 1000000000;
    const size_t one_time_size = 10000;
    double total_time = 0.0;

    // Writing 10^9 bytes to a file, 10000 bytes at a time
    ofstream output_file("dummyOneBillionBytes.txt", ios::binary);
    if (!output_file) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }
    auto start = chrono::high_resolution_clock::now();
    vector<char> output_buffer(one_time_size, 'A');
    size_t bytes_written_so_far = 0;

    while (bytes_written_so_far < total_file_size) {
        output_file.write(output_buffer.data(), one_time_size);
        bytes_written_so_far += one_time_size;
    }
}
