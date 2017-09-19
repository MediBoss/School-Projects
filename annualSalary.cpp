/*

Coded By : Medi Assumani

Cs 180 - Intro to Programming

4.Write a program to compute and print the annual salary.
Input (keyboard):

For each employee, prompt for and enter the following data:

                              PERSONNEL REPORT
Employee       Dept              Annual          Percent
Number          Number          Salary           Increase
1926                   10             29000.00           0.10
2071                   14             30250.00           0.12
3550                   22             24175.00           0.07
4298                   35             33400.00           0.11
5409                   47             27500.00           0.08
6552                   31            31773.00            0.10



Processing Requirements:
• raise  =  annual salary x percent increase.
• annual salary =  annual salary + raise.

**/

#include <iostream>
#include <string>

using namespace std;


int main(){

  cout <<"\n\t\t\tWELCOME TO MEDI BOSS Inc.\n" << endl;
  int size; //stores the number of emplyees
  cout<<"\nEnter the Number of Employees : \n"<<endl;
  cin >> size;

  // the variables needed
  int employeeId[size]; // storess the emplyees ID numbers
  string employeeName[size]; //stores the employees names
  int departmentNumber[size]; // stores the employees department number
  double annualSalary[size]; // stores the annual salary for each employees
  double percentageIncrease[size]; //stores the percentage increase for each employee
  double raise[size];
  double newAnnualSalary[size]; // stores the new annual salary

  //getting informations from the user

  cout <<"\nEnter the ID numbers for each employee : \n"<<endl;
  for(int i = 0; i < size; i++){

      cin >> employeeId[i];
  }
  cout <<"\nEnter the Name for Each Employee : \n"<<endl;
  for(int i = 0; i < size; i++){

    cin >> employeeName[i];
  }
  cout <<"\nEnter the Department Number Number for Each Employee : \n"<<endl;
  for(int i = 0; i < size; i++){

   cin >> departmentNumber[i];
  }
  cout <<"\nEnter the annual Salary for Each Employee : \n"<<endl;
  for(int i = 0; i < size; i++){
   cin >> annualSalary[i];
  }

  cout <<"\nEnter the Percentage Increase for each employee : \n"<<endl;
  for(int i = 0; i < size; i++){

   cin >> percentageIncrease[i];

  }


  //computing the new annual salary

  for(int i = 0; i < size; i++){

    raise[i] = annualSalary[i] * percentageIncrease[i]; // calculating the raise for each employee
  }

  for(int i = 0; i < size; i++){

    newAnnualSalary[i] = annualSalary[i] + raise[i];
  }


  //printing the result

  cout <<"\t\t\t\tAnnual Wage Report\n\n\n"<<"ID\tName\tDepartment Number\tAnnual Salary\tPercent Increase\tRaise\tNew Annual Salary"<<endl;
  for(int i = 0; i < size ; i++){
    cout <<employeeId[i]<<"\t"<<employeeName[i]<<"\t"<<departmentNumber[i]<<"\t"<<"$"<<annualSalary[i]<<percentageIncrease[i]<<"%\t"<<"$"<<raise[i]<<"\t"<<"$"<<newAnnualSalary[i]<<endl;
  }

    return 0;
}
