def sln_1():
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    vec = [a[0]]
    for i in range (1, n):
        vec.append(a[i]-a[i-1])
    vec.append(2*(x-a[-1]))
    print(max(vec))

def sln_2():
    n, x = map(int, input().split())
    a = [0]
    b = list(map(int, input().split()))
    a.extend(b)
    a.append(x)
    dist = []
    for i in range (1, len(a)):
        dist.append(a[i]-a[i-1])
    dist[-1]*=2
    print(max(dist))
    
    


def main():
    tc = int(input())
    for _ in range(tc):
        # sln_1()
        sln_2()

if __name__ == "__main__":
    main()
