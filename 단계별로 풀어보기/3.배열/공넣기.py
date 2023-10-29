# 문제
# 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다. 또, 1번부터 N번까지 번호가 적혀있는 공을 매우 많이 가지고 있다. 가장 처음 바구니에는 공이 들어있지 않으며, 바구니에는 공을 1개만 넣을 수 있다.

# 도현이는 앞으로 M번 공을 넣으려고 한다. 도현이는 한 번 공을 넣을 때, 공을 넣을 바구니 범위를 정하고, 정한 바구니에 모두 같은 번호가 적혀있는 공을 넣는다. 만약, 바구니에 공이 이미 있는 경우에는 들어있는 공을 빼고, 새로 공을 넣는다. 공을 넣을 바구니는 연속되어 있어야 한다.

# 공을 어떻게 넣을지가 주어졌을 때, M번 공을 넣은 이후에 각 바구니에 어떤 공이 들어 있는지 구하는 프로그램을 작성하시오.

# 입력
# 첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

# 둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다. 각 방법은 세 정수 i j k로 이루어져 있으며, i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다는 뜻이다. 예를 들어, 2 5 6은 2번 바구니부터 5번 바구니까지에 6번 공을 넣는다는 뜻이다. (1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)

# 도현이는 입력으로 주어진 순서대로 공을 넣는다.

# 출력
# 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다. 공이 들어있지 않은 바구니는 0을 출력한다.

# N개의 바구니를 가지고 있으며 M번 넣는 것을 시도할 것
# x~y번째 바구니에 z의 공을 넣는 것
# 기존에 들어 있는 공은 새 공으로 초기화 할 것
# 마지막에 N개의 바구니에 들어있는 공의 번호를 차례대로 출력할 것(비어있다면 0출력)

# 바구니에 있는 볼 확인하기
def basketBallPrint(basket):
    for i in basket:
        print(i, end=" ")
# 바구니에 볼 던지기
def basketBall(basket, tryNumber):
    for i in range(int(tryNumber)):
        xBasket, yBasket, ball= input().split()

        # 없는 바구니라면 종료
        if(int(xBasket) < 0 or int(xBasket) > len(basket) or int(yBasket) < 0 or int(yBasket) > len(basket)):
            return

        # 바구니에 볼 던지기
        for ii in range(int(int(yBasket) - int(xBasket)) + 1):
            basket[int(xBasket) + (ii - 1)] = int(ball)
    basketBallPrint(basket)


# N개의 바구니와 M번 시도하는 값 입력
basketLen, tryNumber = input().split()
# N개의 바구니 생성 후 0으로 초기화
basket = [0 for i in range(int(basketLen))]
basketBall(basket, tryNumber)

print(basket)