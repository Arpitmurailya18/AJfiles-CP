#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to trim leading and trailing whitespaces from a string
string trim(const string &str) {
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first) {
        return "";
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " input_file output_file answer_file" << endl;
        return 1;
    }

    ifstream input_file(argv[1]);
    ifstream output_file(argv[2]);
    ifstream answer_file(argv[3]);

    if (!input_file.is_open()) {
        cerr << "Error opening input file: " << argv[1] << endl;
        return 1;
    }
    if (!output_file.is_open()) {
        cerr << "Error opening output file: " << argv[2] << endl;
        return 1;
    }
    if (!answer_file.is_open()) {
        cerr << "Error opening answer file: " << argv[3] << endl;
        return 1;
    }

    string expected_output;
    string participant_output;

    while (getline(answer_file, expected_output) && getline(output_file, participant_output)) {
        expected_output = trim(expected_output);
        participant_output = trim(participant_output);

        if (expected_output != participant_output) {
            cout << "Wrong answer: expected \"" << expected_output << "\", found \"" << participant_output << "\"" << endl;
            return 1;
        }
    }

    // Check if there are any remaining lines in the answer file
    if (getline(answer_file, expected_output) && !expected_output.empty()) {
        cout << "Output length mismatch: additional lines in answer file." << endl;
        return 1;
    }

    // Check if there are any remaining lines in the output file
    if (getline(output_file, participant_output) && !participant_output.empty()) {
        cout << "Output length mismatch: additional lines in output file." << endl;
        return 1;
    }

    cout << "OK" << endl;
    return 0;
}
