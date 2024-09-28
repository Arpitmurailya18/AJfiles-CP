#include <iostream>
#include <vector>
#include <numeric> // For std::gcd
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate GCD of multiple numbers
int findGCD(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        result = gcd(result, nums[i]);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> columnGCDs(n, 0);

    // Calculate GCD for each column above the principal diagonal
    for (int j = 1; j < n; ++j) {  // Start from the second column
        vector<int> elementsAboveDiagonal;
        for (int i = 0; i < j; ++i) {
            elementsAboveDiagonal.push_back(matrix[i][j]);
        }
        columnGCDs[j] = findGCD(elementsAboveDiagonal);
    }

    // Print the GCD of each column separated by a space
    for (int j = 1; j < n; ++j) {
        cout << columnGCDs[j] << " ";
    }
    cout << endl;

    return 0;
}
