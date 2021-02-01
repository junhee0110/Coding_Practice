# List

## 문제 1
**list()** 함수를 사용하면 리스트로 형변환이 가능하다. 예를 들어, **list("안녕하세요.")**는 **['안', '녕', '하', '세', '요', '.']**로 변환된다. 반면, **['안', '녕', '하', '세', '요', '.']**를 문자열로 형변환하면 **"['안', '녕', '하', '세', '요', '.']"**가 된다. **list()**함수로 형 변환한 문자열을 다시 원래대로 돌리는 방법을 연구해보고 코드를 작성해보자.

```python
>>> a = '안녕하세요.'
>>> a = list(a)
>>> a
['안', '녕', '하', '세', '요', '.']
>>> str(a)
"['안', '녕', '하', '세', '요', '.']"

#어떻게 해야 ['안', '녕', '하', '세', '요', '.']를 '안녕하세요.'로 되돌릴 수 있을까?
```

# While

While문은 보통 **조건**과 함께 쓰인다는 것을 기억하자. 조건을 이용해 반복해야하는 예시들로 문제를 준비해봤다.

## 문제 1

우리가 처음 풀었던 문제를 기억하는가? 첫번째 문제에서 우리는 다양한 정보를 수집받았다. 그 중에서 이메일에 집중해보자. 우리가 짠 코드대로라면 **ID@SCHOOL.DOMAIN**의 형태가 아니라면 프로그램은 정상적으로 작동하지 않는다.
사용자가 이메일을 입력했을때 정상적으로 **ID@SCHOOL.DOMAIN**의 형태로 입력할 때 까지 입력을 반복하는 프로그램을 만들어보자.

### Example

```
이메일을 입력하세요 : junhee0110
올바른 형식으로 입력하세요.
이메일을 입력하세요 : aeihfahfihaop@
올바른 형식으로 입력하세요.
이메일을 입력하세요 : junhee0110@hanyang.ac.kr
접수되었습니다.
```

## 문제 2

로그인 프로그램을 만들어보자. 먼저 사용자는 자신의 비밀번호를 설정한다. 그리고 자신의 비밀번호를 확인한다. 이때, 비밀번호 확인을 틀리면 비밀번호 설정 단계로 되돌아 간다.

비밀번호가 설정되면, 비밀번호를 입력하여 로그인하도록 한다. 비밀번호가 맞으면 **로그인 되었다는 메시지**를 표시한다. 비밀번호가 틀리면 **비밀번호를 다시 묻도록 한다**. 이때, 비밀번호를 몇번이나 틀렸는지 같이 표시한다. 그리고 비밀번호를 5회 틀리면 **접근이 차단되었다는 메시지**를 표시하고 프로그램을 종료하라.

### Example 1
```
비밀번호를 설정해주세요 : abcde1234
비밀번호를 확인해주세요 : abced1234
비밀번호가 설정되었습니다.
비밀번호를 입력해주세요 : abcde1234
로그인 되었습니다.
```
### Example 2
```
비밀번호를 설정해주세요 : abcde1234
비밀번호를 확인해주세요 : abced1234
비밀번호가 설정되었습니다.
비밀번호를 입력해주세요 : abcde
다시 입력해주세요. (실패 횟수 : 1)
비밀번호를 입력해주세요 : abcde23
다시 입력해주세요. (실패 횟수 : 2)
...
비밀번호를 입력해주세요 : abcde145
다시 입력해주세요. (실패 횟수 : 4)
비밀번호를 입력해주세요 : abcde144
접근이 차단되었습니다.
```
### Example 3
```
비밀번호를 설정해주세요 : abcde1234
비밀번호를 확인해주세요 : abced12
확인 비밀번호가 일치하지 않습니다.
비밀번호를 설정해주세요 : abcde1234
비밀번호를 확인해주세요 : abced16
확인 비밀번호가 일치하지 않습니다.
비밀번호를 설정해주세요 : abcde1234
비밀번호를 확인해주세요 : abced1234
비밀번호가 설정되었습니다.
```
# For

For문은 리스트와 관련이 깊다 (혹은 반복 횟수가 정해져있을 때). 반복을 이용해 리스트를 조작해야하는 문제와 반복 횟수를 이용하는 문제를 준비해봤다.

## 문제 1
구구단을 출력해보자

## 문제 2
다음 세가지 패턴을 출력해보자. 프로그램이 시작되면 몇 층을 쌓을 것인지 입력받는다.

### Pattern 1
```
몇 층을 쌓을까요? : 6층
*
**
***
****
*****
******
```

### Pattern 2
```
몇 층을 쌓을까요? : 6층
@
*@
**@
***@
****@
*****@
```

### Pattern 3
```
몇 층을 쌓을까요? : 6층
      @      
     @*@     
    @***@
   @*****@
  @*******@
 @*********@      
```

### 문제 3-1
십진수를 이진수로 변환하는 프로그램을 작성해보자

### Example
```
십진수 입력: 10
10을 이진수로 하면 1010
```

### 문제 3-2
이진수를 십진수로 변환하는 프로그램을 작성해보자

### Example
```
이진수 입력: 1010
1010을 십진수로 하면 10
```

## 문제 4
IF문을 다룰떄 in 연산자를 정말 유용하게 사용했다.
이번에는 for문과 리스트를 이용해서 in 연산자와 같은 기능을 하도록 만들어보자.
마찬가지로 count함수와 같은 기능을 하도록 만들어보자.
대상 문자열을 입력한 뒤 찾을 문자열을 입력하자. 그리고 문자열이 있으면 **해당 문자열이 있고 몇개가 있는지** 출력하고, 없으면 없다고 출력하자

### Example 1
```
문자열 : "안녕하세요~~ 여러분~~ 저는 DAYONE의 회장 이준희입니다!! 우리 모두 DAYONE 활동을 즐겨보아요~~~~~
찾을 문자열 : DAYONE
DAYONE이라는 문자열은 대상 문자열에 포함되어있고, 그 개수는 2번입니다.
```
### Example 2
```
문자열 : "안녕하세요~~ 여러분~~ 저는 DAYONE의 회장 이준희입니다!! 우리 모두 DAYONE 활동을 즐겨보아요~~~~~
찾을 문자열 : 행복해~
행복해~는 대상 문자열에 포함되어있지 않습니다.
```

## 문제 5
욕설 필터를 만들어보자. 필터링할 문자열이 입력되면 다음의 욕설을 모두 **@**로 바꾼다. 그리고 걸러진 욕설들이 무엇이 있는지 출력하자. (단, 중복된 욕설은 하나만 출력한다)

**필터링할 욕설** - 시발, 꺼져, 새끼, 병신, 죽어

### Example
```
필터링할 문자열 : 꺼져 진짜.. 이새끼야.. 진짜 나쁜 새끼..
필터링 후 : @@ 진짜.. 이@@야.. 진짜 나쁜 @@..
필터링 된 욕설 : 까져, 새끼
```