#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, type, key;
    string name;
    map<string, int> tel;

    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> type >> name;
        if(type == 1){
            cin >> key;
            tel[name] += key;
        }
        else if(type == 2){
            tel.erase(name);
        }
        else{
            cout << tel[name] << endl;
        }
    }
    return 0;
}



