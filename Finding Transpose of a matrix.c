#include<stdio.h> 
int main() 
{ 
int a[10][10],r,c,i,j,t[10][10]; 
printf("\nEnter no.of Rows:"); 
scanf("%d",&r); 
printf("\nEnter no.of columns:"); 
scanf("%d",&c); 
printf("\nEnter %d Elements:",(r*c)); 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
scanf("%d",&a[i][j]); 
  } 
 } 
 printf("\nThe given Matrix is......\n"); 
 for(i=0;i<r;i++) 
 { 
  for(j=0;j<c;j++) 
  { 
   printf("\t%d",a[i][j]); 
  } 
  printf("\n"); 
 }  
 for(i=0;i<r;i++) 
 { 
  for(j=0;j<c;j++) 
  { 
   t[j][i]=a[i][j]; 
  } 
 } 
 printf("\nThe Transpose Matrix is\n"); 
 for(i=0;i<c;i++) 
 { 
for(j=0;j<r;j++) 
{ 
} 
printf("\t%d",t[i][j]); 
printf("\n"); 
} 
return 0; 
} 
