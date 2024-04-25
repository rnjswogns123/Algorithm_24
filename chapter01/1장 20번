# 두 개의 리스트를 입력 받음
list1 = list(map(int, input("숫자 A 리스트를 입력하세요: ").split()))
list2 = list(map(int, input("숫자 B 리스트를 입력하세요: ").split()))

def has_common_items(list1, list2):
    # 두 리스트를 집합(set)으로 변환
    set1 = set(list1)
    set2 = set(list2)
    
    # 두 집합의 교집합을 구함
    intersection = set1 & set2
    
    # 교집합의 길이가 0보다 크면 공통된 항목이 있는 것이므로 True 반환
    return len(intersection) > 0

# 함수 호출하여 결과 출력
result = has_common_items(list1, list2)
print(result)

