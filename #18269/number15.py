numsCount = 0
numsSum = 0

for i in range(101):
    number = int(input())
    if (number == 0):
      break
    if ((number % 8) == False):
      numsSum += number
      numsCount += 1
      
if (numsCount == 0):
    print("NO")
else: print(round(numsSum/numsCount, 1))
