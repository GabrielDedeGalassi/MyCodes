n = int(input())
in1 = out1 = 0
for v in range (n):
    x = int(input())
    if 10 <= x <= 20:
        in1 += 1
    else:
        out1 += 1
print(f'''{in1} in
{out1} out''')