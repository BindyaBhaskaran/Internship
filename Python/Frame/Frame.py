import sys
def frame(list):                                 #Function to print in a rectangular frame
    max=0 
    for x in list:                               #Finding length of the longest string in the list
        l=len(x)
        if(max<l):
            max=l                 

    j=0
    while(j<(max+4)):       
        sys.stdout.write("*")                    #Printing the top line of the rectangular frame
        j+=1
    sys.stdout.write("\n")

    for x in list:
        sys.stdout.write("*")
        sys.stdout.write(" "+x+" ")              #Printing the list elements
        if(len(x)<max):
            j=0
            while(j<(max-len(x))):
                sys.stdout.write(" ")
                j+=1
        sys.stdout.write("*")
        sys.stdout.write("\n")
    
    j=0
    while(j<(max+4)):
        sys.stdout.write("*")                    #Printing the bottom line of the rectangular frame
        j+=1
    sys.stdout.write("\n")  

length=input("Enter the length of the list:") 
i=0
L=[]
while(i<length):
    ele=raw_input("Enter element: ")             #Inputting the list elements
    L.append(ele)
    i+=1
frame(L)