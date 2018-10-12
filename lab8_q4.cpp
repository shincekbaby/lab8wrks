//include the libary
#include<iostream>
using namespace std;

// function for merging the arrays
void merge (int a[],int n,int ar[],int k,int m[])
{	int i;
	//loop for merging the arrays 
 	for(i=0;i<n;i++)
   	     m[i]=a[i];
    	for(i=n;i<n+k;i++)
             m[i]=ar[i-n];		
	cout<<"\n printing the merged array";
	for(i=0;i<n+k;i++)
	cout<<" "<<m[i];
}

//function for finding the maximum and minimum of the two arrays
void arrange (int a[],int n)
{	int flag,t;
 	
	//loop for arranging the array elements in ascending order
 	do
 	{	flag=0;
		for(int i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;flag++;
			}
		}
	}while(flag!=0);
        cout<<"\n Maximum of the elements in both the array is "<<a[n-1];
	cout<<"\n Minimum of the elements in both the array is "<<a[0];
}

//main function 
int main()
{	int a[15],ar[15],m[30],n,k;
 	
	//ask user for the limit of first array
	cout<<"\n Enter number of elements in the 1st array ";
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"\n Enter array elements for first array";
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//ask user for the limit of seconded array
	cout<<"\n Enter number of elements in the 2nd array ";
 	cin>>k;
 	
	//ask user for array elements 
	cout<<"\n Enter array elements for second array";
 	for(int i=0;i<k;i++)
  	cin>>ar[i];
	
	//calling the function to merge arrays
	merge (a,n,ar,k,m);
	//calling function to find minimum of maximum of the two arrays
	arrange(m,(n+k));
	cout<<"\n"; return 0;
}
//end of program
