#include <iostream>
#include <vector>
using namespace std;

// Function to check if the vector is an arithmetic progression and find the common difference
bool isArithmeticProgression(const vector<int>& vec, int& commonDifference) {
    // Check if the vector has fewer than 2 elements
    if (vec.size() < 2) {
        commonDifference = 0; // No meaningful common difference
        return false;
    }

    // Calculate the common difference using the first two elements
    commonDifference = vec[1] - vec[0];

    // Check the rest of the elements
    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i + 1] - vec[i] != commonDifference) {
            return false;
        }
    }

    return true;
}

int main() {
    // Example usage
    vector<int> sequence1 = {2, 4, 6, 8, 10}; // This is an AP with a common difference of 2
    vector<int> sequence2 = {1, 3, 6, 9};    // This is not an AP

    int commonDifference;

    if (isArithmeticProgression(sequence1, commonDifference)) {
        cout << "The sequence is an arithmetic progression with a common difference of " << commonDifference << endl;
    } else {
        cout << "The sequence is not an arithmetic progression." << endl;
    }

    if (isArithmeticProgression(sequence2, commonDifference)) {
        cout << "The sequence is an arithmetic progression with a common difference of " << commonDifference << endl;
    } else {
        cout << "The sequence is not an arithmetic progression." << endl;
    }

    return 0;
}
