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



template <class T>   
class Stack 
{
	public:
    vector<T>pool;

    //Stack();
	Stack()
	{
		
	}

    void push(const T & el){
		this->pool.push_back(el);

	}
    T pop(){
		T a = this->pool.back();
		this->pool.pop_back();
		return a;

	}
	T& topEl( ) {
		return this->pool.back();

	}// get 1st element
    bool isEmpty(){
		return this->pool.empty();
	}
    int size(){
		return this->pool.size();
	} // get the number of elms;
};

int main(){
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

	Stack <Student>test;
	test.push(s1);
	test.push(s2);
	test.push(s3);
	test.push(s4);
	test.push(s5);
	cout <<"size" << test.size() << "\n";
	while(!test.isEmpty()){
		pop_student = test.topEl();
		pop_student.printStudent();
		test.pop();
	}

}
