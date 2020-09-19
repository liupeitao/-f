#include<iostream>
#include<string.h>
using namespace std;


typedef class student
{
	
	string name;
public:
	int score;
	student() {};
	student(string i_name, int i_score) :name(i_name), score(i_score) {}
	int getscore() { return score; }
	
	student operator +(student i_stu) {
		student tmp_stu;
		tmp_stu.score = this->score + i_stu.score;
		return  tmp_stu;}
	    int getscore(student tmp) { return this->score;}
}stu;

//int getscore(stu tmp) { return tmp.score; };


int main()
{
	stu liu("liupeitao", 21);
	stu li("liyang", 32);
	stu sun;
	sun = liu + li;
	cout << sun.getscore();
	return 0;
}
 