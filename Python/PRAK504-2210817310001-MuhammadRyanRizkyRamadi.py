def reverse(rever):
    i = 0
    while rever != 0:
        i = (10 * i) + rever % 10
        rever //= 10
    return i

for i in range(3):
    nilai1, nilai2 = input().split()
    nilai1 = reverse(int(nilai1))
    nilai2 = reverse(int(nilai2))
    hasil = nilai1 + nilai2
    print(f'{reverse(hasil)}\n')