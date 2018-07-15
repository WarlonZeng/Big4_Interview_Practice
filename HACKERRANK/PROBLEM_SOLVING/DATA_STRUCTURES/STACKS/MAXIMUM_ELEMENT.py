# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(raw_input())

stack = []
running_maxs = [float('-inf')]
# running_max = 0

for i in range(n):
    line = raw_input()
    line = line.split()
    line = map(int, line)
    
    if line[0] == 1:
        x = line[1]
        stack.append(x)
        if not running_maxs or x >= running_maxs[-1]:
            running_maxs.append(x)
    elif line[0] == 2:
        top = stack.pop()
        if top == running_maxs[-1]:
            running_maxs.pop()
    else: 
        print running_maxs[-1]
