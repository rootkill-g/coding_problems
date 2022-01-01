test_cases = int(input())
for _ in range (test_cases):
    n, m = map(int, input().split())
    g = {n : []}
    for i in range (1, n):
        g[i] = [i + 1]
        print(i, i + 1)
        m -= 1
    end = 3
    while m > 0:
        for i in range (1, end):
            if g[i][-1] < end:
                g[i].append(end)
                print (i, end)
                m -= 1
                if m == 0 : break
        end += 1
