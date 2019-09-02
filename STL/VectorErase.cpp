#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, input;
    size_t target, range1, range2;

    cin>>size;

    vector<int>my_vector(size);

    for(int i = 0; i < size; i++){
        cin>>input;
        my_vector[i] = input;
    }

    cin >> target >> range1 >> range2;

    my_vector.erase(my_vector.begin()+target-1);

    my_vector.erase(my_vector.begin()+range1-1, my_vector.begin()+range2-1);

    cout<<my_vector.size()<<endl;

    for(int i = 0; i < my_vector.size(); i++){
        cout << my_vector[i] << " ";
    }

}
