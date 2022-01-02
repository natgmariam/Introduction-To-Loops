/* 
Description: Using while loops to print out a range of stars
        that form a pyramid based on input from user. A for 
        loop to build down from user input to 1. using a 
        do..while loop to take inot account user input errors. 
Input: user in prompted to input integer from 2 tto 20 
Output: stars are printed bassed on user input into an 
        upside down pyramid & right side up pyramid builiding
        up to till the stars match user input number. if error 
        occurs via user input, program prompts the user to 
        try again unill correct.
*/
#include <iostream> 
#include <cmath>
using namespace std; 
int main() { 
const int error = 100;
const int stars = 20;
int input = 0; 

        do{  
                //print prompt to enter a number 
        cout << "Enter a count between 2 and 20\n" << "**";
        cin >> input; //user input  
        cout << endl; 
                //cin fail if input is out of range 
            if (cin.fail() || (input <= 1 || input > stars)){
               cin.clear (); //to clear input & retry 
               cin.ignore (error,'\n'); //consider human input errors
               cout << "Error: Invalid entry, please retry\n"; 
            }   //error stamement to print if input fail
        
        //peramitters for user input fail to run 
        }while (cin.fail () || (input <= 1 || input > stars));
        //for loop to print out starts based on usser input 
        
        for ( int i = input; i >= 1; i--){ 
        //for loop to decrement starts from user input ot 1 
                for (int j = i; j > 0; j--){
                        cout << "*";
                }
        cout << endl; 
        }
        //while loop to ptint first start to increment to user input 
        
        int i=0; 
        while (i < input) {
                int j=0;
        //while loop increment * printed till user input is reached 
                while (j <= i){
                        cout << "*"; 
                        j++; //number of rows to print with * 
                }
                cout << endl; 
                i++; //number of stars to print in each row 
        }
return 0; 
}
