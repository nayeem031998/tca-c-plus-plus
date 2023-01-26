#include<iostream>
 using namespace std;
 int a[2][3]={{1,2,3},{5,6,7}};
 int b[2][3]={{2,4,5},{4,5,7}};
 int c[2][3]={};
 
   main()
 {
 	int sum;
 	
		 for(int i=0;i<2;i++)
		 {
		 	for(int j=0;j<3;j++)
		 	{
		 		c[i][j]=a[i][j]+b[i][j];
		 		cout<<c[i][j]<<" ";
		 		
			 }
			 cout<<"\n";
		 }
		 
	 
	 
 
	 }
 	
 	 
 	
 	
