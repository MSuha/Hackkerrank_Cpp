#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int inp_row_nmbr, output_nmbr, vctr_size, input, vector_state, row_state;
    cin >> inp_row_nmbr >> output_nmbr;

    vector<vector<int>> main_vector(inp_row_nmbr);

    for(int i = 0; main_vector.size() > i; i++){
        cin >> vctr_size;
        for(int j = 0; vctr_size > j; j++){
            cin >> input;
            main_vector[i].push_back(input);
        }
    }

    for(int i = 0; output_nmbr > i; i++){
        cin >> vector_state;
        cin >> row_state;

        cout << main_vector[vector_state][row_state] << endl;
    }

    return 0;
}

