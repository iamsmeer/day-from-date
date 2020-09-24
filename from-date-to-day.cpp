/*

	Author:  	Sameer Dhruw
	Module:     C++ programming
	Titile:     Predicting exact day of week from given date
*/

#include<iostream>
using namespace std;
void display_welcome();
int main()
{
	unsigned int day,month,year,sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=0; //days
	display_welcome();
	cout<<endl;
	cout<<"\tEnter Day:\t";
	cin>>day;
	cout<<"\n\tEnter month:\t";
	cin>>month;
	cout<<"\n\tEnter Year:\t";
	cin>>year;
	cout<<"\n\tYour entered date is\t"<<day<<" : "<<month<<" : "<<year<<endl;
	
	unsigned int first_two_digit_of_year,century_value,last_two_digit_of_year,century;
	
	first_two_digit_of_year = year / 100;
	
	last_two_digit_of_year=year%100;
	
	century=first_two_digit_of_year;
	switch(century)
	{
		
		case 1:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 2:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 3:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 4:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 5:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 6:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 7:
			   century_value=6;   
			   break;                     //f2d =first two digit of year
		case 8:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 9:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 10:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 11:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 12:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 13:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 14:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 15:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 16:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 17:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 18:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 19:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 20:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 21:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 22:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 23:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 24:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 25:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 26:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 27:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 28:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 29:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 30:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 31:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 32:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 33:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 34:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 35:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 36:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 37:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 38:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 39:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 40:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 41:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 42:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 43:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 44:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 45:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 46:
			   century_value=2;           //f2d =first two digit of year
			   break;
		case 47:
			   century_value=0;           //f2d =first two digit of year
			   break;
		case 48:
			   century_value=6;           //f2d =first two digit of year
			   break;
		case 49:
			   century_value=4;           //f2d =first two digit of year
			   break;
		case 50:
			   century_value=2;           //f2d =first two digit of year
			   break;
	
	}
	
	unsigned int result,month_value;

	switch(month)
    {
    	case 1:
    		month_value=1;
    		break;
    	case 2:
    		month_value=4;
    		break;
    	case 3:
    		month_value=4;
    		break;
    	case 4:
    		month_value=0;
    		break;
    	case 5:
    		month_value=2;
    		break;
    	case 6:
    		month_value=5;
    		break;
    	case 7:
    		month_value=0;
    		break;
    	case 8:
    		month_value=3;
    		break;
    	case 9:
    		month_value=6;
    		break;
    	case 10:
    		month_value=1;
    		break;
    	case 11:
    		month_value=4;
    		break;
    	case 12:
    		month_value=6;
    		break;
    	
    	default:
    		puts("Try Again");
    		break;
	}
	unsigned int quotient=last_two_digit_of_year/4;
	result=day+month_value+century_value+last_two_digit_of_year+quotient;
	unsigned int day_value = result%7;
	cout<<endl;
	switch(day_value)
	{
		case 0:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<"is saturday"<<endl;
			break;
		case 1:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<"is sunday"<<endl;
			break;
		case 2:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<" is monday"<<endl;
			break;
		case 3:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<" is tuesday"<<endl;
			break;
		case 4:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<" is wednesday"<<endl;
			break;
		case 5:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<" is thrusday"<<endl;
			break;
		case 6:
			cout<<"\tPredicted day of date "<<day<<" : "<<month<<" : "<<year<<" is friday"<<endl;
			break;
		default:
			puts("Try Again!!");
			break;
	}

	
    cout<<endl;;
	cout<<"========================================================================================="<<endl;
	cout<<"============================"<<"\t    THANK YOU \t\t"<<"================================="<<endl;
	cout<<"========================================================================================="<<endl;
	return 0;
	
	
	
}
void display_welcome(){
	cout<<"========================================================================================="<<endl;
	cout<<"========================================================================================="<<endl;
	cout<<"==========================="<<"\tDAY PREDICTOR TOOL\t"<<"================================="<<endl;
	cout<<"========================================================================================="<<endl;
	cout<<"========================================================================================="<<endl;
}
