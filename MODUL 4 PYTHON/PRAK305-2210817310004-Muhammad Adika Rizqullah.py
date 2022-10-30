for x in range(5):
    sec = int(input(""))

    if sec <= 86400:
        jam = int(sec / 3600)
        detik = int(sec - (3600 * jam))
        menit = int(detik / 60)
        detik = int(detik - (60 * menit))
        print('%.2d:%.2d:%.2d\n'%(jam, menit, detik))
    else:
        hari = int(sec / 86400)
        jam = int((sec - (hari * 86400)) / 3600)
        menit = int(((sec - (hari * 86400)) - (jam * 3600)) / 60)
        detik = int(((sec - (hari * 86400)) - (jam * 3600)) - (menit *60))
        print('%d hari %.2d:%.2d:%.2d\n'%(hari, jam, menit, detik))
