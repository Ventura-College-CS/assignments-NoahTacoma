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

    Student *S;
    S = new Student;

    ifs.open("students.bin");

    ifs.read( (char *)S, sizeof(*S));

    if( (S->score[0] + S->score[1] + S->score[2])/3 >= 85)
    {
      cout << " ID : " << (*S).id << "\t";
      cout << " Name : " << (*S).sname << "\t";
      cout << " Score 1 : " << (*S).score[0] << "\t";
      cout << " Score 2 : " << (*S).score[1] << "\t";
      cout << " Score 3 : " << (*S).score[2] << "\t";
    }
//cout << "Buggy" << endl;
}