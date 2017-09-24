/**
Coded By : Medi W. Assumani and Ripunjay Sigh

Cs-180 Intro To Programming

OBjective : Create a to find the average grade of the class ,the highest grade and the standard deviation of the grades 

in a given array.



*/

#include <iostream>

using namespace std;

int main()
{
//finding the average
      int grades[]={89,95,72,83,99,54,86,75,92,73,79,75,83,73}; // this list(array) stores the gardes of a certain quiz
      
      int sum = 0;
      
      int highest = grades[0]; // getting the first grade to start comparing with other gardes
          
               for(int i = 0 ; i < 14 ; i++)// array size is 14

                {
                     sum + = grades[i]; // this adds up all the grades  
                }

                 int avg = (sum/14); // finds the average grade of the class

               cout<<"\nThe average is \n"<<avg<<endl; // prints the result

       //finding the highest grade

    for(int i = 1; i < 14; i++){

      if(grades[i] >  highest){ // comparing eah grade with another to find the highest

                  highest = grades[i]; //stores the current highest grade

     }

   }

   cout <<"\nThe Highest grade is : \n"<<highest<<endl; // printing the highest grade

     int deviation[15]; // creates an array of 15 elements to store the standard deviation
      
cout<<"grades"<<"\t\t"<<"deviation"<<endl;
      
      for(int i = 0; i < 14; i++)
{
      deviation[i]=grades[i]-avg;// finding each deviation
            
      cout<<grades[i] <<"\t\t"<<deviation[i]<<endl; // printing the statndard deviation


}
  return 0;
 }
