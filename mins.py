starthr = int(input("Enter the starting Time(HH) : \n"))
startmin = int(input("Enter the starting Time(MM) : \n"))
endhr = int(input("Enter the ending Time(HH)  :\n"))
endmin = int(input("Enter the ending Time(MM)  : \n"))
t1=starthr*60
t1=t1+startmin
t2=endhr*60
t2=t2*endmin
d=t2-t1
print ("min between times",d)
