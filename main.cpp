#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Course{
	int credits;// số tín chỉ
	string course_grade;
};
struct Semester {
	int n; //số khóa học
	Course*course;
	double Quality_point;
	double credit_attempt;
	double credit_earn;
};
void Enter_credit_coursegrade(Semester&a,int n)
{
	a.n = n;
	a.course = new Course[n];
	cout << "Enter the number of credits and course grade on the same line:\n";
	for (int i = 0; i < n; i++)
	{

		cout << "Couse" << " " << i + 1 << ":";
		rewind(stdin);
		cin >> a.course[i].credits;
		cin>>a.course[i].course_grade;

	}
}
void Student_grade_performance(Semester&a)
{
	int Sum_credit_attempt = 0;
	int Sum_credit_earn = 0;
	string grade[2][11] = {
		{ "A","A-","B+","B","B-","C+","C","C-","D+","D","F"},
	{"4.0","3.7","3.3","3.0","2.7","2.3","2.0","1.7","1.3","1.0","0.0"}
	};
	double Quality_point = 0;
	for (int i = 0; i < a.n; i++)
	{
		Sum_credit_attempt += a.course[i].credits;

		if (grade[0][10] != a.course[i].course_grade)
		{
			Sum_credit_earn += a.course[i].credits;
		}
		//Quality Points
		for (int j = 0; j <= 10; j++)
		{
			if (a.course[i].course_grade == grade[0][j])
			{
				Quality_point += a.course[i].credits*stod(grade[1][j]);// chuyển string sang double
			}
		}
	}
	a.credit_attempt = Sum_credit_attempt;
	a.credit_earn = Sum_credit_earn;
	a.Quality_point = Quality_point;
	cout << "Credits Attempted: "<< Sum_credit_attempt << "\n";
	cout << "Credits Earned: " << Sum_credit_earn << "\n";
	cout << "Quality Points: "<< Quality_point << "\n";
	cout << std::setprecision(3);
	cout << "GPA: " << Quality_point / Sum_credit_attempt;
}
int main()
{
	int number_semester;
	cout << "Enter the number of semesters:";
    cin >> number_semester;
	Semester*semester=new Semester[number_semester];
	for (int i = 0; i < number_semester; i++)
	{
		int number_course;
		cout << "Enter number courses for term: "<<i+1<<" :";
		cin >> number_course;
		Enter_credit_coursegrade(semester[i], number_course);
	}
	cout << "\t\tGrade Performance:";
	for (int i = 0; i < number_semester; i++)
	{
		cout << "\nSemester " << i + 1<<"\n";
		Student_grade_performance(semester[i]);
	}
    //
	cout << "\nAggregate: ";
	int temp = 0;
	int Aggregate_credit_attempt = 0;
	int Aggregate_credit_earn = 0;
	double Aggregate_Quality_point = 0;
	for (int i = 0; i < number_semester; i++)
	{
		Aggregate_credit_attempt += semester[i].credit_attempt;
		Aggregate_credit_earn += semester[i].credit_earn;
		Aggregate_Quality_point += semester[i].Quality_point;
		if (i == number_semester - 1)
		{
			cout << "\nCredit Attempted: "<<Aggregate_credit_attempt;
			cout << "\nCredit Earned: " << Aggregate_credit_earn;
			cout << "\nQuality Points: " << Aggregate_Quality_point;
			cout << "\nGPA: " << Aggregate_Quality_point / Aggregate_credit_attempt;
		}
	}
}

