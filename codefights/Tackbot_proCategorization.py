def proCategorization(pros, preferences):
    helper = {}
    x=0;
    for A in preferences:
        for B in A:
            if not B in helper:
                helper[B] = []
            helper[B].append(pros[x])
        x=x+1
    res =[]
    for i in range(0,len(helper.keys())):
        res.append([[helper.keys()[i]],helper[helper.keys()[i]]])
    return sorted(res)
