/*
Description: Using while loops to print out a range of numbers
    read as strings & converted into ints to do arathmtics 
    using infile & using do..while loop to take inot account 
    user input errors, plus file errors.  
Input: user in prompted to input file.  
Output: Prints the sum & total running sum of the data file 
    input & prints them accordingly. 
*/
#include <iostream>
#include <fstream> //file streem library 
#include <iomanip> //library for parametric manipulators 
using namespace std;

int main (){ //main function for C++ 
   
    long long int total = 0;  //declaration of total sum 
    int sum = 0; //declaration of sum 
    const int emax = 100; 
    string data; //declaring inFlie as a string to be read 
    string error;  //declaring & reading error txt 
    ifstream inData; //declared infile     
    
    do{  //prompt for file statment 
    cout << "Enter file name\n" << "**";
    cin >> data; //input file 
    cout << endl; 
    inData.open(data); //open infile 
            if (!inData.is_open()) {//check if file is proper format 
                inData.clear(); //clear input 
                inData.ignore (emax, '\n'); 
                cout << "Error: Invalid file name\n"; 
                continue; //print error statment & continue prompt 
            }    
        //declartion of vlaues read from txt to be ints 
        int value1, value2; 
        while (!inData.eof()) // to only read to end of file 
        {   
        inData >> value1;//data read from txt is turned into ints 
            if (inData.fail()){
                inData.clear(); 
                getline(inData, error, '\n'),//retriving data from txt  
                cout << "Error in line\n"; 
                continue; //if not int in data.txt error line printed
                }

        inData >> value2; //same thing for second set 
            if (inData.fail()){
                inData.clear(); 
                getline(inData, error, '\n'), 
                cout << "Error in line\n"; 
                continue; 
            } 
        sum = value1 + value2; //arthmatic of the int data 
        //printing the data & the sum 
        cout << value1 << " + " << value2 << " = " << sum << endl;  
        total += sum; //calculating the total run time 
        
        } 
        cout << endl; 
       //print running total for the sum of the data 
        cout << "Running total = " << total << endl;
        inData.close (); //closing the input data 
        break; //break from the loop since condition is always true 
    }while (true); //checking for condition to be true 
    
    return 0; 
}


