def soma(a, b):
    soma = 0
    if a > b:
        for i in range(b + 1, a):
            soma += i
    else:
        for i in range(a + 1, b):
            soma += i
    return soma

def main():
    x, y = 5, 0
    res = soma(x, y)
    print(res)

if __name__ == "__main__":
    main()
