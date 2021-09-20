#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
    ifstream ifs;
    ofstream ofs;

    Student s;

    ifs.open("students.bin");

    ifs.read( (char *)&s, sizeof(s));

    cout << " ID " << s.id << "\t";
    cout << " name " << s.sname << "\t";
    cout << " average " << s.avg << "\n";

}