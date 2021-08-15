from os import system, name

def clear():
    if name == 'nt' :
            _ = system ('cls')
    else:
            _ = system ('clear')

fvethusn=int(input("5000 x " ))
thusn=int(input("1000 x " ))
fvehnred=int(input("500 x " ))
hnred=int(input("100 x " ))
ffty=int(input("50 x " ))
twnty=int(input("20 x " ))
ten=int(input("10 x " ))
fve=int(input("5 x " ))
yester=int(input("Yesterday Cash : " ))
a_exp=int(input("+ Additional Expenses : " ))
a_inc=int(input("- Additional Incomes : " ))

a_llsum = fvethusn*5000+thusn*1000+fvehnred*500+hnred*100+ffty*50+twnty*20+ten*10+fve*5
b_llsum = fvethusn*5000+thusn*1000+fvehnred*500+hnred*100+ffty*50+twnty*20+ten*10+fve*5+a_exp-a_inc


clear()

print("5000 x ","%02d" %fvethusn," =",fvethusn*5000)
print("1000 x ","%02d" %thusn," =",thusn*1000)
print(" 500 x ","%02d" %fvehnred," =",fvehnred*500)
print(" 100 x ","%02d" %hnred," =",hnred*100)
print("  50 x ","%02d" %ffty," =",ffty*50)
print("  20 x ","%02d" %twnty," =",twnty*20)
print("  10 x ","%02d" %ten," =",ten*10)
print("   5 x ","%02d" %fve," =",fve*5)
print("\nTotal Money in Cashier = ",a_llsum)
print("\nYesterday Cash = (",yester,")","\t\t\t|",a_llsum-yester)
if a_exp > 0:
    print("\nAdditional Expenses = ",a_exp,"\t\t\t|",a_llsum-yester+a_exp)
if a_inc > 0:
    print("\nAdditional Incomes = (",a_inc,")","\t\t\t|",a_llsum-yester+a_exp-a_inc)
    
    

bal_n = b_llsum-yester

print("\nYour Cash Balnce For Today Is ",bal_n)

if thusn > 10:
    a_thusn = thusn-10
    b_thusn = thusn-a_thusn
else:
    a_thusn = 0
    b_thusn = thusn
    
if fvehnred > 10:
    a_fvehnred = fvehnred-10
    b_fvehnred = fvehnred-a_fvehnred
else:
    a_fvehnred = 0
    b_fvehnred = fvehnred

def deposit():

    print("\nDeposit\n")

    if fvethusn >= 1:
        print("5000 x ","%02d" %fvethusn," =",fvethusn*5000)
    print("1000 x ","%02d" %a_thusn," =",a_thusn*1000)
    print(" 500 x ","%02d" %a_fvehnred," =",a_fvehnred*500,"\t\t\t|",fvethusn*5000+a_thusn*1000+a_fvehnred*500)

if fvethusn >= 1 or thusn > 10 or fvehnred > 10:
    deposit()

print("\nTommrrow Cash\n")

print("1000 x ","%02d" %b_thusn," =",b_thusn*1000)
print(" 500 x ","%02d" %b_fvehnred," =",b_fvehnred*500)
print(" 100 x ","%02d" %hnred," =",hnred*100)
print("  50 x ","%02d" %ffty," =",ffty*50)
print("  20 x ","%02d" %twnty," =",twnty*20)
print("  10 x ","%02d" %ten," =",ten*10)
print("   5 x ","%02d" %fve," =",fve*5,"\t\t\t|",b_thusn*1000+b_fvehnred*500+hnred*100+ffty*50+twnty*20+ten*10+fve*5)



input("\n\nPress Enter Key To exit")
