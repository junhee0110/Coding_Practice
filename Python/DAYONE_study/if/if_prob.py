test_text = ["안녕하세요! 반갑습니다.",
            "안녕하세요!!!!! 반갑습니다!!!!!",
            "안녕하세요!!! 파이썬은 어려운게 맞나요????",
            "안녕하세요!!! 파이썬은 어려운게 맞나요??? 답변 부탁드립니다.",
            "안녕하세요!!!!! 파이썬은 어려운게 맞나요???  답변 부탁드립니다!!!!!",
            "어쩌라고요 근데",
            "어쩌라고...꺼져",
            "닥쳐... 부탁이야....",
            "꺼져!!!! 저리가줄래?!?!?!?"]

text = test_text[int(input("문장 선택(0~8) : "))]

# 1번 문제

#  if '안녕' in text or '안녕하세요' in text
#  if text.count("!") >= 4
#  if "?" in text
#  if '부탁" in text
#  if '꺼져' in text or '닥쳐' in text or '미친' in text

# 2번 문제
"""
2번문제에서는 규칙의 우선순위를 정하는 것이 중요하다.
내가 생각한 우선 순위는 다음과 같다.

5 > 1 = 2 > 3 = 4

5번이 가장 우선인 이유:
    매우 적대적일 경우 3,4번 검사를 하지 않아도 된다.
    매우 적대적일 경우 우호적인지 매우 우호적인지 검사하지 않아도 된다. (적대적이 우선이므로)

    5번 만족 -> 매우 적대적, 검사 끝
    5번 불만족 -> 1, 2번 검사

그 다음이 1,2번인 이유:
    적대적일 경우도 3,4번 검사를 하지 않아도 된다.

    1, 2 모두 불만족 -> 적대적, 검사 끝
    1, 2 모두 만족 -> 매우 우호적, 3, 4번 검사
    1, 2 중 하나 만족(XOR) -> 우호적, 3, 4번 검사
    

마지막이 3, 4번인 이유:
    3, 4번 조건은 다른 조건에 영향을 주지 않기 때문이다.
    
    3 만족 -> 질문글 추가
    4 만족 -> 부탁 추가
    둘다 불만족 -> 추가x

이를 Flow Chart로도 나타낼 수 있다
"""
output = ""

if '꺼져' in text or '닥쳐' in text or '미친' in text:
    output = output + "매우 적대적"

else:
    global temp_bool1, temp_bool2, temp_bool3
    temp_bool1 = '안녕' in text or '안녕하세요' in text
    temp_bool2 = text.count("!") >= 4
    temp_bool3 = True

    if not(temp_bool1 or temp_bool2):
        output = output + "적대적"
        temp_bool3 = False
    elif temp_bool1 and temp_bool2:
        output = output + "매우 우호적"
    else:
        output = output + "우호적"

    if temp_bool3 and "?" in text:
        output = output + "/질문글"

    if temp_bool3 and "부탁" in text:
        output = output + "/부탁"

print("검사 텍스트")
print(text)
print("\n검사 결과: "+output)