/* Finding the pairs of friendship numbers present between "x" and "y". */
/* The pairs in which the number is friend to itself are excluded from this program. */
#include<stdio.h>
int sum_factors(int n);
void friendship_pairs(int p,int q);
void main()
{
  int x,y;
  printf("Enter any natural number : ");
  scanf("%d",&x);
  printf("Enter any natural number : ");
  scanf("%d",&y);
  friendship_pairs(x,y);
}
int sum_factors(int n)
{
  /* Function to find sum of all factors of a number except itself. */
  int sumf=1;
  int i,p=n/2;
  for(i=2;i<=p;i++)
  {
    if(n%i==0)
    {
      sumf=sumf+i;
    }
  }
  return sumf;
}
void friendship_pairs(int p,int q)
{
  /* Function to find friendship number pairs between p and q */
  int a,count=0,r1;
  printf("The friendship number pairs between %d and %d are : \n",p,q);
  for(a=p;a<q;a++)
  {
    r1=sum_factors(a);
    if((sum_factors(r1)==a)&&(a!=r1))
    {
      count++;
      printf("(%d,%d)\n",a,r1);
    }
  }
  printf("The number of friendship number pairs between %d and %d are : %d",p,q,count);
}
