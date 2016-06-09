x=(input("Enter number : "))
s=list(x)
res=0
flag=1
while(flag==1):
	for i in s:
		res+=int(i)*int(i)
		
	if res==1:
		print(str(x) +" is a Happy number")
		break
	else:
		s=list(str(res))
		res=0
		if len(s)==1:
			flag=0
		
else:
	print(str(x) +" is not a Happy number")
