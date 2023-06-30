#include<stdio.h>
#include<conio.h>
int main()
{
  int size,x;

   int a[]={8,2,4,4,9};
     printf("%d ",firstoccure(a,5));
}

// 1 greatest no. in array
int findgreatest(int b[],int s)
{
   int i,g=b[0];
   for(i=1;i<s;i++)
    if(b[i]>b[0])
      {
       b[0]=b[0]+b[i];
       b[i]=b[0]-b[i];
       b[0]=b[0]-b[i];
      }
   return b[0];
}

// 2 smallest no. in array
int findsmallest(int b[],int s)
{
   int i,g=b[0];
   for(i=1;i<s;i++)
    if(b[i]<b[0])
      {
       b[0]=b[0]+b[i];
       b[i]=b[0]-b[i];
       b[0]=b[0]-b[i];
      }
   return b[0];
}

// 3 short an array
void shortarray(int b[],int s)
{
  int i,j;
  for(j=0;j<s-1;j++)
   for(i=0;i<s-1;i++)
    if(b[i]>b[i+1])
     {
         b[i]=b[i]+b[i+1];
         b[i+1]=b[i]-b[i+1];
         b[i]=b[i]-b[i+1];
     }
    for(i=0;i<s;i++)
        printf("%d ",b[i]);
}

/*
4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
//rotatoin
void rotate(int b[],int s)
{
    int n,d,i,j;
    printf("Enter n:-");
    scanf("%d",&n);
    printf("choose:-\n1.left\n2.right\n");
    scanf("%d",&d);
    if(d==1)
    {
      for(j=0;j<n;j++)
        for(i=0;i<s-1;i++)
          {
           b[i]=b[i]+b[i+1];
           b[i+1]=b[i]-b[i+1];
           b[i]=b[i]-b[i+1];
          }
      for(i=0;i<s;i++)
        printf("%d ",b[i]);
    }
    else
    {
       for(j=0;j<n;j++)
        for(i=s-1;i;i--)
          {
           b[i]=b[i]+b[i-1];
           b[i-1]=b[i]-b[i-1];
           b[i]=b[i]-b[i-1];
          }
      for(i=0;i<s;i++)
        printf("%d ",b[i]);
    }
}

// 5 first occurence of adjacent duplicate value
int firstoccure(int b[],int s)
{
    int i;
    for(i=0;i<s-1;i++)
        if(b[i]==b[i+1])
         return b[i];
    return 0;
}

/*
6 Write a function in C to read n number of values in an array and display it in reverse
order.
*/
void read_rev_display(int a[],int n)
{
    int i;
    printf("Enter values:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("values in reverse order:- ");
    for(i=n-1;i!=-1;i--)
        printf("%d ",a[i]);
}

// 7 count duplicate
int countduplicate(int b[],int s)
{
    int i,j,l=0;
    for(i=0;i<s;i++)
        for(j=i+1;j<s;j++)
         if(b[i]==b[j])
           l++;
    return l;
}
