#include <iostream>
#include <queue>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SCORES = 3;
class Student
{
private:
	int sid;
	string SName;
	vector<double> score;

public:
	Student() : sid(0), SName() {}
	Student(int id, string name, double s0, double s1, double s2)
	{
		sid = id;
		SName = name;
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
    int getSid() const { return sid; }
	string getSname() const { return SName; }
	vector<double> const &getScore() const { return score; }
	void setSid(int id) { sid = id; }
	void setSname(string name) { SName = name; }
	void setScore(double s0, double s1, double s2)
    {
		score.clear();
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
    void printStudent() const
    {
		cout << "Student ID: " << sid << "\t";
		cout << "Name: " << SName << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};

class StudentCompare
{
	public:
	bool operator()(const Student &lhs, const Student &rhs)
{
	double lhssum = 0.0, rhssum = 0.0;
	vector<double> score;
	score = lhs.getScore();
	for (int i = 0; i < score.size(); i++)
		lhssum += score[i];
	score = rhs.getScore();
	for (int i = 0; i < score.size(); i++)
		rhssum += score[i];

	return lhssum < rhssum; 
}
};


int main()
{
	Student s1, s2, s3, s4, s5;
	Student pop_student;

	s1.setSid(100);
	s1.setSname("John");
	s1.setScore(100, 100, 100);
	s1.printStudent();

	s2.setSid(101);
	s2.setSname("Jingle");
	s2.setScore(100, 90, 90);
	s2.printStudent();

	s3.setSid(102);
	s3.setSname("Heimer");
	s3.setScore(100, 90, 80);
	s3.printStudent();

    s4.setSid(103);
	s4.setSname("Schmidt");
	s4.setScore(100, 90, 70);
	s4.printStudent();

    s5.setSid(104);
	s5.setSname("Steve");
	s5.setScore(90, 90, 100);
	s5.printStudent();

//	cout << "Test\n";
 	priority_queue<Student, vector<Student>, StudentCompare> pq;
	pq.push(s1);
	pq.push(s2);
	pq.push(s3);
    pq.push(s4);
    pq.push(s5);
    cout <<"There are "<< pq. size()<< " Students" << "\n";

	while (!pq.empty())
	{
		pop_student = pq.top();
		pop_student.printStudent();
		pq.pop();
	}
}
