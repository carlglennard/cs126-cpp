#include<iostream> //Submitted By: Carl Onate BSIT-BM5 

using namespace std;

int main()
{
	int choice, number, time, h, m, H;
	string numberString;
	
	cout<<"-----------------------CONVERTER-MACHINE-----------------------"<<endl;
	cout<<" [1] Hindu Arabic Number to Roman Numerals"<<endl;
	cout<<" [2] Military Time to 12 Hour Time"<<endl;
	cout<<" [3] Exit the program"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout << "endl"; 
            cin >> number;

            if (number<1 || number>3000){
                cout << "Number should be from 1-3000 only!";
                break;
            }

            else {
                switch (number / 1000) { //for thousands place
                        case 1: numberString += "M";
                                number -= 1000;
                                break;
                        case 2: numberString += "MM";
                                number -= 2000;
                                break;
                        case 3: numberString += "MMM";
                                number -= 3000;
                                break;
                    
                }

                switch (number / 100) { //for hundreds place
                        case 1: numberString += "C";
                                number -= 100;
                                break;
                        case 2: numberString += "CC";
                                number -= 200;
                                break;
                        case 3: numberString += "CCC";
                                number -= 300;
                                break;
                        case 4: numberString += "CD";
                                number -= 400;
                                break;
                        case 5: numberString += "D";
                                number -= 500;
                                break;
                        case 6: numberString += "DC";
                                number -= 600;
                                break;
                        case 7: numberString += "DCC";
                                number -= 700;
                                break;
                        case 8: numberString += "DCCC";
                                number -= 800;
                                break;
                        case 9: numberString += "CM";
                                number -= 900;
                                break;
                }

                switch ((number%100)/10) { //for tens place
                    case 1:  numberString += "X";
                            break;
                    case 2:  numberString += "XX";
                            break;
                    case 3:  numberString += "XXX";
                            break;
                    case 4:  numberString += "XL";
                            break;
                    case 5:  numberString += "L";
                            break;
                    case 6:  numberString += "LX";
                            break;
                    case 7:  numberString += "LXX";
                            break;
                    case 8:  numberString += "LXXX";
                            break;
                    case 9:  numberString += "XC";
                            break;
                }

                switch (number%10) { //for ones place
                    case 1:  numberString += "I";
                            break;
                    case 2:  numberString += "II";
                            break;
                    case 3:  numberString += "III";
                            break;
                    case 4:  numberString += "IV";
                            break;
                    case 5:  numberString += "V";
                            break;
                    case 6:  numberString += "VI";
                            break;
                    case 7:  numberString += "VII";
                            break;
                    case 8:  numberString += "VIII";
                            break;
                    case 9:  numberString += "IX";
                            break;
                }
                
                cout << "Roman Number is:\n" << numberString; 
                break;
	}
		case 2: cout<<"Enter Military time without colon: ";
			    cin>>time;
			    h=time/100;
			    m=time%100;
			    if((h>=0&&h<=23)&&(m>=0&&m<=59))
			    {
			
			        if(h>12) // FIRST BLOCK conditions greater than 12:00PM
			        {   
                        if (m==0) {
                            H=h%12; //for time greater than 12 pm with exactly 00 minutes
                            cout<<"The standard time of "<<h<<":"<<"00"<<" is = "<<H<<":"<<"00"<<"PM";

                        }
                        else{
                            H=h%12; //for time greater than 12:00 pm
			                cout<<"The standard time of "<<h<<":"<<m<<" is = "<<H<<":"<<m<<"PM";
                        }
			            
			        }
			        else if(h==0) //SECOND BLOCK condition hour equal to 00:00
			         {
			             h=12;
			             if (m>=0&&m<=9){ //for time in 12:00 am with single digits minute or ending in 00
			             	cout<<"The standard time of "<<h<<":"<<"0"<<m<<" is = "<<h<<":"<<"0"<<m<<"AM"; 
						 }
						 else if (m>=0&&m<=59){//for time in 12:00 am with minutes greater than or equal to 10
						 	cout<<"The standard time of "<<h<<":"<<m<<" is = "<<h<<":"<<m<<"AM";
						 }
			             
			             
			        }
			        
			        else // THIRD BLOCK conditions of hour equal to 12
			        {
                        if (h==12&&m==0){//for specific time 12:00 pm
			                cout<<"The standard time of "<<h<<":"<<"00"<<" is = "<<h<<":"<<"00"<<"PM";
                        }
                        else if (h==12){ //for time of 12:00 pm with minutes
                            m>=0&&m<=59; 
			                cout<<"The standard time of "<<h<<":"<<m<<" is = "<<h<<":"<<m<<"PM"; 
						}
						else if (m>=0&&m<=9){ //for time less than 12:00 pm with single digits minute or ending in 00
                            H=h; 
			                cout<<"The standard time of "<<h<<":"<<"0"<<m<<" is = "<<H<<":"<<"0"<<m<<"AM"; 
						}
						else if (m>=0&&m<=59){ //for time less than 12:00 pm that have minutes greater than or equal to 10
                            H=h; 
			                cout<<"The standard time of "<<h<<":"<<m<<" is = "<<H<<":"<<m<<"AM"; 
						}
			              
			        }  
			    }
		
				else

				cout<<time<<" is INVALID!";  
				
				return 0;
            }
		}
