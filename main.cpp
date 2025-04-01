#include <iostream>

// Declare benchmark functions from other files
void mainBenchmark();
void hardDriveBenchmark();

int main() {
    std::cout << "Running Floating Point Benchmark...\n";
    mainBenchmark();

    std::cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark();

    return 0;
}
