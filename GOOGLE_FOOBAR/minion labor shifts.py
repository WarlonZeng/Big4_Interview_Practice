def answer(x, y):
    
    for i in x:
        if i not in y:
            return i

    for j in y:
        if j not in x:
            return j

def main():
    x = [14, 27, 1, 4, 2, 50, 3, 1]
    y = [2, 4, -4, 3, 1, 1, 14, 27, 50]
    ans = answer(x, y)
    print(ans)
    
main()