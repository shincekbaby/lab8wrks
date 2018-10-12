//include the libraries
#include<iostream>
using namespace std;

//function for finding the mean
void mean(int a[],int n)
{	int s=0;//varible for mean
	
	//loop for finding the sum of array elements
	for (int i=0;i<n;i++)
 	s+=a[i];
	
	//finding mean
	float m=float(s)/float(n);
	
	//printing mean 
	cout<<"\n mean of the elements of the array is "<< m<<endl;
}
// function printing the median of the array elements

void median (int a[],int n)
{	int flag,t,i,j;
 	
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
      
	//printing median
	if (n%2==0)
   	{	float m=(float(a[n/2])+float (a[(n/2)-1]))/2;
  		cout<<"\n median = "<<m;
	}
    	else
	cout<<"\n median = "<<a[n/2];
}

// function printing maximum and minimum value of array
void maxmin(int a[],int n)
{ cout<<"\n The maximum value in the array is "<<a[n-1];
  cout<<"\n The minimum value in the array is "<<a[0];
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
 	
	// call mean function 
	mean(a,n);
	//call median function
	median(a,n);
	//call maxmin function 
	maxmin(a,n);
	
	return 0;
}
//end of program





