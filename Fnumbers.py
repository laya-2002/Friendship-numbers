# Finding the pairs of friendship numbers present between "x" and "y".
# The pairs in which the number is friend to itself are excluded from this program.  
x=int(input("Enter any natural number : "))
y=int(input("Enter any natural number : "))
def sum_factors(n):
    # Function to find sum of all factors of a number except itself.
    sumf=1
    for i in range(2,(n//2)+1,1):
        if(n%i==0):
            sumf=sumf+i
    return sumf
# Printing the Ramanujan's friendship number pairs.
def friendship_pairs(p,q):
    # Function to find friendship number pairs between p and q:
    print("The friendship number pairs between",p,"and",q,"are : ")
    count=0
    for a in range(p,q,1):
        r1=sum_factors(a)
        if((sum_factors(r1)==a)and(a!=r1)):
            count+=1
            print("(",a,",",r1,")",sep="")
    print("The number of friendship number pairs between",p,"and",q,"are :",count)
friendship_pairs(x,y)
