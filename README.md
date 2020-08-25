# Friendship-numbers
Python program to find Ramanujan's friendship number pairs.

x=int(input("Enter any natural number : "))
y=int(input("Enter any natural number : "))
def sum_factors(n):
    sumf=1
    for i in range(2,(n//2)+1,1):
        if(n%i==0):
            sumf=sumf+i
    return sumf
def friendship_pairs(p,q):
    print("The friendship number pairs between",p,"and",q,"are : ")
    count=0
    for a in range(p,q,1):
        r1=sum_factors(a)
        if((sum_factors(r1)==a)and(a!=r1)):
            count+=1
            print("(",a,",",r1,")")
    print("The number of friendship number pairs between",p,"and",q,"are :",count)
friendship_pairs(x,y)
