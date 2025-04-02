#include <iostream>

// Declare benchmark functions from other files
void mainBenchmark();
void hardDriveBenchmark();
void hardDriveBenchmark2();
void integerBenchmark();
void memoryBenchmark();

using namespace std;

int main() {
    cout << "\nRunning Integer Benchmark...\n";
    integerBenchmark();

    cout << "Running Floating Point Benchmark...\n";
    mainBenchmark();

    cout << "\nRunning Memory Benchmark...\n";
    memoryBenchmark();

    cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark();

    cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark2();


    return 0;
}
