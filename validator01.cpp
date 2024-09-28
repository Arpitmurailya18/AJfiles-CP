#include <iostream>
#include <string>
#include <cassert>
using namespace std;

void give_verdict(const string &verdict) {
    cout << verdict << endl;
    exit(0); 
}

void validate_test_case(int n, const string &s) {
    if (!(1 <= n && n <= 1000)) {
        give_verdict("IE");  
    }
    
    if (s.length() != n) {
        give_verdict("IE");  // Input Error for string length mismatch
    }
    
    for (char c : s) {
        if (c != 'L' && c != 'R' && c != 'U') {
            give_verdict("IE");  // Input Error for invalid character in string
        }
    }
}

// Main validator function for the entire input
void validate_input() {
    int t;
    cin >> t;
    
    if (!(1 <= t && t <= 10000)) {
        give_verdict("IE");  // Input Error for invalid t
    }
    
    int total_n = 0;
    
    for (int i = 0; i < t; ++i) {
        int n;
        string s;
        cin >> n >> s;
        
        validate_test_case(n, s);
        
        total_n += n;
        if (total_n > 200000) {
            give_verdict("IE");  // Input Error if total n exceeds the limit
        }
    }
}

int main() {
    try {
        validate_input();
        give_verdict("Accepted");  // Input is valid
    } catch (const exception &e) {
        give_verdict("RUN TIME ERROR");  // Runtime Error
    } catch (...) {
        give_verdict("RUN TIME ERROR");  // Catch all other errors
    }
    return 0;
}
