start = int(input("Enter the starting Range : \n"))
end = int(input("Enterbthe ending Range  : \n"))
count=0
for no in range(start,end):
	if no>1:
		for i in range(2,start):
			if no%i==0:
				break
		else:
			count=count+1
            
print ("prime no between Range",count)
