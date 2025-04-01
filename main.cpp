#include <iostream>

// Declare benchmark functions from other files
void mainBenchmark();
void hardDriveBenchmark();
void hardDriveBenchmark2();

int main() {
    // std::cout << "Running Floating Point Benchmark...\n";
    // mainBenchmark();

    std::cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark();

    // std::cout << "\nRunning Hard Drive Benchmark...\n";
    // hardDriveBenchmark2();

    return 0;
}
