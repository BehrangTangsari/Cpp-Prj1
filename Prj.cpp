#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  system("cls");

  int user_numbers;
  cout << "Enter member number(s): ";
  cin >> user_numbers;
  system("cls");
  int user_age[user_numbers];
  int user_failedCounter = 0;
  int user_passCounter = 0;
  string user_name[user_numbers];
  string user_idcode[user_numbers];
  string user_pass[user_numbers];
  float user_score[user_numbers];
  float user_averageScore[user_numbers];
  float user_averageAge[user_numbers];
  float finaly_averageScore;
  float fanaly_averageAge;
  system("cls");
  int counter = 1;

  cout << "1:  \n";
  for (int i = 0; i < user_numbers; i++)
  {
    cout << "Enter your name: ";
    cin >> user_name[i];

  A:
    cout << "Enter your id code: ";
    cin >> user_idcode[i];
    if (user_idcode[i].length() != 10)
    {
      cout << "ERROR.please try again: " << endl;
      goto A;
    }
    cout << "Enter your age: ";
    cin >> user_age[i];

  B:
    cout << "Enter your score: ";
    cin >> user_score[i];
    if (user_score[i] < 0 || user_score[i] > 20)
    {
      cout << "ERROR.please try again: " << endl;
      goto B;
    }
    if (user_score[i] < 10)
    {
      user_pass[i] = "Failed";
      user_failedCounter += 1;
    }
    else if (user_score[i] >= 10)
    {
      user_pass[i] = "Pass";
      user_passCounter += 1;
      cout << endl;
    }
    counter++;
    cout << counter << ":  ";
    cout << endl;
  }

  system("cls");
  cout << left << setw(15) << "Name:"
       << "\t ";
  cout << setw(9);
  cout << "IDcode:"
       << "\t ";
  cout << left << setw(5);
  cout << "Age:"
       << "\t  ";
  cout << setw(7);
  cout << "Score:"
       << "\t  ";
  cout << left << setw(10);
  cout << "Pass:";
  cout << "\n \n \n"; //endl;

  for (int i = 0; i < user_numbers; i++)
  {
    cout << left << setw(15) << user_name[i] << "\t ";
    cout << setw(9);
    cout << user_idcode[i].substr(4, 10) << "\t ";
    cout << left << setw(5);
    cout << user_age[i] << "\t  ";
    cout << left << setw(7);
    cout << user_score[i] << "\t  ";
    cout << left << setw(10);
    cout << user_pass[i];
    cout << '\n'; //endl
  }
  for (int i = 0; i < user_numbers; i++)
  {
    user_averageScore[i] = user_score[i] / user_numbers;
    finaly_averageScore += user_averageScore[i];

    user_averageAge[i] = user_age[i] / user_numbers;
    fanaly_averageAge += user_averageAge[i];
  }
  cout << endl
       << endl;

  cout << "User average score: " << finaly_averageScore << endl;
  cout << "User average age: " << round(fanaly_averageAge)
       << endl
       << endl;

  cout << "Count user failed: " << user_failedCounter << endl;
  cout << "Count user pass: " << user_passCounter << endl
       << endl;

  getch();
  return 0;
}
