import heapq

def r(n):
    # 빈 리스트를 생성하여 정렬된 숫자를 저장할 변수
    sorted_nums = []
    
    # 입력된 리스트를 힙으로 변환하여 최소 힙 구조로 만듦
    heapq.heapify(n)
    
    # 힙에서 가장 작은 값부터 순서대로 뽑아내어 정렬된 리스트에 추가
    while n:
        sorted_nums.append(heapq.heappop(n))
    
    # 정렬된 리스트 반환
    return sorted_nums

# 사용자로부터 숫자 리스트를 입력받음
n = list(map(int, input("숫자 리스트를 입력하세요 (공백으로 구분): ").split()))

# 함수를 사용하여 숫자를 정렬함
sorted_nums = r(n)

# 정렬된 숫자 출력
print("정렬된 숫자:", sorted_nums)
