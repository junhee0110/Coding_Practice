# 1. Introducing C

## 1.1 Histroy of C

### Origins

- C는 UNIX 운영체제의 부산물로써, 벨 연구소의 Ken Thompson, Dennis Ritchie와 그 외 여러 사람들이 개발했다.

- Ken Thompson은 혼자서 UNIX의 초기버전을 만들었다. 다른 OS처럼 UNIX도  어셈블리어로 작성되었는데, 어셈블리어로 작성된 프로그램은 디버깅하기 힘들고 개선이 힘들었다. 물론, UNIX도 예외는 아니었다.

- Ken Thompson은 UNIX의 추후 개발을 위해 High-Level Language가 필요하다고 결정했고, B언어라는 소소한 언어를 설계했다. B언어는 1960년대 중반에 개발된 BCPL이라는 언어에 기반했다.

- Dennis Ritchie가 얼마 뒤에 UNIX 프로젝트에 참여해, B언어로 프로그래밍 하기 시작했다.

- 1970년, 벨 연구소는 PDP-11 컴퓨터를 위한  UNIX프로젝트를 얻었다. B가 등장하여 PDP-11에서 작동되자, UNIX의 일부를 B로 다시 작성했다.

- 1971년, B언어는 PDP-11에 적합하지 않은 것이 분명해졌다. 그래서 Dennis Ritchie는 B의 확장 버젼을 개발하기 시작했다. 그는 이를 처음에 NB(New B)라고 불렀다. 그리고 이것이 B와 분화되기 시작하면서, 이름을 C라고 바꾸었다. 이는 1973년에는 충분히 안정화되어 UNIX는 C언어로 다시 작성될 수 있었다.

- C로 전환하며 **이식성**이라는 중요한 이점을 가지게 되었다.

- 벨 연구서의 다른 컴퓨터를 위한 C 컴파일러를 작성함으로써, 팀은 그 컴퓨터들에서 잘 장동되는 UNIX를 개발할 수 있었다.

  

### Standardization

- Brian Kernighan과 Deniis Ritchie가 집필한 *The C Programming Language*는 1978년에 출판되었고, 빠르게 C 프로그래머의 바이블로 자리잡았다. C언어의 표준이 없었기 때문에, "K&R" 또는 "White Book" 이라고 불리는 이 책은 사실상 표준으로 여겨졌다.

- 1970년대에는 상대적으로 C 프로그래머의 수가 적었다. 그리고 대부분 UNIX 사용자였다. 하지만 1980년대에 이르러, UNIX 세계의 좁은 제약을 넘어서 확장되었다. C 컴파일러는 다양한 컴퓨터의 다른 OS에서도 구동되었고, 특히 빠르게 성장하는 IBM PC 플랫폼에서 자리잡기 시작했다.

- C언어의 사용자가 많아지면서 문제가 발생했다. 새로운 C 컴파일러를 작성하는 프로그래머들이 K&R을 참고자료로써 의지한것이다. 아쉽게도 K&R은 몇몇 언어 특징에 대해서는 불분명하여 컴파일러들은 이 특징을 다르게 처리하곤 했다. 또한 K&R은 C의 특징과 UNIX의 특징을 정확하게 분리하지 못했다

- C언어는 K&R이 출판된 뒤로 바뀌어갔고, 문제는 악화되었다. 그래서, C언어에 대한 깊고, 정확한 설명의 필요성은 곧 당연해졌다. 이러한 표준이 없이, 많은 비표준이 만들어졌고, C언어의 강점 중 하나인 이식성을 해쳤다.

- 1983년에 American National Standards Institute (ANSI)의 도움을 받아 C언어의 미국 표준을 개발하는 것이 시작되었다.

- 수차례의 개정 후에 1988년 표준이 완성되었고, 1989년에 공식적으로 승인되었다(X3.159-1989). 1990년에는 International Organization for Standardization (ISO)에 국제 표준으로 승인되었다(ISO/IEC 9899:1990). 초기버전의 C(K&R)와 구별하기 위해, 이 버젼을 보통 C89 혹은 C90이라고 부른다. (Appendix C 참고)

- 1995년, C언어는 많은 변화를 겪었다(1차 개정). 1999년에는 새로운 표준이 배포되면서 주요한 변화들이 생겼다(ISO/IEC 9899:1999). 이는 흔히 C99로 알려져있다.
- ***ANSI C***,***ANSI/ISO C***, ***ISO C***는 한때 **C89**를 가르키는 말이 었지만, 지금은 두 개의 표준이 생겨나면서 모호해졌다.



### C-Based Languages

C언어는 현대의 프로그래밍 언어에 매우  큰 영향을 주었다. 다음은 C기반 언어 중 특히 저명한 것들이다.

  | 언어 |                             특징                             |
  | :--: | :----------------------------------------------------------: |
  | C++  | C의 모든 특징을 포함하지만 클래스와 객체지향 프로그래밍을 지원하기 위한 기능이 추가되었다. |
  | Java |   C++에 기반을 두고 있기 때문에, C의 특징들을 상속받았다.    |
  |  C#  |         C++과 Java에서 분리된 더욱 최근의 언어이다.          |
  | Perl | 원래는 정말 간단한 스크립트 언어였으나, 시간이 지나면서 C의 많은 특징들을 수용하고 성장했다. |

- 다음의 이유로 저자는 C를 배우는 것은 의미가 있다고 생각한다.
  1. C를 배우는 것은 C++과 Java, C#, Perl과 기타 C 기반 언어의 특징에 대한 깊은 통찰력을 줄 것이다. 이 언어들 중 하나를 처음 배우는 프로그래머들은 C에서 상속된 기본적인 특징들을 통달하는 것에 실패하곤 한다.
  2. 곳곳에 오래된 C 프로그램이 있다. 우리는 이 코드들을 작성하고 유지보수하는 것이 필요함을 알게 될 것이다.
  3.  C는 여전히 새로운 소프트웨어를 개발하는데 널리 사용되고 있다. 특히, 메모리나 프로세싱 파워가 한정된 상황이나 C의 단순함이 요구되는 상황에서 널리 사용된다.

## 1.2 Strenghts and Weaknesses of C

C언어의 장단점과 그 철학은 C의 본래 용도으로 부터 유래했다(OS와 시스템 소프트웨어를 작성하는 것).

### C언어의 특징

  1. C는 저급 언어(Low-Level language)이다.
     - 시스템 프로그래밍에 알맞는 언어로써, C언어는 Bytes와 Address같은 machine-level 개념에 대한 접근을 제공한다.
     - C는 프로그램이 빠르게 작동하도록, 컴퓨터의 내부 구조에 대응하는 연산을 제공한다. 응용 프로그램이 입출력, 저장소 관리, 많은 서비스가 이 연산자에 의존하기 때문에, OS가 느려지지 않는다.
  2. C는 작은 언어이다
     - C는 다른 언어에 비해 제한된 기능을 제공한다. 적은 수의 기능을 유지하기 위해서, C는 표준 함수의 라이브러리에 매우 의존한다.
  3. C는 관대한 언어이다.
     - C는 우리 자신이 무엇을 하고 있는지 알고 있다고 가정한다. 그래서 다른 언어보다 더욱 관대하다.
     - 게다가 다른 언어에서 처럼 자세한 에러 체크를 하지 않는다.

### C언어의 강점

  1. 효울성
     - 초창기부터 효율성은 C의 강점중 하나였다. 왜냐하면 어셈블리어가 사용되었던 응용프로그램을 위해 제작되었기 떄문이다.
     - C언어가 제한된 메모리에서 빠르게 실행된다는 것은 매우 중요하다!!
  2. 이식성
     - 개인 컴퓨터부터 슈퍼 컴퓨터까지 다양한 컴퓨터에서 실행되는 프로그램은 주로 C로 작성된다. 왜냐하면 C가 일찍이 UNIX와 ANXI/ISO 표준의 도움으로 비표준과 양립하지 않았기 때문에 이식성이 좋기 때문이다.
     - 또 다른 이유는 C 컴파일러가 작고 쉽게 작성되어 널리 이용될 수 있기 때문이다.
     - C는 이식성이 좋다는 특징이 있지만 프로그래머가 이식불가한 프로그램을 작성하는 것을 막을 수 없다.
  3. 파워
     - C의 방대한 데이터 타입과 연산자는 C를 강력한 언어로 만들었다.
     - C에서는 적은 줄의 코드로 꽤 많은 것을 해낼 수 있다. 
  4. 유연성
     - C가 시스템 프로그래밍을 위해 설계되었지만, 이 영역에 대한 고유한 제한이 없다. C는 현재 임베디드 시스템부터 상업적 데이터 프로세싱까지 대부분의 응용 프로그램을 위해 사용된다.
     - 게다가, C는 이 특성을 이용하는데 매우 적은 제한을 준다. 다른 언어에서는 불가한 것이라도 C에서는 보통 가능하다. 예를 들어, C는 문자를 정수 값이나 실수 값에 더할 수 있다,
     - 이 유연성은 프로그래밍을 더욱 쉽게 만든다. 다만, 이는 버그를 발생시키곤 한다.
  5. 표준 라이브러리
     - C의 강력한 강점 중 하나는 표준 라이브러리이다.
     - 표준 라이브러리는 I/O, string handling, storage allocation 등을 위한 수백개의 함수를 포함한다.
  6. UNIX와의 시너지
     - C는 UNIX와 그의 유명한 변형판인 리눅스 함께일때 부분적으로 강력하다.
     - 사실, 몇몇 UNIX 도구는 사용자들이 C를 안다고 가정한다.

### C언어의 약점

  C언어의 약점은 기계와 가깝다는 그 강점과 같은 이유로 부터 야기된다.

  1. C 프로그램은 에러가 생기기 쉽다
     - C의 유연성은 에러가 생기기 쉽도록 한다. 다른 많은 언어들에서는 발견될 실수들이 C 컴파일러에서는 발견되지 않기 때문이다.
     - C는 프로그램이 실행되기 전까지 대부분의 에러를 찾을 수 없다는 점에서 어셈블리어와 많이 닮아있다.
     - 안타깝게도, C언어는 부주의한 사람들에게 많은 위험이 있다.
  2. C 프로그램은 이해하기 어려울 수 있다.
     - C가 여러가지로 작은 언어이지만, 다른 많은 PL에는 없는 많은 특징이 있다. 그리고 보통 이들이 잘 못 이해된다.
     - 이 많은 특징들은 다양한 방법으로 섞인다. 이는 다른 사람들이 이해하기에는 어렵다. 심지어 작성자 본인이 이해하기도 어렵다.
     - 다른 문제는 C 프로그램의 생태계가 단순하다는 것이다. C언어는 컴퓨터와의 상호작용이 최고로 지루할때 설계되었다. 결과적으로, C는 프로그램 입력 및 편집에 필요한 시간을 최소화하기 위해 의도적으로 간결하게 유지되었다.
     - C의 유연성은 부정적인 요소로도 작용할 수 있다. 그들의 상품에 비해 너무 영리한 프로그래머는 거의 해석이 불가능한 프로그램을 만들 수 있다.
  3. C 프로그램은 변형하기가 어려울 수 있다.
     - C로 작성된 거대한 프로그램은 유지보수를 염두하여 설계하지 않았다면 수정하기가 어려울 수 있다.
     - 현대의 프로그래밍 언어는 주로 Class와 Package같은 기능을 제공하여 거대한 프로그램을 관리가능한 부분으로 나눌 수 있도록 한다. 아쉽게도, C는 그런 기능이 없다. 

### C언어의 효율적인 사용

  C언어를 효율적으로 사용하는 것은 강점을 최대한 살리고, 약점을 최대한 피하는 것이다.
   1. C언어의 위험을 피하는 법을 배우기
       - 위험을 피하는 법에 대한 힌트는 책 전반에 걸쳐 흩어져있다. [위험] 표시를 확인해라!
       - 더 많은 종류의 위험을 확인하고 싶다면, Andrew Koenig가 집필한 ***C Trap and Pitfalls***를 읽어보라!
       - 현대적인 컴파일러는 흔한 위험과 문제를 찾아주지만, 이를 다 찾아주는 컴파일러는 **단 한 개도 없다!!**
   2. 프로그램을 더욱 믿을만 하게 만들기 위하여 Software tool 사용하기
       - C 프로그래머들은 다양한 Tool의 제작자이자 사용자이다.
       - 유명한 C Tool중 하나는 **Lint**이다. **Lint**는 UNIX에서 제공되던 것으로, 대부분의 컴파일러보다 더욱 확장된 에러 분석을 한다. 사용가능하다면 사용하는게 현명하다.
       - 또 다른 유용한 도구는 디버거이다. 많은 버그들은 C 컴파일러로 발견되지 않고 잘못된 출력이나 런타임 에러의 형태로 나타난다. 실용적으로, 좋은 디버거를 쓰는 것은 필수적이다!
   3. 이미 있는 코드 라이브러리의 장점을 이용하기
       - C의 장점 중 하나는 많은 이들이 사용한다는 것이다.  그리고 그들은 우리가 우리 프로그램에 적용할 만한 코드를 작성한다.
       - C 코드는 보통 라이브러리로 합쳐진다. 적절한 라이브러리를 얻는 것은 오류를 줄이는데 도움이 된다. 그리고 우리들의 노력을 줄이는데 도움을 준다.
       - UI 개발, 그래픽, 통신, DB관리, 네트워킹 등의 흔한 작업을 위한 라이브러리는 이미 준비되어있다.
       - 몇몇 라이브러리는 무료 혹은 오픈소스이기도 하며, 몇몇은 판매되고 있다.
   4. 합리적인 코딩 관습을 도입하기
       - 코딩 관습은 강제되는 것은 아니지만, 프로그래머들이 도입하기로 한 코딩 스타일이다.
       - 잘 선택된 관습은 프로그램이 더욱 일관적이고, 읽고 쓰기 쉽도록 돕는다.  관습은 다른 언어에서도 마찬가지이지만, 특히 C에서 중요하다. C의 높은 유연성은 프로그래머가 읽을 수 없는 코드를 작성하게 만든다.
       - 이 책에서는 많은 관습 중 하나를 채택할 것이다. 그러나 비슷한 다른 대안들이 있고, 차차 알아볼 것이다.
       - 어떤 관습을 채택하는지는 관습을 선택하고 고수하는 것보다 덜 중요하다.
   5. 트릭과 너무 복잡한 코드 피하기
       - C는 프로그래밍 트릭을 장려한다. 주어진 작업을 완수하는 데는 보통 비슷한 몇 가지 방법이 있다. 프로그래머들은 보통 가장 간결한 것을 고르는 경향이 있다.
       - 보통 가장 짧은 방법이 가장 이해하기 어렵다. 간결한 것 만을 추구하지말자.
   6. 표준을 지키기.
       - 많은 C 컴파일러는 C89나 C99에는 없는 기능이나 라이브러리 함수를 제공한다. 필요한 것이 아니라면, 이식성을 위해 비표준 기능이나 라이브러리를 피하는 것이 좋다.

## Q&A

   1. **Lint**는 무엇을 하는가??

       - **Lint**는 C 프로그램에서 Type의 혼용, 사용되지 않은 변수, 실행되지 않는 코드와 이식할 수 없는 코드와 같은 잠재적인 에러를 체크한다.
       - 이는 프로그래머가 체크해보아야 할 진단 메세지의 리스트를 출력한다.
   2. **Lint**는 어디서 구할 수 있는가??
    
      - **Lint**는 UNIX의 유틸리티이고, 다른 운영체제에는 아마 **Lint**가 없을 것이다. 다행히, 서드 파티의 **Lint**가 있다.
       - **Lint**의 향상된 버젼을 **Splint**(Secure Programming Lint)라고 한다. 이는 많은 리눅스 배포반에 포함되어 있고 다운로드할 수 있다.
   3.  **Lint**등을 사용하지 않고도 컴파일러가 더욱 깊게 에러를 체크하도록 강제할 수 없는가??
       - 가능하다. 대부분의 컴파일러가 깊게 에러를 체크하라고 한다면 그렇게 해준다. (반박의 여지가 없이 C의 법칙을 파괴하는 것이다.)
       - 대부분의 컴파일러는 주의 메시지, 잠재적인 문제 지적 등을 제공한다.
       - 몇몇 컴파일러는 하나 이상의 "Warning level"을 가지고 있다. 높은 Warning level을 선택하면 낮을 때보다 컴파일러가 더 많은 문제를 체크한다.
       - 만약 컴파일러가 Warning level을 제공한다면, 높은 Warning level을 선택하는 것이 좋다.이는 컴파일러가 수행할 수 있는 가장 철저한 검사 작업을 하도록 할 것이다.
       - 에러 체커는 **GCC** 컴파일러의 옵션으로 제공된다. 이는 Chapter 2의 Q&A에서 다뤄질 것이다
   4. 가능한 믿을만 하게 프로그램을 만들고 싶다. **Lint**와 디버거 외에 다른 도구가 있는가?
       - **Bound-checkers**와 **Leak-finders**를 포함하는 다른 유명한 도구가 있다. C는 **array subscripts** 체크를 필요로 하지 않는다. **Bounds-checker**는 이 기능을 추가했다.
       - **Leak-finder**는 **Memory leaks**를 찾는 것을 도와준다. 이는 메모리의 블럭이 동적으로 할당되었으나, 할당을 해제하지 않았을 때를 말한다.
