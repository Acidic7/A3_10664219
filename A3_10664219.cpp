#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a;

	
	cout<<"Please Enter Your Marks = ";
	cin>>a;
	
	if(a>=85 && a<=100){
		
		cout<<"You had grade 'A'";
	}
	   else 
	       if(a>=75 && a<85) {
		
	    	cout<<"You had grade B";
	}
	       	else
		        if(a>=65 && a<75){
		    
			  	cout<<"You had grade C";	
			}
			else
		        if(a>=55 && a<65){
		    
			  	cout<<"You had grade D";	
			}
			    else 
			        if (a>=45 && a<55){
			        	
			        	cout<<"You had grade E";
					}
			
			    else
			        if(a<45){
					
			          cout<<"You had grade F";
	             }
	                 else
					 
	                   if(a>100){
	                   	
	                   	cout<<"Error!!";
					   }
	return 0;
}
