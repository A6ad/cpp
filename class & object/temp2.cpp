#include <bits/stdc++.h>

using namespace std;

class student {
public:
    int id;
    char name[100];
    char sec;
    int marks;
};

int main() {
    // Write your code here
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline character after reading the number of test cases
    while (t--) {
        student a, b, c;

        // Read the first student's data
        cin >> a.id;
        cin.ignore();  // Ignore the newline after reading the ID
        cin.getline(a.name, 100);  // Read the name
        cin >> a.sec >> a.marks;  // Read the section and marks
        cin.ignore();  // Ignore any leftover newlines

        // Read the second student's data
        cin >> b.id;
        cin.ignore();  // Ignore the newline after reading the ID
        cin.getline(b.name, 100);  // Read the name
        cin >> b.sec >> b.marks;  // Read the section and marks
        cin.ignore();  // Ignore any leftover newlines

        // Read the third student's data
        cin >> c.id;
        cin.ignore();  // Ignore the newline after reading the ID
        cin.getline(c.name, 100);  // Read the name
        cin >> c.sec >> c.marks;  // Read the section and marks
        cin.ignore();  // Ignore any leftover newlines

        // Logic to determine the student with the highest marks (and smallest ID in case of a tie)
        student high = a;
        if (b.marks > high.marks || (b.marks == high.marks && b.id < high.id)) {
            high = b;
        }
        if (c.marks > high.marks || (c.marks == high.marks && c.id < high.id)) {
            high = c;
        }

        // Output the student with the highest marks
        cout << high.id << " " << high.name << " " << high.sec << " " << high.marks << endl;
    }

    return 0;
}
