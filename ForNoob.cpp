#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int count;

    cout << "Введите кол-во студентов: ";
    cin >> count;

    int* Group = new int[count];
    string* FullName = new string[count];
    string* Data = new string[count];
    char* Gender = new char[count];
    int* PhisMark = new int[count];
    int* MathMark = new int[count];
    int* InfMark = new int[count];
    int* Stipend = new int[count];

    cout << "\n Давайте заполним каждого студента!";

    for (int i = 0; i < count; i++)
    {
        cout << "\n" << i+1 << "\n";
        cout << "Группа: ";
        cin >> Group[i];
        cout << "ФИО: ";
        cin >> FullName[i];
        cout << "Год рождения: ";
        cin >> Data[i];
        cout << "Пол: ";
        cin >> Gender[i];
        cout << "Оценка по физике: ";
        cin >> PhisMark[i];
        cout << "Оценка по Математике: ";
        cin >> MathMark[i];
        cout << "Оценка по информатике: ";
        cin >> InfMark[i];
        cout << "Стипендия: ";
        cin >> Stipend[i];
    }

    int infGroup;
    cout << "Какая группа интересует? ";
    cin >> infGroup;

    int up;
    cout << "На сколько хотите повысить стипендию? ";
    cin >> up;

    for (int i = 0; i < count; i++)
    {
        if (Group[i] == infGroup and PhisMark[i] == 5)
        {
            Stipend[i] += up;
            cout << "\n" << i + 1 << " Группа: " << Group[i] << " ФИО: " << FullName[i] << " Год рождения: " << Data[i] << " Пол: " << Gender[i] << " Оценка по физике: " << PhisMark[i] << " Оценка по Математике: " << MathMark[i] << " Оценка по информатике: " << InfMark[i] << " Стипендия: " << Stipend[i] << "\n";
        }
    }

    system("pause");
    return 0;
}
