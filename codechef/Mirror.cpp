#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000000;
int arr[MAX_N + 1] = {0};

bool isPalindrome(const string &s) {
    if(s.size()&1) return 0;
    int Left_L = 0, Right_R = s.size() - 1;
    while (Left_L < Right_R) {
        if (s[Left_L] != s[Right_R]) {
            return false;
        }
        Left_L++;
        Right_R--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    cout << arr[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_Case;
    cin >> test_Case;
    
    string binary = "0";
    
    for (int i = 1; i <= MAX_N; i++) {
        if (isPalindrome(binary)) {
            arr[i] = arr[i - 1] + 1;
        } else {
            arr[i] = arr[i - 1];
        }

        // Increment the binary string
        int num_carry = 1;
        for (int j = binary.size() - 1; j >= 0; j--) {
            int digit = binary[j] - '0' + num_carry;
            binary[j] = (digit % 2) + '0';
            num_carry = digit / 2;
        }

        if (num_carry) {
            binary = "1" + binary;
        }
    }

    while (test_Case--) {
        solve();
    }

    return 0;
}