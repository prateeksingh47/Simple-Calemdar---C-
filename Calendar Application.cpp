#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int first_year(int year){
	int day;
	day = (((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
	return day;
}

int main(){
	int year,day,week;
	int days_months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string months[12] = {"january","february","march","april","may","june",
						"july","august","september","october","november","december"};
						
	cout<<"\n\n Enter Year : ";
	cin>>year;
	
	if(year % 4 == 0){
		days_months[1] = 29;
	}
	
	day = first_year(year);	
	system("cls");
	
	for(int i=0;i<=11;i++){
		cout<<"\n\n\t\t"<<months[i]<<", "<<year;
		cout<<"\n\n   Sun   Mon   Tue   Wed   Thur   Fri   Sat\n";
		
		for(int j=0;j<day;j++){
			cout<<"      ";
		}
		
		week = day;
		for(int k=1;k<=days_months[i];k++){
			if(k <= 10){
				cout<<"     ";
			}
			else{
				cout<<"    ";
			}
			
			if(week > 6){
				cout<<"\n    "<<k;
				week = 0;
			}
			else{
				cout<<k;
			}
			week++;
		}
		day = week;	
	}
}
