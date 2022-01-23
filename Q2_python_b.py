n=int(input())
m1 = []
for i in range(n):
    a = []
    for j in range(n):
        a.append(1.1)
    m1.append(a)
m2 = []
for i in range(n):
    b = []
    for j in range(n):
        b.append(1.1)
    m2.append(b)
m3 = []
for i in range(n):
    c = []
    for j in range(n):
        c.append(0)
    m3.append(c)
for i in range(n):
    for j in range(n):
        for k in range(n):
            m3[i][j] += m1[i][k] * m2[k][j]
