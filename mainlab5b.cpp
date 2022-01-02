/* 
Description: Using loops systmes to print out the avergae of the 
            even & odd numbers based the calcutaion done 
            using the range provided. Making sure the program 
            continues until the correct input is applied, 
            prompting users to try again, using cin.fail code.
Input: user in prompted to input integers between a range  
Output: sum of the range of numbers is printed based on it being 
        even or odd using diferent types of loops & if incorect, 
        try again statement is printed & code continues till right 
        integers is input.
*/
#include <iostream> //library 
#include <cmath>//math library 
using namespace std;
int main () {

int input = 0; //declaration of input 
int evensum = 0; //declaration of sum 
int oddsum = 0;

    do { //do statement to check for input errors 
        //print statment & asking for user input 
    cout << "Enter a count between 2 and 10000 \n" << "**";
    cin >> input;  
          //types of errors to lookout for & range thats an error 
        if (cin.fail () || (input <= 1 || input > 10000)){
            cin.clear(); //to clear the mistake after an error 
            cin.ignore (100, '\n'); 
            cout << "Error: Invalid entry, please retry\n"; 
        }   //print statement 
        
            
    //statement to run through while checking for error throughout the code 
    }while (cin.fail() || (input <= 1 || input > 10000));
        //loop statement to calculate sum of even averages 
        for (int value = 1; value <= input; value++) { 
            
            if (value % 2 == 0){ //to only calculate the even number range 
            evensum += value;    //actual calculation 
            }
    
        }//print statment of the sum of even numbers 
    cout <<'\n' <<"Sum of even number: " << evensum << '\n';
        
    int value = 1; //declaring a vlaue for the while loop 
        //rnage to use to calculate sum of odd numbers 
        while (value <= input) {    
            if (value % 2 != 0){  //used to isolate the odd range   
                oddsum += value; //calculation to get the average 
            }                    //of the odd numbers 
            value++; //modification to acount for the number range 
        }//print statement of the sum of the odd number range 
    cout << "Sum of odd number:  " << oddsum << '\n';
        
return 0; 
}
