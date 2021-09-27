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

    ifs.open("students.txt");
    ofs.open("students.bin");

    for(int i=0; i<10; i++)
    {
      ifs >> s.id ;
      ifs >> s.sname ;
      ifs >> s.score[0] ;
      ifs >> s.score[1] ;
      s.sum = s.score[0] + s.score[1];
      s.avg = s.sum / 2.0;

      cout << " ID : " << s.id << "\t";
      cout << " Name : " << s.sname << "\t";
      cout << " Score 1 : " << s.score[0] << "\t";
      cout << " Score 2 : " << s.score[1] << "\t";
      cout << " Sum : " << s.sum << "\t";
      cout << " Avg : " << s.avg << endl;
      ofs.write( (char *)&s, sizeof(s) );

    }

    //cout << " ID : " << s.id << endl;
    //cout << " Name : " << s.sname << endl;
    //cout << " Score 1 : " << s.score[0] << endl;
    //cout << " Score 2 : " << s.score[1] << endl;
    //cout << " Sum : " << s.sum << endl;
    //cout << " Avg : " << s.avg << endl;


    //ofs.write( (char *)&s, sizeof(s) );

}