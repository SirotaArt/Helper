#include <iostream>
#include <vector>

using namespace std;

class Student
{

private:

	string GroupNumber;
	string FullName;
	string Data;
	char Gender;
	int PhysicsMark;
	int MathematicsMark;
	int InformaticsMark;
	int Stipend;

public:

	Student() : GroupNumber("Unknown"), FullName("Unknown"), Data("Unknown"), Gender('-'),
		PhysicsMark(0), MathematicsMark(0), InformaticsMark(0), Stipend(0) {}

	Student(string StGroupNumber, string StFullName, string StData, char StGender,
		int StPhysicsMark , int StMathematicsMark, int StInformaticsMark,  int StStipend)
	{

		GroupNumber = StGroupNumber;
		FullName = StFullName;
		Data = StData;
		Gender = StGender;
		PhysicsMark = StPhysicsMark;
		MathematicsMark = StMathematicsMark;
		InformaticsMark = StInformaticsMark;
		Stipend = StStipend;
	}

	void SetPhysicsMark(int NewMark)
	{
		PhysicsMark = NewMark;
	}

	void SetMathematicsMark(int NewMark)
	{
		MathematicsMark = NewMark;
	}

	void SetInformaticsMark(int NewMark)
	{
		InformaticsMark = NewMark;
	}

	void SetStipend(int NewStipend)
	{
		Stipend += NewStipend;
	}

	int GetStipend() 
	{
		return Stipend;
	}

	string GetGroupNumber()
	{
		return GroupNumber;
	}

	int GetMark(char discipline)
	{
		switch (discipline)
		{

		case('P'):
			{
				return PhysicsMark;
				break;
			}

		case('M'):
			{
				return MathematicsMark;
				break;
			}

		case('I'):
			{
				return InformaticsMark;
				break;
			}

		}
	}

	int GetMathematicsMark()
	{
		return MathematicsMark;
	}

	int GetInformaticsMark()
	{
		return InformaticsMark;
	}

	void printFullINFO()
	{

		cout << "\n Номер группы: " << GroupNumber;
		cout << "\n ФИО : " << FullName;
		cout << "\n Год рождения: " << Data;
		cout << "\n Пол: " << Gender;
		cout << "\n Физика: " << PhysicsMark;
		cout << "\n Математика: " << MathematicsMark;
		cout << "\n Информатика: " << InformaticsMark;
		cout << "\n Стипендия: " << Stipend << "\n";
	}

	void printINFO()
	{

		cout << "\n ФИО : " << FullName;
		cout << "\n Год рождения: " << Data;
		cout << "\n Физика: " << PhysicsMark;
		cout << "\n Математика: " << MathematicsMark;
		cout << "\n Информатика: " << InformaticsMark;
		cout << "\n Стипендия: " << Stipend << "\n";
	}


	~Student() 
	{
		cout << "Деструктор был успешно вызван " << endl;
	}
};


void StipendUp(vector<Student> St, string group, char discipline, int mark, int money)
{

	for (Student& st : St)
	{

		if (st.GetGroupNumber() == group && st.GetMark(discipline) == 5)
		{
			st.SetStipend(money);
			st.printINFO();
		}
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	vector<Student> students = {

		Student("A1", "ПИДОРОВ ПИДОР ПИДОРОВИЧ", "2000", 'М', 4, 5, 3, 3000),
		Student("A1", "Иван Иванов Иванович", "2000", 'М', 5, 4, 5, 1000),
		Student("A2", "Мария Петрова Александровна", "1999", 'Ж', 3, 5, 4, 1500),
		Student("A1", "Сергей Кузнецов Михайлович", "2003", 'М', 5, 5, 5, 2000),
	};

	StipendUp(students, "A1", 'P', 5, 1000);
	

	system("pause");
	
}
