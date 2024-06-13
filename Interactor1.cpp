#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Define the type alias for ll
typedef long long ll;

// Function to calculate the expected time in the required format
string calculate_expected_time(ll n, const string& s) {
    ll one = 0, two = 0, three = 0;
    for (char c : s) {
        if (c == '>') one++;
        else if (c == '^') two++;
        else three++;
    }
    ll ans = three * 3 + two * 2 + one * 1 + n - 1;
    ll minutes = ans / 60;
    ll seconds = ans % 60;

    ostringstream result;
    if (minutes < 10) result << '0';
    result << minutes << " MIN ";
    if (seconds < 10) result << '0';
    result << seconds << " SEC";

    return result.str();
}

int main() {
    // Read the number of test cases
    int t;
    if (!(cin >> t)) {
        cout << "Invalid input format." << endl;
        return 1;
    }
    
    vector<pair<ll, string>> test_cases(t);
    
    // Read each test case
    for (int i = 0; i < t; ++i) {
        ll n;
        string s;
        if (!(cin >> n >> s)) {
            cout << "Invalid input format." << endl;
            return 1;
        }
        test_cases[i] = {n, s};
    }

    // Provide input to the participant's solution and validate output
    cout << t << endl;
    for (const auto& [n, s] : test_cases) {
        cout << n << endl << s << endl;

        // Read the participant's output
        string participant_output;
        if (!(cin >> ws) || !getline(cin, participant_output)) {
            cout << "Invalid output format." << endl;
            return 1;
        }

        // Calculate the expected output
        string expected_output = calculate_expected_time(n, s);

        // Validate the output
        if (participant_output == expected_output) {
            cout << "OK" << endl;
        } else {
            cout << "Wrong answer: expected \"" << expected_output << "\", found \"" << participant_output << "\"" << endl;
        }
    }

    return 0;
}
