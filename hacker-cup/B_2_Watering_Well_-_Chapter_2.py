MOD = 1000000007
import sys


def solve():
    n  = int(input())
    x_2 = 0
    y_2 = 0
    _2x = 0
    _2y = 0
    for i in range(n):
        x_y = input()
        x = int(x_y.split()[0])
        y = int(x_y.split()[1])
        x_2 = (((x*x)%MOD)+x_2)%MOD;
        y_2 = (((y*y)%MOD)+y_2)%MOD;
        _2x = (((2*x)%MOD)+_2x)%MOD;
        _2y = (((2*y)%MOD)+_2y)%MOD;
    q = int(input())
    ans = 0;
    for i in range(q):
        x_y = input()
        x = int(x_y.split()[0])
        y = int(x_y.split()[1])
        xx =  (((x*((n*x)%MOD-_2x)%MOD)%MOD+x_2)%MOD)
        yy =  (((y*((n*y)%MOD-_2y)%MOD)%MOD+y_2)%MOD)
        ans = (ans + ((xx + yy)%MOD)%MOD)

    return ans%MOD

def __main__():
    sys.stdin = open('input.in', 'r') 
    sys.stdout = open('output.text', 'w')
    t = int(input())
    
    
    test = 1
    while(test<=t):
        ans = solve()
        print("Case #"+str(test) + ": "+ str(ans))

        test = test +1
        
__main__()
