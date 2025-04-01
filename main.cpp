#include <iostream>

// Declare benchmark functions from other files
void mainBenchmark();
void hardDriveBenchmark();
void hardDriveBenchmark2();
void integerBenchmark();

using namespace std;

int main() {
    cout << "Running Floating Point Benchmark...\n";
    mainBenchmark();

    cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark();

    cout << "\nRunning Hard Drive Benchmark...\n";
    hardDriveBenchmark2();

    cout << "\nRunning Integer Benchmark...\n";
    integerBenchmark();

    return 0;
}
