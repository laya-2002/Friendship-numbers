/* Finding the pairs of friendship numbers present between "x" and "y". */
/* The pairs in which the number is friend to itself are excluded from this program. */
#include<iostream>
using namespace std;
int sum_factors(int n);
void friendship_pairs(int p,int q);
int main()
{
  int x,y;
  cout<<"Enter any natural number : ";
  cin>>x;
  cout<<"Enter any natural number : ";
  cin>>y;
  friendship_pairs(x,y);
  return 0;
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
  cout<<"The friendship number pairs between "<<p<<" and "<<q<<" are : "<<endl;
  for(a=p;a<q;a++)
  {
    r1=sum_factors(a);
    if((sum_factors(r1)==a)&&(a!=r1))
    {
      count++;
      cout<<a<<","<<r1<<endl;
    }
  }
  cout<<"The number of friendship number pairs between "<<p<<" and "<<q<<" are : "<<count;
}
