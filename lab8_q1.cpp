//include the libraries
#include<iostream>
using namespace std;

//function for finding the sum
int sumarr(int a[],int n)
{	int s=0;//varible for sum
	
	//loop for finding the sum of array elements
	for (int i=0;i<n;i++)
 	s+=a[i];
	
	//printing sum 
	cout<<"\n Sum of the elements of the array is "<<s;
	return 0;
}
//main function 
int main()
{	int a[10],n;
 	
	//ask user for the limit
	cout<<"\n Enter number of elements in the array ";
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"\n Enter array elements ";
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	// call summing function 
	sumarr(a,n);
	return 0;
}
//end of program
