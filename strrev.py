st = input("Enter the String : \n")
for i in range(0,len(st),2):
    t=st[i]
    st[i] =st[i+1]
    st[i+1]=t
    print("\n",st[i])
