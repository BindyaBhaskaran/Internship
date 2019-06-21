num=input("Enter number")
temp=num
rev=0

#Reversing the original number
while(temp!=0):
    rev=rev*10
    rev+=temp%10
    temp/=10

#Comparing the reversed and the original number
if(rev==num):
    print "The number is a palindrome."
else:
    print "The number is not a palindrome."