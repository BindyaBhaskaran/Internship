#Function to find the factorial of a number
def factorial(num):                                        
    if num==1:
        return num
    else:
        return float(num*factorial(num-1))

print("Series: 1/1! + 2/2! + 3/3! + ... + N/N!\n")
terms=input("Enter the number of terms to find the sum:")
i=1.0
sum_terms=0.0  

#Finding the sum of the series
while(i<=terms):                                           
    facto=factorial(i)
    sum_terms+=i/facto
    i=i+1
print "Sum:"
print(sum_terms) 