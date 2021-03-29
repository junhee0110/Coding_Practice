import buyer as b
import seller as s
import os

# 1. 구매자 추가
# 2. 판매자 추가
# 3. 구매자 선택
# 4, 판매자 선택
# 5. 종료

seller_dic = {}
buyer_dic = {}

def main():
    while True:
        os.system("clear")
        print("메뉴\n\n1. 구매자 추가\n2. 판매자 추가\n3. 구매자 선택\n4. 판매자 선택\n5. 종료")
        menu = int(input("\nINSERT : "))
        while not(menu >= 1 and menu <= 5):
            os.system("clear")
            print("올바른 값을 입력해주세요")
            break

        if menu == 1:
            os.system("clear")
            menu_1()
        elif menu ==2:
            os.system("clear")
            menu_2()
        elif menu ==3:
            os.system("clear")
            menu_3()
        elif menu ==4:
            os.system("clear")
            menu_4()
        elif menu ==5:
            os.system("clear")
            break
        
def menu_1():
    name = input("구매자 이름 입력 : ")
    money = int(input("구매자 시작 금액 입력 : "))
    buyer_dic[name] = b.Buyer(money)

    print("구매자가 추가 되었습니다.")
    input("진행하시려면 Enter를누르세요.")

def menu_2():
    name = input("판매자 이름 입력 : ")
    money = int(input("판매자 시작 금액 입력 : "))
    apple = int(input("판매자 시작 사과 개수 입력 : "))
    price = int(input("판매자 사과 개당 가격 입력 : "))
    seller_dic[name] = s.Seller(money, apple, price)

    print("판매자가 추가 되었습니다.")
    input("진행하시려면 Enter를누르세요.")

def menu_3():
    if buyer_dic == {}:
        print("리스트가 없습니다.")
    else:
        show_dic(buyer_dic)
        buy = input("구매자를 선택하세요 : ")
        if buy in buyer_dic.keys():
            pass
        else:
            print("입력한 구매자가 리스트에 없습니다.")
    input("진행하시려면 Enter를누르세요.")

def menu_4():
    show_dic(seller_dic)
    input("진행하시려면 Enter를누르세요.")

def show_dic(dic):
    for x in dic.keys():
        print(x)

if __name__ == "__main__":
    main()