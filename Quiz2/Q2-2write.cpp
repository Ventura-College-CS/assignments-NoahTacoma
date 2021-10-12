#include <iostream>
#include <fstream>

using namespace std;


struct Student {
  int id;
  char sname[20];
  double score[3];
};

int main()
{
    ifstream ifs;
    ofstream ofs;

    Student *S;
    S = new Student;

    ifs.open("students.txt");
    ofs.open("students.bin");

    //for(int i=0; i<10; i++)  "To write multiple students."
    {
        ifs >> (*S).id ;
        ifs >> (*S).sname ;
        ifs >> (*S).score[0] ;
        ifs >> (*S).score[1] ;
        ifs >> (*S).score[2] ;


      //  cout << " ID : " << (*S).id << "\t";
      //  cout << " Name : " << (*S).sname << "\t";
      //  cout << " Score 1 : " << (*S).score[0] << "\t";
      //  cout << " Score 2 : " << (*S).score[1] << "\t";
      //  cout << " Score 3 : " << (*S).score[2] << "\t";
      //  cout << endl;


        ofs.write( (char *)S, sizeof(*S) );

    }




    //delete S; 
}