accu = 0
for i in range(3, 1000):
    if (i % 3 or i % 5):
        accu += i
print(accu)
