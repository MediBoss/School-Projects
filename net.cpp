/*

1. Write a program to calculate and print the net pay. Assume the current federal income tax
(FIT) rate is 15%.

Input(keyboard):

For each employee, prompt for and enter the following data:

              PAYROLL REPORT

Employee        Hours        Rate
Number
3566                 40             7.50
6344                 38           12.00
8741                 40            9.75
9823                 40           10.25
2351                 35             8.00
8724                 36            11.00

Processing Requirements:
• gross pay =  hours x pay rate.
• federal income tax =  gross pay x FIT rate.
• net pay =  gross pay ‑ federal income tax.


*/

    #include <iostream>
    #include <cmath>

      using namespace std;

    int main(){

    cout<<"\n\n\t\t\tWelcome to GOLDMAN SACHS Inc.\n" <<endl;

    int size;
    cout <<"\nEnter the number of Employees : \n"<<endl;
    cin >> size;

    int employessId[size];
    int hoursLogged[size];
    double rates[size];
    double grossPay[size];
    double federalIncomeTax[size];
    double netPay[size];

    //requesting and storing the ID's
    cout <<"\nEnter the Employees ID numbers : \n"<<endl;
    for(int i = 0; i < size; i++){
      cin >>employessId[i];
    }

    //requesting and storing the hours
    cout <<"\nEnter The Hours Logged : \n"<<endl;
    for(int k = 0; k < size; k++){
      cin >> hoursLogged[k];
    }

    //requesting and storing the pay rates
    cout <<"\nEnter The Hour Rates : \n"<<endl;
    for(int m = 0; m < size; m++){
      cin>> rates[m];
    }

   //end of information storage



   // processing the grosspay
   for(int index = 0; index < size; index++){

      grossPay[index] = (hoursLogged[index] * rates[index]); //calculating the gross pay for each employee

    }
    //end of grosspay processing

    //processing the federal Income tax

    for(int index = 0; index < size; index++){

      federalIncomeTax[index] = (grossPay[index] * 0.15);
    }

    //end of federal income tax processing


    //processing the netPay

    for(int index = 0; index < size; index++){

      netPay[index] = (grossPay[index] - federalIncomeTax[index]); //calculating the net pay of each employee

    }


    //end of netpay processing


    //Printing the result
    cout<<"\n\t\t\tMonthly Wage Report\n"<<endl;
    cout <<"\n\nEmployee ID\tHours Logged\tPay Rate\tGrossPay\tFederal Tax\tNet Pay\n"<<endl;
    for(int i = 0; i < size; i++){
        cout<<employessId[i]<<"\t\t"<<hoursLogged[i]<<"\t\t"<<"$"<<rates[i]<<"\t\t"<<"$"<<grossPay[i]<<"\t\t"<<"$"<<federalIncomeTax[i]<<"\t\t"<<"$"<<netPay[i]<<endl;
      }

      //end of printing



  return 0;

  }
