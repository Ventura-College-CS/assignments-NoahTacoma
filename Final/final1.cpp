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
    course temp;
    for(int i = 0; i < size; i++){
        for(int i2 = i; i2 > 0; i2--){
            if (array[i2-1].ID > array[i2].ID){
                temp = array[i2];
                array[i2] = array[i2-1];
                array[i2-1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout << array[i].ID << "\n";
    }
};

course* csearch(course* array,int size,int find){
    int i = size / 2;
    if(size == 0){
        return(NULL);
    }
    if(find == array[i].ID){
        return(&array[i]);
    }
    else{
        if(find < array[i].ID){
            course* found = csearch(array,size/2,find);
            return(found);
        }
        else{
            array += (size+1)/2;
            course* found = csearch(array,size/2,find);
            return(found);
        }
    }

}

int main() 
{
    course c1(105,90,"alpha"); //I could not find text file for input data.
    course c2(102,80,"beta");
    course c3(108,70,"delta");
    course c4(103,60,"gamma");
    course c5(101,50,"eta");
    course c6(106,40,"xennon");
    course c7(107,30,"borron");
    course c8(104,20,"gold");
    course c9(110,10,"steve");
    course c10(109,100,"john");

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

    csort(carray,10);

 //   csearch(carray,10,105);
    int SID;
    cout << "Enter Course ID :";
    cin >> SID;
    course* search = csearch(carray,10,SID);
    if( search == NULL){
        cout << "Course ID not found" << "\n";
    }
    else{
        cout << search->ID <<" "<< search->name <<" "<< search->credit <<"\n";
    }

//    cout << c1.ID << "\n";
}
// In this program, we should manage 10 course objects.
// To set up 10 object values, you can use the text file from input data.
// Create the binary search function to find a certain course with the course ID.
// Before calling this function, the course objects should be sorted based on the ID value.
// Implement the full source program and show the results with the various test data.
