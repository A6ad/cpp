#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    // Read input until EOF
    while (getline(cin, line)) {
        string filtered;
        
        // Remove spaces and build a filtered string
        for (char c : line) {
            if (c != ' ') {
                filtered += c;
            }
        }

        // Sort the filtered string
        sort(filtered.begin(), filtered.end());

        // Print the sorted string
        cout << filtered << endl;
    }

    return 0;
}
