import sys

import string
from tokenize import String
from xml.etree.ElementTree import tostring


def solve():
    [n , k] = (input().split());
    k = int(k);
    n = int(n);
    arr1 = "".join(input().split());
    arr2 = "".join(input().split());

    if(k == 0):
        if(arr1 != arr2):
            return "NO"
        else:
            return "YES"

    if(n == 2):
        if(arr1 == arr2):
            if(k % 2 == 0):
                return "YES"
            else:
                return "NO"
        else:
            if(k % 2 == 0):
                return "NO"
            else:
                return "YES"
    
    if(arr1 == arr2):
        if(k == 1):
            return "NO"
        else:
            return "YES"
    arr3 = arr2 + arr2;

    if(arr3.find(arr1) != -1):
        return "YES"
    else:
        return  "NO"





def main():
    sys.stdin = open('input.in', 'r') 
    sys.stdout = open('output.text', 'w')
    t = int(input());
    for i in range(1,t+1):
        ans = solve()
        print("Case #" + str(i)+ ": "+ ans)

main()
