#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int size, input;

    cin>>size;

    vector<int>my_vector(size);

    for(int i = 0; i < size; i++){
        cin>>input;
        my_vector[i] = input;
    }

    sort(my_vector.begin(), my_vector.end());

    for(int i = 0; i < size; i++){
        cout<<my_vector[i]<<" ";
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;


}
