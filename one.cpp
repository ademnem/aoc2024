#include <algorithm>
#include <string>
#include <vector>

#include "file.hpp"

using namespace std;


void remove_num(vector<int>& list, int num) {

    list.erase(find(list.begin(), list.end(), num));
}

int find_min(vector<int>& list) {

    int min = *min_element(list.begin(), list.end()); 
    remove_num(list, min);
    return min;
}

int find_distance(vector<int>& l1, vector<int>& l2) {
    
    int distance = 0;

    int length = l1.size();
    for (int i = 0; i < length; ++i) {
        int min1 = find_min(l1);
        int min2 = find_min(l2);
        distance += abs(min1 - min2);
    }

    return distance;
}


int main() {
    vector<int> l1;
    vector<int> l2;
    fill_lists(l1, l2);
  
   
    cout << find_distance(l1, l2) << endl;

    return 0;
}
