# 오늘의 문제

## 상황 가정

최근 커튼 개폐기를 만들면서 **명령 우선순위**에 대해 고민하고 있는 것 같아서 **IF문**으로 이 문제를 해결하는데 도움을 주고자 비슷한 상황을 준비해봤습니다

### 상황

사용자가 입력한 문장을 분석하여 그 문장의 분위기를 파악하려고 한다.

우리가 검토해야하는 5가지의 조건이 있다.

1. 인사말이 들어가 있는가? - **[안녕하세요, 안녕]**
2. 문장기호 **!**가 얼마나 들어 있는가? - **4개 이상**
3. 문장기호 **?**가 얼마나 들어 있는가? - **1개 이상**
4. **부탁**이라는 말이 들어 있는가?
5. 욕설이 들어 있는가? - **[꺼져, 닥쳐, 미친]**

5개의 조건으로부터 다음의 규칙을 적용하여 결과를 낸다.

- 1번 규칙 혹은 2번 규칙을 만족하면 **우호적**
- 1번 규칙과 2번 규칙을 모두 만족하면 **매우 우호적**
- 3번 규칙을 만족하면 **질문글**
- 4번 규칙을 만족하면 **부탁**
- 5번 규칙을 만족하면 **매우 적대적**
- 1번 규칙과 2번 규칙을 모두 만족하지 않으면 **적대적**
- [**우호적**, **매우 우호적**]과 [**적대적**, **매우 적대적**]은 동시에 만족할 수 없다. 동시에 만족할 경우 **적대적**, **매우 적대적**이 우선된다.
- **적대적**, **매우 적대적**인 글에서는 3번, 4번 조건은 검사하지 않는다.



### 문제

1. **1~5**번 조건을 검사하는 IF문을 작성하여라

2. 작성한 IF문을 **규칙**에 맞게 변형하고 나열하여라

3. 결과를 다음의 형식으로 출력하라 - **(매우) 적대적 or 우호적,/질문글/부탁글**(해당하지 않는 경우는 출력하지 않는다)

   EX) 매우 적대적, 우호적/부탁글, 매우 우호적/질문글/부탁글, 우호적/질문글

4. 다음의 예시 문장을 적용하여 결과를 확인하자 

- 안녕하세요! 반갑습니다.
- 안녕하세요!!!!! 반갑습니다!!!!!
- 안녕하세요!!! 파이썬은 어려운게 맞나요????
- 안녕하세요!!! 파이썬은 어려운게 맞나요??? 답변 부탁드립니다.
- 안녕하세요!!!!! 파이썬은 어려운게 맞나요???  답변 부탁드립니다!!!!!
- 어쩌라고요 근데
- 어쩌라고...꺼져
- 닥쳐... 부탁이야....
- 꺼져!!!! 저리가줄래?!?!?!?