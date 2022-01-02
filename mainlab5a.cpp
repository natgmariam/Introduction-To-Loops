/* 
Description: Using while loops to print out a range of numbers based
            on user input. Diferentiating integers from non-
            integers
Input: user in prompted to input integers 
Output: range of numbers based on the user inputs and error 
        message if not integers
*/

#include <iostream>  //library 
#include <cmath>    //math library 
using namespace std; 
int main() {

int startingnumber = 0;  //declaraztion of staarting number 
int endingnumber = 0; //declarazation of ending number 
int increment = 0;  //declarazation of increment 
// prompt user for starting number   
cout << "Enter a starting number\n" << "**"; 
cin >> startingnumber; //user input 
cout << endl;
  //cin fail statement to print out an error if true       
if (cin.fail()) {
        cout << "Error: invalid entry.\n";
        return 0;  //to exit program       
    }
//prompt user for ending number 
cout << "Enter an ending number\n" << "**"; 
cin >> endingnumber; 
cout << endl;
//fail statement 
if (cin.fail()) {
    cout << "Error: invalid entry.\n";
    return 0;        
    }
//secondary fail statement if first number is larger than second  
if (startingnumber > endingnumber) {
    cout << 
    "Error: Starting number must be greater than ending number.\n";
    return 0;
        }
//prompt user for increment for the loop 
cout << "Enter a value to increment by\n" << "**"; 
cin >> increment; //user input 
cout << endl;
//fail statement to consider 
if (cin.fail()) {
        cout << "Error: invalid entry.\n";
        return 0;        
    }
//while loop to increment based on user input 
    while (startingnumber <= endingnumber) {
        cout << startingnumber << " ";
        startingnumber += increment; //update fo the loop 
    }  
cout << endl;
    return 0; 
}
