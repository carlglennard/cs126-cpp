//Submitted By: Carl Glennard Onate 
//BS-IT BM5
//October 21, 2021

#include <iostream>
#include <iomanip> 
#include <cctype>  
#include <cstdlib>
#include <ctime>

using namespace std;

// FUNCTION DECLARATION
void figure();
void highlowoddeven();
void menuprompt();

int main() {
    system("Color 70");
    
    int choice; // Displays Menu of Choices

    do {
        cout<<"[MAIN MENU]" << endl
            <<"[1] Figure" << endl
            <<"[2] Highest and Lowest Odd and Even Random Numbers" << endl
            <<"[3] Exit" << endl
            <<"Enter a number from the menu: ";
        cin >> choice;

        switch (choice) {
            case 1: figure();                   
                    break;           

            case 2: highlowoddeven();                                        
                    break;

            case 3: cout << "Program saying goodbye... Shutting down...";
                    return 0;
                
            default: cout << "Input is not from the menu..." << endl;                     
                     exit(0);
        } 

        menuprompt(); // Validates if the user wants to return to the menu

    } while (true);
}

void figure() {
	
int size, row, col;
				do
					{
						cout << "Input size of the outline figure (5-15 odd number only): ";
						cin >> size;
						if ((size % 2 == 0) || (size < 5 || size > 15))
							cout << size << " is INVALID!" << endl;
					} while ((size % 2 == 0) || (size < 5 || size > 15));

					cout << "Outline shape figure " << size  << " : " << endl;
					for (row = 1; row <= size; row++)  //outer loop represents row
					{
						for (col = -1; col <= size; col++)  //inner loop represents row
						{
							if (row == 1 || row == size || col == 1 || col == size)
								cout << "#";
							else
								cout << " ";
						}
						cout << endl;
					}
					for (row = 1; row <= size; row++) 
					{
						for (col = 1; col <= size; col++) 
						{
							if (row == 1 || row == size || col == 1 || col == size)
								cout << "#";
							else
								cout << " ";
						}
						cout << endl;
					}
}
	
void highlowoddeven() {
    int numGenerate, randNum; 
	int total = 0, count = 0;
    int oddCount = 0; 
	int evenCount = 0;
    int highestEven = 0;
    int highestOdd = 0; 
    int lowestEven = 0;
    int lowestOdd = 0;
    
    system("cls");
    do {
        cout << "Enter a digit (1-100) on how many random numbers you want to generate: ";
        cin >> numGenerate;
        if (numGenerate < 0 || numGenerate > 100) {
            cout << "Number must be in range of 1-100 only!" << endl;
            continue;   
        }
        else {      
            cout << "The "<< numGenerate<< " generated numbers are: " << endl;     
            srand(time(0));
            do {      
                randNum = (rand()%100)+1;
                cout << randNum << " ";
                if (randNum % 2 == 0) {
                    evenCount +=1;  
                    if (randNum > highestEven) {
                        highestEven=randNum;  
                    }
                    else {
                        lowestEven=randNum;      
                    }                       
                }
                if (randNum % 2 != 0) {
                    oddCount +=1;  
                    if (randNum > highestOdd) {
                        highestOdd=randNum;  
                    }
                    else {
                        lowestOdd=randNum;                     
                    }               
                }
                count +=1;  
            } while (count < numGenerate);

            cout << endl;
            cout << endl
                << "There are " << evenCount << " even number/s"<< endl
                << "The highest generated even number is: " << highestEven << endl
                << "The lowest generated even number is: " << lowestEven << endl
                << endl
                << "There are " << oddCount << " odd number/s" <<endl
                << "The highest generated odd number is:  " << highestOdd << endl
                << "The lowest generated odd number is: " << lowestOdd << endl;
             break;
        } 

    } while (true);
}


void menuprompt() {
    
    cout << "Going back to the menu. Press Y to continue, press N to exit. ";
    char response;
    cin>>response;
    response = toupper(response);
    
    switch(response){
    	case 'Y':
    		system("cls");
    		break;
    	case 'N':
    		cout << "Program saying goodbye... Shutting down...";
    		exit(0);
    		break;
    	default: cout<<" Invalid choice";
    	system("cls");
    
	}
	
}


    	
    		
    		
    	
