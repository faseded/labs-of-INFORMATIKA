def happy(ticket_number):
    first_half = int(str(ticket_number)[: len(str(ticket_number)) // 2])
    second_half = int(str(ticket_number)[len(str(ticket_number)) // 2:])
    return sum(map(int, str(first_half))) == sum(map(int, str(second_half)))


flag = True
while flag:
    inp_dat  = int(input("Enter the number of digits: "))
    #*while True:
    #    try:
    #        inp_dat  = int(input("Enter the number of digits: "))
    #    except ValueError:
    #        print("Incorrect input")
    #        continue
    #   if inp_dat // 2 !=0:
    #        break
    #    
    count = 0
    for ticket_number in range(10 ** (inp_dat // 2), 10 ** inp_dat):
        if happy(ticket_number):
            count += 1
    print("quantity of happy ticket = ", count)
    d = int(input("Continue?: 0. Нет  1. Да\n"))
    if d == 0:
        flag = False
print("Exit")