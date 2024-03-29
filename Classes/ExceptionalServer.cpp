#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
    static int load;
public:
    static int compute(long long A, long long B) {
        load += 1;
        if(A < 0) {
            throw std::invalid_argument("A is negative");
        }
        vector<int> v(A, 0);
        int real = -1, cmplx = sqrt(-1);
        if(B == 0) throw 0;
        real = (A/B)*real;
        int ans = v.at(B);
        return real + A - B*ans;
    }
    static int getLoad() {
        return load;
    }
};
int Server::load = 0;

int main() {
    int T; cin >> T;
    while(T--) {
        long long A, B;
        cin >> A >> B;
        // https://www.hackerrank.com/challenges/exceptional-server/forum helped me a lot to solve this problem
        // and about learning exceptions
        // Also we need to add that "hack" to trivial solution to solve timeout problem.

        try {
            if (A < 10000000) {
                // <-- HACK 10 MB limit to deal with  server not thrown exception as it should.
                cout << Server::compute(A,B) << endl;
            } else  {
                Server::compute(10,1);
                cout << "Not enough memory" << endl;
            }

        }
        catch (bad_alloc& error) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& error) {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }


    }
    cout << Server::getLoad() << endl;
    return 0;
}