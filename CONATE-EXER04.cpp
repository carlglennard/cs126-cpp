//Submitted By: Carl Glennard Onate 
//BS-IT BM5
//October 15, 2021

#include <iostream>
#include <iomanip> 
#include <cctype>  
using namespace std;

// FUNCTION DECLARATION
void primenum(); 
void rtriangle(); 
void fibonacci(); 
void factorial(); 
void menuprompt(); 

int main() {
    system("Color 70");
    
    int choice; // Displays Menu of Choices

    do {
        cout<<"=============MENU===========" << endl
            <<"                            " << endl
            <<"====[1]=Prime=Number========" << endl
            <<"====[2]=Right=Triangle======" << endl
            <<"====[3]=Fibonacci=Series====" << endl
            <<"====[4]=Factorial===========" << endl
            <<"====[5]=Exit================" << endl
            <<"                            " << endl   
            <<"Enter a number from the menu: ";
        cin >> choice;

        switch (choice) {
            case 1: primenum();                   
                    break;           

            case 2: rtriangle();                                        
                    break;
            
            case 3: fibonacci();                               
                    break;

            case 4: factorial();
                    break; 

            case 5: cout << "Program saying goodbye... Shutting down...";
                    return 0;
                
            default: system("cls");                     
                     cout << "Input is not from the menu..." << endl
                          << "Program saying goodbye... Shutting down..." << endl;
                     break;                      
        } 

        menuprompt(); // Validates if the user wants to return to the menu

    } while (true);
}

void primenum() {
    int num, factor; 
    system("cls");

    cout << "---PRIME NUMBER VALIDATOR---" << endl
         << "Enter a whole number: ";
    cin >> num;

    factor = 0;
    if (num > 1) {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                factor ++;
            }
        }
        if (factor == 2) {
            cout << num << " is a prime number" << endl; //Validates whole number if they are prime                        
        }
        else {
            cout << num << " is not a prime number" << endl; //Validates whole number if they are not prime
        }
    }
    else {
        cout <<"You have entered an invalid input" << endl //For invalid inputs such as 0, 1, negative integers, strings, characters, etc.
        	 << "Program saying goodbye... Shutting down..."<<endl;
        exit(0);
    } 
}

void rtriangle() {
    int size = 0; int count = 0; int x = 0;
    system("cls");

    cout << "---CREATE A RIGHT TRIANGLE---" << endl
         << "Input a positive integer: ";
    cin >> size;

    if (size > 0) {
        for (x; count <= size; count++) {
            cout << " \n";
            for (int x = 1; x <= count; x++) {
                cout << x << setw(4); 
            }     
        }          
        cout << "\n\n\n";                    
    }
    else {
        cout << "You entered an invalid input!" << endl
             << "The input must be a positive integer." << endl
			 << "Program saying goodbye... Shutting down..."<<endl;  
             exit(0);
    } 
}

void fibonacci() {
    long double num1 = 1; long double num2 = 1; long double nth; int ctr = 0; int numcount; 
    system("cls");

    cout << "---FIBONACCI SERIES GENERATOR---" << endl
         << "Input a positive integer: ";
    cin >> numcount; 

    if (numcount <= 0) {
        cout << "You entered an invalid input!" << endl
             << "The input must be a positive integer." << endl
             << "Program saying goodbye... Shutting down..."<<endl;
			 exit(0);                   
    }
    else {
        cout << "Generated Fibonacci sequence:" << endl;
        for (int x = 0; ctr < numcount; x++) {
            cout << num1 << " ";
            nth = num1 + num2;
            num1 = num2;
            num2 = nth;
            ++ctr;
        }
        cout << endl;                    
    }                    
}

void factorial() {
    long double factorial = 1.0; int num; 
    system("cls");

    cout << "---FACTORIAL---" << endl
         << "Input a positive integer: ";
    cin >> num;

    if (num >= 0) {
        if (num >= 1755) { //For input greater than 1755
            cout << "You entered an invalid input!" << endl
                 << "Input must be from 0-1755 only." << endl
                 << "Program saying goodbye... Shutting down..."<<endl;
				 exit(0);                      
        }
        else {
            cout << num << " factorial is: ";
            for (int a = 0; num >= 1; a++) { //For valid inputs
                factorial *= num;
                num -= 1; 
            }  
            cout << factorial << endl; 
			
			                                                                     
        }                                        
    }
    else { //For input less than 0 or negative
        cout << "Invalid input!" << endl
             << "Input must be equal to or greater than zero." << endl
             << "Program saying goodbye... Shutting down..."<<endl;
			 exit(0);
    }                        
}

void menuprompt() {
    char prompt;

    cout << "Going back to the menu. Press Y to continue, press any key to exit: ";
    cin >> prompt;
    prompt = toupper(prompt);

    if (prompt == 'Y') {
        system("cls"); 
    }
    else {
        cout << "Program saying goodbye... Shutting down...";
        exit(0);
    }
}
