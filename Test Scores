/*
Coded By : Medi W. Assumani

In this exercise :
*We ask the user for the amount of students
*we ask the users for the test scores 
*we store it in an array
*We print out the average test score
*We print out the highest score
*We print out the lowest score
*/
import java.io.*;
import java.util.Random;
import java.util.Scanner;
public class MyProgram
{
    public static void main(String[] args)
    {
        
        
        //for(int x = 0; x <= 28; x++){
            
          //  rnd.nextInt(70,100);
            
           // }
        //Ask user for the amount of stuents
        Scanner in1 = new Scanner(System.in);
        System.out.println("Enter the amount of students : \n");
        int studentAmount = in1.nextInt();
        //ask the users for the testscores
        try{
       int[] testScores = new int[studentAmount];
       Scanner in2 = new Scanner(System.in);
       System.out.println("\n Enter the test Scores : \n");
       for(int i = 0; i < testScores.length ; i++){
           //store the test scores into the array
            testScores[i] = in2.nextInt();
        } 
        
        // print out the class' average score on the test
        System.out.println("\nThe Average Score of the Class is : "+average(testScores));

        // print out the highest score
        System.out.println("\nThe Highest score is : "+highestScore(testScores));
        
        //printout the lowest score
        
        System.out.println("\nThe Lowest score is : "+lowestScore(testScores));
        
        
        }catch(ArrayIndexOutOfBoundsException e){
            
            System.out.println("Warning : Array Index is out of bound");
        }
    }
    public static int average (int [] array){
        
        int sum = 0;
        int classAverage = 0;
        for(int j = 0; j < array.length; j++){
            
            sum+= array[j];
        }
        
        classAverage = (sum/array.length);
        return classAverage;
    }
    public static int highestScore(int[] arr){
        
      int max = 0;
	  for(int i = 0; i < arr.length; i++){
	            if(arr[i] > max ){
	             max = arr[i];   
	        }
	  }   
        return max;   
    }  
    public static int lowestScore(int[] arr)
	{
	   int min = arr[0];
	   for(int i = 1; i < arr.length; i++){
	        if(arr[i] < min){
	            min = arr[i]; 
	        }
	   }
	   return min;
	}
}

    
