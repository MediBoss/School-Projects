#include <iostream>

using namespace std;

int main()
{
//finding the average
      int grades[]={89,95,72,83,99,54,86,75,92,73,79,75,83,73};
      int sum=0;
      int highest = grades[0];
           int i;
               for(i=0;i<14;i++)

                {sum += grades[i];
                }

                 int avg=sum/14;

               cout<<"\nThe average is \n"<<avg<<endl;

       //finding the highest grade

    for(int i = 1; i < 14; i++){

      if(grades[i] >  highest){

     highest = grades[i];

     }

   }

   cout <<"\nThe Highest grade is : \n"<<highest<<endl;

     int deviation[15];
cout<<"grades"<<"\t\t"<<"deviation"<<endl;
for(i=0;i<14;i++)
{deviation[i]=grades[i]-avg;
cout<<grades[i] <<"\t\t"<<deviation[i]<<endl;


}
  return 0;
 }
