n = int(raw_input())
for i in range(n):
    num =raw_input()
    a = 0
    b = 0
    for j in range(len(num)):
        if num[j] == ' ':
            break
    a = num[:j]
    b = num[j+1:]
    a = int(a[::-1])
    b = int(b[::-1])
    c = str(a+b)
    print int(c[::-1])
