def f4():
    total = 0
    init = 32
    maxCount = 2**30
    a = init
    while a < maxCount:
        b = init
        while b < maxCount:
            c = init
            while c < maxCount:
                d = init
                while d < maxCount:
                    if a * b * c * d < 2**31:
                        #  print(a, b, c, d)
                        total += 1
                    else:
                        break
                    d *= 8
                c *= 8
            b *= 8
        a *= 8
    print(f'rank4 instance: 2 * {total} * 24 = ', total * 24 * 2)

def f3():
    total = 0
    init = 32
    maxCount = 2**30
    a =  init
    while a < maxCount:
        b = init
        while b < maxCount:
            c = init
            while c < maxCount:
                if a * b * c < 2**31:
                    #  print(a, b, c)
                    total += 1
                else:
                    break
                c *= 4
            b *= 4
        a *= 4
    print(f'rank3 instance: 2 * {total} * 6 = ', total * 6 * 2)

def f2():
    total = 0
    init = 32
    maxCount = 2**30
    a = init
    while a < maxCount:
        b = init
        while b < maxCount:
            if a * b < 2**31:
                #  print(a, b)
                total += 1
            else:
                break
            b *= 2
        a *= 2
    print(f'rank2 instance: 2 * {total} * 2 = ', total * 2 * 2)

f2()
f3()
f4()
