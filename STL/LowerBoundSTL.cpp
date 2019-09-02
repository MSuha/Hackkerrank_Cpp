#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, input;
    size_t target;
    vector<int>::iterator low;

    cin>>size;

    vector<int>my_vector(size);

    for(int i = 0; i < size; i++){
        cin>>input;
        my_vector[i] = input;
    }

    cin >> target;

    for(int i = 0; i < target; i++){
        cin>>input;
        low = lower_bound(my_vector.begin(),my_vector.end(),input);
        if(*low == input){
            cout<<"Yes "<< distance(my_vector.begin(),low)+1  <<endl;
        }
        else{
            cout<<"No "<< distance(my_vector.begin(),low)+1  <<endl;
        }
    }
}
