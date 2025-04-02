#include <iostream>
#include <cstdlib>
using namespace std;

int main(int n, char* args[]) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += atof(args[i]);
    }
    cout << sum;
    return 0;
}