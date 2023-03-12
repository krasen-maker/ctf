"""  
  FEBRUARY 2023.
  
Задание: 
Rumors are, this cipher was invented more than two thousand years ago, and Aristotle himself proposed a method to crack it. We offer you to touch the ancient history:

IGCADRPCDIETRNRYTTMOITSRRCCATOOASPH
CWIHRPAOPTIHEYIPMYHLLERTEFLTOEPYEUR
AIRLIHFNTAISFNOAANAPTOSSEOSNNGDSA
"""

# Реализация шифра Скиталы (грязная, но рабочая версия)

import numpy as np
text = "IGCADRPCDIETRNRYTTMOITSRRCCATOOASPHCWIHRPAOPTIHEYIPMYHLLERTEFLTOEPYEURAIRLIHFNTAISFNOAANAPTOSSEOSNNGDSA"

l = len(text)
n = 13 # фиксированная длина подстрок (сколько столбцов с на)


output = np.array([])
for i in range(0,int(l/n)):
    output = np.append(output,text[i*n:(i+1)*n])

if len(text)%n !=0:
    output = np.append(output,text[len(text)-len(text)%n:])

e = list(["" for i in range(0,n)])

for i in range(0,len(output)):
    for j in range(0,len(output[i])):
        e[j]+=output[i][j]

s=""
for i in e:
    s+=i 
print(s) 
