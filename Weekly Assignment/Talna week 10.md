Week 10: File Handling in C++

Task Summary:
Write a C++ program that writes student records to a file and then reads them back.

1. Key Concepts
- ofstream → write to file
- ifstream → read from file
- fstream → both read & write

2. Pseudocode

BEGIN
  OPEN file "students.txt" for writing
  WRITE student name and marks
  CLOSE file

  OPEN file "students.txt" for reading
  READ and DISPLAY contents
  CLOSE file
END

3. C++ Program

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("students.txt");
    if (!outFile) {
        cerr << "Error: Unable to open students.txt for writing\n";
        return 1;
    }

    outFile << "James 78\n";
    outFile << "Mary 85\n";
    outFile << "Ali 67\n";

    outFile.close();

    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "Error: Unable to open students.txt for reading\n";
        return 1;
    }

    string name;
    int marks;

    cout << "Student Records:\n";
    while (inFile >> name >> marks) {
        cout << name << " " << marks << endl;
    }

    inFile.close();

    return 0;
}
```

Created by talnawande-two on 2026-01-30.
