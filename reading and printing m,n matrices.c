#include<stdio.h> 
int main() 
{ 
int a[10][10],r,c,i,j; 
printf("\nEnter no.of Rows:"); 
scanf("%d",&r); 
printf("Enter no.of Columns:"); 
scanf("%d",&c); 
printf("\n Enter %d Elements:\n",(r*c)); 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
scanf("%d",&a[i][j]); 
}
}
printf("\n The matric is....\n"); 
for(i=0;i<r;i++) 
{  
for(j=0;j<c;j++) 
{  
printf("%d\t",a[i][j]); 
}
printf("\n"); 
}
return 0;
}

