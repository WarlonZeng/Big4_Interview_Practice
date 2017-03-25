def answer(x, y): # algorithm faster than whole iterations .. searches corner-like L

    counter = 1
    ID = 1
    while counter != x:
        ID = counter + 1 + ID
        counter += 1

    counter = 1
    while counter != y:
        ID = counter + (x - 1) + ID
        counter+= 1
    
    return str(ID)