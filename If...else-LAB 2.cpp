#include<iostream>
using namespace std;

int main(){
	int Grade,
	aCount = 0,
	bCount = 0,
	cCount = 0,
	dCount = 0,
	fCount = 0;
	string rien="Incorrecet Grade ";
	
	cout<<"Enter the letter Grades."<<endl
		<<"Enter the EOF character to end input."<<endl;
		
		while((Grade = cin.get()) != EOF)
		{		
			
				
				if(Grade=='A'|| Grade=='a')
						++aCount;				
				
					else if(Grade=='B'|| Grade=='b')
						++bCount;
					
					else if(Grade=='C'|| Grade=='c')
						++cCount;
					
					else if(Grade=='D'|| Grade=='d')
						++dCount;
					
					else if(Grade=='F'|| Grade=='f')
						++fCount;
						//else if(grade!='A'|| grade=='a'||grade=='B'|| grade=='b'||grade=='D'||grade=='d'||grade=='F'|| grade=='f')
						//cout<<"Incorrect letter grade entered"<<endl;
			            //cout<<" Enter a new grade. "<<endl;			
						
			}		
										
			
			cout<<"The Total for each letter Grade is: "
			
			<<"\nA : " <<aCount
			<<"\nB : " <<bCount
			<<"\nC : " <<cCount
			<<"\nD : " <<dCount
			<<"\nF : " <<fCount <<endl;
		return 0;
			
}
