def sln0():
    n = int(input())
    s = input()
    len = n
    for i in range (n):
        if s[i] == 'B':
            break
        len-=1
    for i in range (n-1, -1, -1):
        if s[i] == 'B':
            break
        len-=1
    print(len)



def sln1():
    pass



def main():
    tc = 1
    tc = int(input())
    for _ in range(tc):
        sln0()
        # sln1()

if __name__ == "__main__":
    main()