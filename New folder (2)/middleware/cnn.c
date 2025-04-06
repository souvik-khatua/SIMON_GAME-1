
#include <stdio.h>
#include<stdlib.h>
void min(int a,int b,int c,int d){
    if(a<b){printf("\na is min");}
   else if(b<c){printf("b is min");}
   else if(c<d){printf("c is min");}
   else{printf("d is min");}
}
int main() {
   int arr[]={1,0,1,1,1,0,1,1};
   int arr1[]={1,0,0,1,1,0,0,1};
   int x[8];
   int y[4][8];
   int a[8];
   int b[8];
   int c[8];
   int d[8];
   for(int i=0;i<4;i++){
       for(int j=0;j<8;j++){
           y[i][j]=rand()%2;
       
   }
     for(int i=0;i<4;i++){
       for(int j=0;j<8;j++){
           printf("%d\t",y[i][j]);
       }
       printf("\n");
   }
   
   for(int i=0;i<8;i++){
       a[i]=y[0][i]^arr[i];
       b[i]=y[1][i]^arr[i];
       c[i]=y[2][i]^arr[i];
       d[i]=y[3][i]^arr[i];
   }
   
   
   int count1=0;
   int count2=0;
   int count3=0;
   int count4=0;
  
   for(int i=0;i<8;i++){
       printf("%d",a[i]);
       if(a[i]==1)
       { count1++;}
        printf("%d",b[i]);
       if(b[i]==1)
       {count2++;}
        printf("%d",c[i]);
       if(c[i]==1)
       {count3++;}
        printf("%d",d[i]);
       if(d[i]==1)
       {count4++;}
        
   }
   
   printf("\nhamming distance between x and a is %d", count1); 
      printf("\nhamming distance between x and b is %d", count2); 
         printf("\nhamming distance between x and c is %d", count3); 
            printf("\nhamming distance between x and d is %d",count4); 
 min(count1,count2,count3,count4);
    return 0;
}