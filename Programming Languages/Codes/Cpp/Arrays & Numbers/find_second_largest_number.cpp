#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n < 2) {
        return 0;
    }  // tahsin hasan

    int num;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    if (secondLargest != INT_MIN) {
        cout << secondLargest << endl;
    }

    return 0;
}
