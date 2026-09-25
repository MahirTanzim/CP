# def solution():
#     n = int(input())
#     ls = []
#     for i in range (0,n):
#         a, b, c, d = map(int, input().split())
#         ls.append([a, b, c, d])

#     ans = 0
#     for l in ls:

#         if l[0]>l[2]:
#             ans+=(l[0]-l[2])
#             l[0] -= (l[0]-l[2])
#         if l[1] > l[3] and l[0] == 0:
#             ans+=(l[1]-l[3])
#         elif l[1] > l[3] and l[0] != 0:
#             ans+=(l[1]-l[3]+l[0])
#     print(ans)
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

