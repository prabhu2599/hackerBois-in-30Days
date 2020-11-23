a=input()
pglen = len(a) - 1
i = 0
win = 0
lost = 0
while(i < pglen):
    if((ord(a[i]) == ord(a[i+1])-13)):
        # print(chr(ord((a[i]))),"  1-1  ", chr(ord((a[i+1]))-13))
        i += 1
        # print("Won")
        win = 1
    elif (ord(a[i]) == ord(a[-1])-13):
        # print(chr(ord((a[i]))),"  2-2  ", chr(ord((a[-1]))-13))
        pglen - 1
        # print("Won")
        win = 1
    else:
        # print("Lost")
        lost = 1
    i += 1
    # print(pglen,"-",i)

if(win == 1 and lost == 0):
    print('Win')
else:
    print('Lost')
