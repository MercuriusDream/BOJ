from collections import deque
queue = deque()

INF = 2**31-1
n = int(input())
m = int(input())

pts = [[] for _ in range(n)]
prices = [0]
for _ in range(m):
    a,b,c = map(int,input().split())