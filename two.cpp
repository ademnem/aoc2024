#include <algorithm>
#include <iostream>
#include <vector>

#include "file.hpp"



int get_number_of_occurrences(int num, const vector<int>& list) {

    return count(list.begin(), list.end(), num);
}

int calculate_similarity(const vector<int>& l1, const vector<int>& l2) {
    
    int similarity = 0;

    for (int i : l1) {
        int occurrences = get_number_of_occurrences(i, l2); 
        similarity += i * occurrences;
    }
    
    return similarity;
}

int main() {
    vector<int> l1;
    vector<int> l2;
    fill_lists(l1, l2); 
    
    cout << calculate_similarity(l1, l2) << endl;
        
    return 0;
}
