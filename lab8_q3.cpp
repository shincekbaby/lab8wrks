//include the libraries
#include<iostream>
using namespace std;

// function for arranging the array elements
void arrange (int a[],int n)
{	int flag,t,i;
 	
	//loop for arranging the array elements in ascending order
 	do
 	{	flag=0;
		for(i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;
     			  flag+=1;
			}
		}
	}while(flag!=0);
      
}

// functions printing kth maximum and kth minimum element of array
void klarge(int a[],int n,int k)
{ cout<<"\n The "<< k<<"th largest element is "<<a[n-k];
   }
void ksmall(int a[],int n,int k)
{ cout<<"\n The "<< k<<"th smallest element is "<<a[k-1];
   }

//main function 
int main()
{	int a[10],n,k;
 	
	//ask user for the limit
	cout<<"\n Enter number of elements in the array ";
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"\n Enter array elements ";
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//calling the function to arrange elements in order
	arrange (a,n);
	
	//asks user for the value of k
	cout<<"\n value of k is ";cin>>k;
	
	//calling functions for k th largest and smallest elements
	klarge(a,n,k);
	ksmall(a,n,k);
	cout<<"\n"; return 0;
}
//end of program

