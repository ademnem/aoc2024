#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;


void fill_lists(vector<int>& l1, vector<int>& l2) {
    ifstream f("input");

    if (!f.is_open())
        cout << "ERROR OPENING FILE" << endl;

    for (string line; getline(f, line); ) {
        l1.push_back(stoi(line.substr(0, line.find("   ")))); 
        l2.push_back(stoi(line.substr(line.find("   "), line.size() - 1))); 
    }
}


#endif
