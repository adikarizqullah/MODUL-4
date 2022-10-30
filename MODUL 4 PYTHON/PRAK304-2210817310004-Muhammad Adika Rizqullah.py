for x in range(5):
    nilai = int(input(""))

    if nilai == 0: 
        print("Nol\n")
    elif nilai <= 9: 
        print("Satuan\n")
    elif 11>= nilai <=19: 
        print("Belasan\n")
    elif nilai >= 100: 
        print("Anda Menginput Melebihi Limit\n")
    else: 
        print("Puluhan\n")