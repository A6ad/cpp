#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int id;
    char names[100];
    char sec;
    int marks;
};

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    for (int i = 0; i < t; i++) {
        student a, b, c;

        // Input for student a
        cin >> a.id;
        cin.ignore(); // Ignore the newline left in the input buffer
        cin.getline(a.names, 100);
        cin >> a.sec >> a.marks;
        cin.ignore(); 

        // Input for student b
        cin >> b.id;
        cin.ignore();
        cin.getline(b.names, 100);
        cin >> b.sec >> b.marks;
        cin.ignore(); 

        // Input for student c
        cin >> c.id;
        cin.ignore();
        cin.getline(c.names, 100);
        cin >> c.sec >> c.marks;
        cin.ignore(); 

        // Determine the student with the highest marks
        student high = a;
        if (b.marks > high.marks || (b.marks == high.marks && b.id < high.id)) {
            high = b;
        }
        if (c.marks > high.marks || (c.marks == high.marks && c.id < high.id)) {
            high = c;
        }

        // Output the details of the student with the highest marks
        cout << high.id << " " << high.names << " " << high.sec << " " << high.marks << endl;
    }

    return 0;
}
