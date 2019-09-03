#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {


    int size, input, command;

    cin >> size;

    set<int>my_set;
    for(int i = 0; i < size; i++){
        cin >> command >> input;
        if(command == 1){
            my_set.insert(input);
        }
        else if(command == 2){
            my_set.erase(input);
        }
        else{
            if(my_set.find(input) == my_set.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
}



