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

void hardDriveBenchmark() {
    const size_t total_file_size = 1000000000;
    const size_t one_time_size = 100;
    double total_time = 0.0;

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
    output_file.close();
    auto end = chrono::high_resolution_clock::now();
    total_time = chrono::duration<double>(end - start).count();

    ifstream input_file("dummyOneBillionBytes.txt", ios::binary);
    if (!input_file) {
        cerr << "Error: Could not open file for reading." << endl;
        return;
    }
    start = chrono::high_resolution_clock::now();
    vector<char> input_buffer(one_time_size);

    while (input_file.read(input_buffer.data(), one_time_size)) {
        // Just reading; no processing needed
    }

    input_file.close();
    end = chrono::high_resolution_clock::now();
    total_time += chrono::duration<double>(end - start).count();

    cout << ANSI_COLOR_YELLOW << "Benchmark for Hard Drive:" << ANSI_COLOR_RESET << endl;
    cout << ANSI_COLOR_GREEN << "Hard Drive Performance Test" << ANSI_COLOR_RESET << endl;
    cout << ANSI_COLOR_RED << "Time taken for reading and writing 100 bytes at a time: " << endl;
    cout << total_time << " seconds" << ANSI_COLOR_RESET << endl;

    if (remove("dummyOneBillionBytes.txt") != 0) {
        cerr << "Error: Could not delete file." << endl;
    }
}















