def solution():
    n = int(input())
    ls = []
    ans = 0
    for i in range (0,n):
        a, b, c, d = map(int, input().split())
        if a > c:
            ans+=(a-c)
            a-=(a-c)
        if b > d and a == 0:
            ans+=(b-d)
        elif b > d and a != 0:
            ans+=(b-d+a)
    print(ans)
    


tc = 1
tc = int(input())
for _ in range(tc):
    solution()

