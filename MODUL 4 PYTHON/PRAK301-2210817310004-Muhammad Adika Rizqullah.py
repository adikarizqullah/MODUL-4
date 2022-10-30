from tkinter import N


for x in range(3):
   a1, a2 = input("").split() 
   a1 = int(a1)
   a2 = int(a2)
   if a1 < a2 :
      print(a1, a2)
   else:
      print(a2, a1)