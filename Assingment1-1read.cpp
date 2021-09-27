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

    int IDRequest;

    Student s[10];

    ifs.open("students.bin");
    cout << " List of Ids" << "\n";
    for(int i=0; i<10; i++)
    {
      ifs.read( (char *)&s[i], sizeof(s));
      cout << s[i].id << " \t";
    }


    cout << "\n" << "Enter ID:";
    cin >> IDRequest;
    int missing = 1;
    for (int i=0; i<10; i++)
      {
        if(s[i].id == IDRequest)
        {
          cout << " ID " << s[i].id << "\t";
          cout << " name " << s[i].sname << "\t";
          cout << " average " << s[i].avg << "\n";
          missing = 0;
        }
      }
      if (missing == 1)
      {
        cout << " ID not found.";
      }

    //cout << " ID " << s.id << "\t";
    //cout << " name " << s.sname << "\t";
    //cout << " average " << s.avg << "\n";
}