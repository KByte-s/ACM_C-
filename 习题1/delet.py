while True:
	str1 = input()
	str2 = input()
	if str1 == "" or len(str1) > 100 :
		continue
	print(str1.replace(str2,""))
