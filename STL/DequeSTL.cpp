#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int> dque(k);
    int i;

    for(i = 0; i < k; i++){
        while( !(dque.empty()) && arr[i] >= arr[dque.back()])
            dque.pop_back();
        dque.push_back(i);
    }

    for(; i < n; i++){
        cout<<arr[dque.front()]<<" ";
        if(dque.front() <= i-k)
            dque.pop_front();
        while(!(dque.empty()) && arr[i] >= arr[dque.back()])
            dque.pop_back();
        dque.push_back(i);
    }
    cout<<arr[dque.front()]<<endl;
}

int main(){

    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        scanf("%d %d", &n, &k);
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d", arr+i);
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}

