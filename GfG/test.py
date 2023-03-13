inc = 1500
permonth = 10/12
years = 30
total = 1000

for i in range(years*12):
    total += total * (permonth/100)
    total += inc
    if(i == 119):
        inc = 2500

print(total)