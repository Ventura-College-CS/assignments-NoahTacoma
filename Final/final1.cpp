#include <iostream>
using namespace std;



class course
{
public:
    int ID;
    int credit;
    string name;


     course(int cID, int ccredit, string cname)
     {
         ID = cID;
         credit = ccredit;
         name = cname;
     }

    //Constructor and Member functions that would be necessary to be used in this question
};

int main()
{
    course c1(101,90,"john");
    cout << c1.ID << "\n";
}
// In this program, we should manage 10 course objects.
// To set up 10 object values, you can use the text file from input data.
// Create the binary search function to find a certain course with the course ID.
// Before calling this function, the course objects should be sorted based on the ID value.
// Implement the full source program and show the results with the various test data.
