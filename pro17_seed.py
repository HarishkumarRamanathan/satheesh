x=(input("Enter x "))
y=int(input("Enter y "))
res=int(x);
s=list(x)
for i in s:
	res*=int(i)
if(res==y):
	print (str(x)+"is seed of " + str(y))
else:
	print (str(x)+"is not seed of ",y)
