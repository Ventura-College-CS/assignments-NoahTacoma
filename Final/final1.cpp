#include <iostream>
using namespace std;



class course
{
public:
    int ID;
    int credit;
    string name;

    course() : ID(0), name() {}
    course(int cID, int ccredit, string cname)
    {
        ID = cID;
        credit = ccredit;
        name = cname;
    }

    //Constructor and Member functions that would be necessary to be used in this question
};

void csort(course* array,int size){
    course temp = array[0];
    array[0];
    for(int i = 0; i < size; i++){
        
    }

};

int main() 
{
    course c1(101,90,"john"); //I could not find text file for input data.
    course c2(102,80,"john");
    course c3(103,70,"john");
    course c4(104,60,"john");
    course c5(105,50,"john");
    course c6(106,40,"john");
    course c7(107,30,"john");
    course c8(108,20,"john");
    course c9(109,10,"john");
    course c10(110,100,"john");

    course carray[10];

    carray[0] = c1;
    carray[1] = c2;
    carray[2] = c3;
    carray[3] = c4;
    carray[4] = c5;
    carray[5] = c6;
    carray[6] = c7;
    carray[7] = c8;
    carray[8] = c9;
    carray[9] = c10;

    csort(carray,10)

//    cout << c1.ID << "\n";
}
// In this program, we should manage 10 course objects.
// To set up 10 object values, you can use the text file from input data.
// Create the binary search function to find a certain course with the course ID.
// Before calling this function, the course objects should be sorted based on the ID value.
// Implement the full source program and show the results with the various test data.
