#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, theInt;
    cin >> size;

    vector<int> intVector;

    for(int i = 0; i<size; i++){
        cin >> theInt;
        intVector.push_back(theInt);
    }
    for(int i = intVector.size() - 1; i > -1; i--){
        cout<<intVector[i]<<" ";
    }
    return 0;
}
