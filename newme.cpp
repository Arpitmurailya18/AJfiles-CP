#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element
#include <utility> // for std::pair

int main() {
    // Initialize a vector of pairs
    std::vector<std::pair<int, int>> vec = {
        {1, 2},
        {3, 4},
        {5, 6},
        {4, 7}
    };

    // Find the maximum pair using std::max_element
    auto max_pair_it = std::max_element(vec.begin(), vec.end());

    // Check if the vector is not empty
    // if (max_pair_it != vec.end()) {
        std::cout << "Maximum Pair: (" << max_pair_it->first << ", " << max_pair_it->second << ")" << std::endl;
    // } else {
    //     std::cout << "The vector is empty." << std::endl;
    // }

    return 0;
}
