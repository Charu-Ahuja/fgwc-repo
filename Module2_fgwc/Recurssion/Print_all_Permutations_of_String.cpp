#include <iostream>
using namespace std;

void permute(string &s, int l, int r) {
    // base case
    if (l == r) {
        cout << s << endl;
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);          // choose
        permute(s, l + 1, r);      // explore
        swap(s[l], s[i]);          // backtrack (undo)
    }
}

int main() {
    string s = "ABC";
    permute(s, 0, s.length() - 1);
    return 0;
}
