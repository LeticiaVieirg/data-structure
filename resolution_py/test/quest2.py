def f(mat):
    return (mat[0][0] * mat[1][1] * mat[2][2]) + \
           (mat[0][1] * mat[1][2] * mat[2][0]) + \
           (mat[0][2] * mat[1][0] * mat[2][1]) - \
           (mat[0][1] * mat[0][1] * mat[2][2]) - \
           (mat[0][0] * mat[1][2] * mat[2][1]) - \
           (mat[0][2] * mat[1][1] * mat[2][0])

def main():
    m = [[0, 1, 0], [3, 1, -1], [4, 0, 1]]
    result = f(m)
    print("Resultado = \t", result)

if __name__ == "__main__":
    main()

#result = -5
