# 2. C Fundamental

이번 챕터에서는 가장 간단한 프로그램을 작성하는 데에도 필요한 몇가지 기초 개념에 대해 학습힌다.

## 2.1 Writing a Simple Program

몇몇 언어로 작성된 프로그램에 반해서, C 프로그램은 **Boilerplate**를 필요로 하기 때문에 완성된 프로그램은 몇 줄로 줄어들 수 있다.

### [PROGRAM]Printing a Pun

**K&R**의 첫 프로그램은 **Hello, World**를 출력하는 매우 짧은 프로그램이다. 우리는 썰렁한 말장난을 하나 출력해보자.

    To C, or not to C: that is the questions. 

- **pun.c**이라는 다음 프로그램은 이 메시지를 출력한다.

    ```c
    #include <stdio.h>

    int main(void)
    {
        printf("To C, or not to C: that is the questions.\n")'
        return 0;
    }
    ```


- 이 줄은 **C의 표준 입출력 라이브러리**의 정보를 포함시키기 위해 빠져서는 안된다.
    ```c
    #include <stdio.h>
    ```

- 프로그램의 실행가능한 코드는 main 프로그램을 의미하는 **main**의 내부에 넣는다. main내부에 있는 유일한 줄은 메시지를 출력하는 명령이다.

- **printf** 함수는 **표준 입출력 라이브러리**에 있는 정형화된 출력을 만드는 함수이다.
- **\n**이라는 코드는 **printf**함수에 메시지를 출력한 후 다음 줄로 넘어가라고 말한다.


- 이 줄은 프로그램이 종료될 때 운영체제에 0 값을 반환하라고 지시한다.
    ```c
    return 0;
    ```

### Compiling and Linking

- **pun.c**가 굉장히 간결하지만 이를 실행시키는 것은 예상보다 더 많은 노력이 필요하다.

- 먼저, 우리는 **pun.c**라는 이름으로 프로그램을 포함하는 파일을 만들어야한다. (아무 텍스트 에디터로 할 수 있다)
파일의 이름은 상관 없지만, 확장자인 **.c**는 종종 컴파일러가 요구한다.

- 다음은, 프로그램을 장치가 실행할 수 있는 형식으로 변환해야한다. C 프로그램은 주로 다음의 세가지 단계를 거친다.
    1. 전처리(Preprocessing)
        - 프로그램은 우선 **전처리기**(Preprocessor)에게 넘겨진다. 전처리기는 **지시어**(Directive)라고 불리는 #으로 시작하는 명령을 따른다. 전처리기는 편집기와도 같다. 이는 프로그램에 무언가를 더하거나 수정을 가한다. 
    2. 컴파일(Compile)
        - 수정된 프로그램은 이제 **컴파일러**(Compiler)에게 넘겨진다. 컴파일러는 이를 **기계어 명령**(Machine Instruction)으로 변역된다 (**Object Code**). 그러나 아직 프로그램은 실행될 준비가 되지 않았다.
    3. 링크(Link)
        - 마지막으로 **링커**(Linker)가 컴파일러가 만들어낸 **Object Code**와 완전한 실행 프로그램을 만드는데 필요한 추가 코드를 합친다. 이 추가 코드는 프로그램에서 사용되는 **printf**같은 라이브러리 함수를 포함한다.

    다행히, 이 과정은 주로 자동화되므로 너무 어렵게 찾아보지 않아도 된다. 사실, 전처리기는 주로 컴파일러와 합쳐져 있다.

- 컴파일과 링크를 위한 명령어는 컴파일러와 운영체제에 따라 다양하다. **UNIX**상에서 주로 쓰는 C 컴파일러는 **cc**라고 한다.
- **GCC** 컴파일러는 유명한 C 컴파일러 중 하나로, **LINUX**에서 배포되었지만 다른 많은 플랫폼에서도 사용가능하다. **GCC**의 사용은 **UNIX cc**컴파일러와 비슷하다.

**참고 : 책에 나온 cc 설명을 gcc로 수정해서 기록했습니다. 둘의 사용이 비슷하고 우리는 gcc를 사용하니까요!**

- **pun.c**를 컴파일하고 링크하기 위해서는 터미널에 다음과 같이 입력한다.
    ```
    $ gcc pun.c
    ```
    **gcc**를 이용할 때 링크는 자동적으로 수행되므로 따로 링크 명령을 할 필요없다.

- 프로그램을 링크하고 나면 **gcc**는 기본값으로 **a.out**이라는 이름의 실행가능한 프로그램을 남긴다.
- **gcc**는 많은 옵션을 가지고 있는데, 이 중 하나가 **-o** 옵션이다. 이 옵션은 실행가능한 프로그램을 포함하는 파일의 이름을 정할 수 있게 해준다. 예를 들어 **pun.c**의 실행가능한 버젼의 이름을 **pun**이라고 하고 싶으면 다음을 입력한다.
    ```
    $ gcc -o pun pun.c
    ```

### Integrated Development Environments

- 지금까지는 터미널에서 컴파일러를 사용한다고 가정했다. 다른 대안은 **통합 개발 환경**(Integrated Development Environments, IDE)를 사용하는 것이다. 이는 편집, 컴파일, 링크, 실행, 디버그를 한 곳에서 모두 할 수 있는 소프트웨어 패키지이다. 
- **IDE**의 요소들은 협업을 위해 설계되었다. 예를 들어, 프로그램에 오류가 발견되면 오류가 있는 줄을 하이라이트하여 나열해 줄 수 있다. 
- 사용중인 플랫폼에서 **IDE**들을 사용할 수 있는지 확인하기를 추천한다.

## 2.2 The General Form of a Simple Program

- 간단한 C 프로그램은 다음의 형태를 가진다.

    ``` c
    directives

    int main(void)
    {
        statements
    }
    ```

- C는 중괄호 {, }를 다른 몇몇 언어들이 **begin**, **end** 같은 단어를 사용하는 것처럼 사용한다. 이는 C의 일반적인 견해를 보여준다. C는 축약과 특별한 기호에 매우 의존한다. 이는 C 프로그래머가 간결한 이유이다.

- 매우 간단한 C 프로그램마저도 이 세가지 중요한 특징을 따른다.
    1. 지시어(Directive)
        - 컴파일에 앞서 프로그램을 수정하여 명령을 편집한다.
    2. 함수(Function)
        - 이름이 있는 실행 가능한 코드의 블록. **main**이 그 예시이다.
    3. 문장(Statement)
        - 프로그램이 실행될 때 수행되는 명령들

### Directives

- C가 컴파일되기 전에 전처리기가 첫번째로 수정한다. 전처리기를 위한 명령들을 **지시어**(Directive)라고 한다.
- 지금 당장은 **#include** 지시어에만 관심이 있다. **pun.c**는 다음으로 시작한다.
    ```c
    #include <stdio.h>
    ```
- 이 지시어 문장은 <stdio.h>에 있는 정보가 컴파일 되기 전에 프로그램에 **포함**된다는 것을 의미한다. 
- <stdio.h>는 C의 표준 입출력 라이브러리에 대한 정보를 담고 있다.
- C는 <stdio.h>같은 **헤더**(header)를 많이 가지고 있으며 각각 표준 라이브러리의 일부에 대한 정보를 담고 있다. 
- 우리가 <stdio.h>를 포함해야하는 이유는 다른 프로그래밍 언어와 다르게 C는 내장된 **읽고 쓰는** 명령어가 없기 때문이다.
- 지시어는 항상 #로 시작하여 C 프로그램의 다른 요소들과 구별된다. 
- 기본적으로 지시어들은 한줄로 되어있다.
- 지시어의 끝에는 세미콜론이나 다른 특별한 마커가 붙지 않는다.

### Functions

- **함수**(Function)은 다른 프로그래밍 언어의 **Procedures**와 **Subroutines**와 같다. 이들은 프로그램들이 만들어지는 구성요소이다.
- 사실 C 프로그램은 함수들의 집합에 지나지 않는다.
- 함수들은 두가지로 나눠진다. **프로그래머가 작성한 것**과 **C의 일부로 제공되는 것**이다. 나중에 이를 **라이브러리 함수**(Library function)이라고 언급할 것이다. 왜냐하면 이들이 컴파일러와 제공되는 함수들의 **라이브러리**에 속하기 때문이다.
- 함수라는 용어는 수학에서 유래했다.
- C는 함수라는 용어를 더욱 느슨하게 사용한다. C에서 함수는 **이름이 있는 그룹화된 문장들의 나열**이다.
- 몇몇 함수는 값을 계산하고 몇몇은 그렇지 않다. 값을 계산하는 함수는 반환할 값을 명시하기 위해 **return**문을 사용한다. 
- C 프로그램이 많은 함수들로 이루어져 있지만, **main**함수 만이 필수적이다. **main**함수는 프로그램이 실행되면 자동적으로 호출된다는 점에서 특별하다.

**[주의] main이라는 이름은 중요하다. begin이나 start, 심지어 MAIN으로도 바뀌어서는 안된다.**

- **main**함수는 값을 반환한다. 이 값은 프로그램이 종료될 때 운영체제에게 전달되는 상태 코드이다.
- **pun.c** 프로그램을 다시 한번 살펴보자.

    ```c
    #include <stdio.h>

    int main(void)
    {
        printf("To C, or not to C: that is the questions.\n")'
        return 0;
    }
    ```

- **main** 바로 앞에 있는 **int**는 **main**함수가 정수 값을 반환한다는 것을 가르킨다.
- 괄호안에 **void**는 **main**함수가 인자를 가지고 있지 않다는 것을 가르킨다.
- 이 문장은 두가지 효과가 있다. 첫번째로, **main**함수를 끝낸다(즉, 프로그램을 종료한다). 그리고 **main**함수가 0 값을 반환한다는 것을 의미한다.

    ```c
    return 0;
    ```

- 이제부터 **main**함수는 항상 정상적인 프로그램 종료를 의미하는 0 값을 반환하도록 한다.
- 만약 **main**함수 끝에 **return**문이 없어도 프로그램은 종료될 것이다. 하지만 많은 컴파일러들은 주의 메시지를 띄운다(이 함수는 정수를 반환하기로 되어있지만 그러지 않았으므로).

### Statements

- **문장, 구문**(Statement)은 프로그램이 작동할 때 실행될 명령들이다.
- **pun.c**는 딱 두가지의 구문을 사용한다. 하나는 **return** 구문이고 다른 하나는 **함수 호출**(function call)이다.
- 함수에게 정해진 작업을 하도록 요청하는 것을 **호출**(Call)이라고 한다.
- **printf** 함수를 호출하여 화면에 문자열을 출력한다.
    ```c
    printf("To C, or not to C: that is the question. \n");
    ```
- C는 각 구문이 세미콜론으로 끝나게 한다.
- 여느 좋은 규칙들과 마찬가지로 한가지 예외가 있는데, 복합문의 경우가 그러하다.
- 구문은 몇 줄에 걸쳐서 쓰일 수 있어 어디가 끝인지 항상 분명한 것이 아니기 때문에, 세미콜론은 컴파일러에게 구문이 어디서 끝나는지 알려준다.
- 반면 지시어는 보통 한줄이기 때문에 세미콜론으로 끝나지 않는다.

### Printing Strings

- **printf** 함수는 강력한 함수이고 우리는 지금까지는 **문자열 리터럴**(String literal)을 출력하기 위해서만 사용했다.
- **문자열 리터럴**이란 쌍따옴표로 쌓여있는 문자들의 나열이다. 이를 **printf** 함수로 출력할 때 쌍따옴표는 보이지 않는다.
- **printf**는 출력이 끝나고 자동적으로 다음줄로 넘어가지 않는다.
- 다음 줄로 넘어가도록 하려면 출력할 문자열에 \n을 포함해야만 한다. 이를 **개행 문자**(new-line character)이라고 한다.
- 개행 문자를 사용하면 현재 출력줄이 끝나고 이어지는 출력이 다음줄로 넘어간다.
- 개행문자는 문자열 리터럴 내에 한번 이상 사용될 수 있다.

## 2.3 Comments

- **pun.c**에는 여전히 중요한게 빠져있다. 바로 **문서화**이다.
- 모든 프로그램은 작성 일자, 작성자, 프로그램의 용도 등의 **확인 정보**를 포함해야 한다. C에서는 이 정보들은 **주석**(Comment)에 작성된다.
- /* 표시는 주석의 시작을 의미하고 */는 끝을 의미한다.
    ```c
    /* This is a comment */
    ```

- 주석은 프로그램의 어디에도 나타날 수 있다. 이는 따로 작성될 수도 있고 다른 프로그램 텍스트와 함께 작성될 수도 있다.
- 다음은 주석이 맨 앞에 추가될 때 **pun.c**이다.
    ```c
    /* Name: pun.c                */
    /* Purpose: Prints a bad pun. */
    /* Author: K. N. King         */

    #include <stdio.h>

    int main(void)
    {
        printf("To C, or not to C: that is the question. \n");
        return 0;
    }
    ```

- 주석은 /* 표시가 한번 생기면 한 줄 이상으로 작성될 수 있다. 컴파일러는 */ 표시를 만날 때까지 무엇이 나타나든 읽고 무시한다.
- 다음과 같이 짧은 주석들을 하나의 긴 주석으로 합칠 수 있다.
    ```c
    /* Name: pun.c
    Purpose: Prints a bad pun.
    Author: K. N. King */
    ```

- 이런 주석은 어디서 끝나는지 확인하기가 어려워서 읽기가 힘들다. */를 따로 마지막에 쓰면 도움이 된다.
    ```c
    /* Name: pun.c
    Purpose: Prints a bad pun.
    Author: K. N. King 
    */
    ```

- 눈에 띄게 하기 위해서 주석 주변에 박스를 만들면 좋다.
    ```c
    /***********************************************
    *   Name: pun.c                                *
    *   Purpose: Prints a bad pun.                 *
    *  Author: K. N. King                          *
    ************************************************/
    ```

- 프로그래머들은 종종 박스 주석의 세 변을 생략하여 단순하게 만든다.
    ```c
    /*
    * Name: pun.c
    *  Purpose: Prints a bad pun.
    * Author: K. N. King 
    */
    ```

- 짧은 주석은 다른 프로그램 코드와 같은 줄에 올 수 있다.
    ```c
    int main(void)    /* Begining of main program */
    ```
    이런 주석을 **Winged Comment**라고 부르곤 한다.

**[주의] 주석을 닫는 것을 잊지 말자. 주석을 닫지 않으면 프로그램의 일부가 무시될 수 있다.**

- **C99**에서는 또 다른 주석을 제공한다. 이는 //로 시작한다.
    ```c
    /// This is a comment
    ```

- 이런 주석은 줄의 끝에서 자동으로 끝난다.
- 여러 줄의 주석을 쓰기 위해서는 기존의 방식(/*, */)을 이용할 수 도 있고 각 줄의 시작에 //를 쓸 수 도 있다.
    ```c
    // Name: pun.c
    // Purpose: Prints a bad pun.
    // Author: K. N. King
    ```
- 이 새로운 주석은 두가지 중요한 장점이 있다. 첫쨰로, 자동으로 줄의 끝에서 주석이 끝나기 때문에 주석을 끝내지 않을 위험이 없다. 둘째로, 모든 줄의 앞에 //이 있기 떄문에 여러줄의 주석이 더 눈에 띈다.

## 2.4 Variable and Assignment

앞서 예시로 들었던 프로그램처럼 단순한 프로그램은 적다. 대부분의 프로그램은 출력하기 전에 일련의 계산을 해야한다. 따라서 프로그램이 실행되는 동안 일시적으로 데이터를 저장할 방법이 필요하다. 다른 프로그래밍 언어에서 처럼 C에서는 이런 저장소를 **변수**(Variable)이라고 부른다.

### Types

- 모든 변수는 어떤 종류의 데이터를 보관할지 특정시키는 **형**(Type)을 가져야만 한다.
- C는 다양한 형을 가지고 있지만, 지금은 **int**와 **float** 두가지만 기억하자.
- 형에 따라서 변수가 어떻게 저장되고 어떤 연산이 가능한지가 결정되므로, 적절한 형을 고르는것은 중요하다. 
- 숫자형 변수들의 형은 그 변수가 저장할 수 있는 가장 큰 수와 작은 수도 결정한다. 또한 소수점 아래 자리를 허용하는지도 결정한다.

- **int** (integer의 약자) 형은 0, 1, 392, -2553같은 정수를 저장할 수 있다. 
- 그 범위는 제한되어 있다. 가장 큰 **int** 값은 보통 **2,147,483,647**이지만 **832,767**만큼 작을 수도 있다.

- **float** (floating-point의 약자) 형은 **int**보다 더 큰 숫자도 저장할 수 있다.
- 게다가, **float** 변수는 소수점 아래 자리도 저장할 수 있다.
- 하지만 몇가지 단점이 있다. **float**의 연산은 **int**의 연산보다 느리다. 가장 중요한것은 **float**형 변수의 값은 주로 저장된 수의 근사값이라는 것이다. 만약 **float**형 변수에 0.1을 저장한다면 반올림 오차로(Rounding error) 인해 변수가 0.099999999999987같은 값을 가지는 것을 확인할 수 있을 것이다.

### Declarations

- 변수는 항상 사용전에 **선언**(Declare)되어야 한다(컴파일러를 위해 기술되어야 한다).
- 변수를 선언하기 위해, 먼저 변수의 형을 명시해야 한다. 그리고나서 이름을 명시한다.
- 예를 들어, 변수 **height**와 **profit**은 다음과 같이 선언된다.
    ```c
    int height;
    float profit;
    ```
- 첫번째 선언문은 **height**를 **int**형의 변수로 선언한다. 즉, **height**변수에는 정수 값만 저장할 수 있다.
- 두번째 선언문은 **profit**을 **float**형의 변수로 선언한다.
- 여러 변수가 같은 타입을 가진다면, 선언은 다음과 같이 합쳐질 수 있다.
    ```c
    int height, length, width, volume;
    float profit, loss;
    ```
- 각 선언이 세미콜론으로 끝나는 것을 주목하자.
- **main**이 선언을 포함한다면 반드시 구문들보다 먼저 해야한다.
    ```c
    int main(void)
    {
        declarations
        statements
    }
- 이는 일반적으로 블록(내제된 선언을 포함하는 구문)뿐만 아니라 함수에서도 사실이다.
- 문체상 선언들과 구문들 사이에 빈칸을 두는 것이 좋다.
- **C99**에서는 선언이 구문들 앞에 있을 필요없다. 예를들어, **main**에서 선언을 하고 구문들을 작성한 뒤, 다시 또 다른 선언을 할 수 있다.
- 오래된 컴파일러에서의 이식성을 위해, 이 책에서는 이 장점을 이용하지 않는다.
- 그러나 JAVA나 C++에서는 변수들이 필요해지지 전까지 선언하지 않는 것이 흔하다. 따라서 이 관행은 C99 프로그램에서도 흔할 것이라고 예상할 수 있다.

### Assignment

- 변수는 **할당**(Assignment)함으로 값을 지정할 수 있다. 예를 들어 다음의 구문은 **height**, **length**, **width**에 값을 할당한다.
    ```c
    height = 8;
    length = 12;
    width = 10;
    ```
- 8, 12, 10을 **상수**(Constant)라고 한다.
- 변수에 값을 할당하거나 사용하기 이전에,무조건 먼저 **선언**되어야한다.
- **float**형 변수에 할당되는 상수는 보통 소수점을 포함한다. 예를 들어 **profit**이 **float**형 변수라면 다음과 같이 작성한다.
    ```c
    profit = 2150.48;
    ```
- 소수점을 포함하는 상수가 **float**형 변수에 할당될 때, **f**를 뒤에 추가하는 것이 좋다. **f**를 누락시키는 것은 컴파일러의 경고메시지를 유발한다.
    ```c
    profit = 2150.48f;
    ```
- 보통 **int**형 변수는 **int**형의 값을 할당받고, **float**형 변수는 **float**형 변수를 할당받는다.
- 형에 맞지 않는 변수를 할당하는 것은 가능하지만 안전하지는 않다.
- 변수에 값이 할당되면, 다른 변수의 값을 계산하는데 사용할 수 있다.
    ```c
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width; // volume is now 960
    ```
- C에서 *은 곱 연산자이다. 즉, 이 구문은 **height**, **length**, **width**에 저장된 값을 곱하여 **volume**에 할당한다.
- 일반적으로, 할당의 오른편은 상수, 변수, 연산자를 포함하는 공식이 될 수 있다. C 용어로는 **표현식**(Expression)이라고 한다.

### Printing the Value of a Variable

- 변수의 현재 값을 출력하기 위해 **printf** 함수를 사용할 수 있다. 예를 들어, h를 **height** 변수의 현재값이라고 할 때, 다음과 같이 입력하고 싶다면
    ```c
    Height : h
    ```
    **printf**함수를 다음과 같이 호출하여 사용한다.
    ```c
    printf("Height : %d\n", height);
    ```
- %d는 출력중에 **height**에 저장된 값이 표시될 자리를 가르키는 **플레이스홀더**(Placeholder)이다.
- \n의 위치가 %d 바로 뒤라는 것에 주목하자. **printf**는 **height**에 저장된 값을 출력하고 다음줄로 넘어갈 것이다.
- %d는 **int**형 변수에서만 작동한다. **float**형 변수를 출력하고 싶다면 %f를 사용하면 된다.
- 일반적으로 %f는 소수점 아래 6자리까지 표시한다. 만약 소수점 아래 **p**자리까지 표시하고 싶다면 %.**p**f의 형식으로 사용하면 된다. 예를들어, 다음과 같이 출력하고 싶다면
    ```c
    Profit: $2150.48
    ```
    **printf**를 다음과 같이 호출하면 된다,
    ```c
    printf("Profit: $%.2f\n", profit);
    ```
- 한 번의 호출로 출력할 수 있는 변수의 개수는 제한되어 있지 않다. **height**와 **length**를 모두 출력하고 싶다면 **printf**를 다음과 같이 호출한다.
    ```c
    printf("Height: %d Length: %d\n", height, length);
    ```
### [PROGRAM]Computing the Dimensional Weight of a Box

- 운송 회사는 물건의 무게가 아니고 부피로 추가 요금을 매기곤 한다. 미국에서는 일반적인 방법은 부피를 166으로 나누는 것이다(국내 운송은 194를 나눈다). 166은 허용가능한 파운드 당 세제곱인치이다. 부피를 166으로 나눈 이 수치를 **Dimensional Weight** 혹은 **Volumetric Weight**라고 한다. 만약 이 수치가 실제 무게를 초과한다면 이 수치를 기반으로 요금을 매긴다. **Dimensional Weight**를 계산하는 C 프로그램을 만든다고 가정해보자. 우리는 아직 초보이니까 일반적인 12 * 10 * 8 크기의 상자의 **Dimensional Weight**를 구하는 것으로 시작해보자. 나누기는 /로 표현된다.
    ```c 
    weight = volume / 166;
    ```
    **weight**와 **volume** 변수는 상자의 무게와 부피를 나타내는 정수형 변수이다.
- 하지만 이 표현식은 우리가 필요한 것이 아니다. C에서는 정수와 정수를 나누면 소수점 아래가 모두 버려지기 때문이다. 즉, 부피 960을 166으로 나누면 5.783이 아닌 5가 된다.
- 운송 회사는 소수점 아래를 올리길 바란다. 한가지 방법은 166으로 나누기 전 부피에 165를 더하는 것이다.
     ```c 
    weight = (volume + 165) / 166;
    ```

```c
/// Program name : dweight.c
/// Computes the dimensional weight of a 12 * 10 * 8 box

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d*%d*%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```
**OUTPUT**
```
Dimensions: 12*10*8
Volume (cubic inches): 960
Dimensional weight (pounds): 6
```

### Initialization

- 몇몇 변수는 실행과 동시에 자동적으로 0으로 설정되지만, 대부분은 그렇지 않다.
- 기본 값을 가지고 있지 않고 값을 할당받지 못한 변수를 **초기화되지 않았다**(Uninitialized)고 한다.

**[주의] 초기화되지 않은 변수에 접근하는 것은 예상치 못한 이상한 값을 보일것이다. 몇몇 컴파일러에서는 심지어 충돌이 일어날 것이다.**

- 할당을 이용하여 변수의 초기값을 설정할 수 있다. 더 쉬운 방법은 선언과 동시에 초기값을 설정하는 것이다. **height**를 선언하고 초기화하고 싶다면 다음 한줄만 적으면 된다.
    ```c
    int height = 8;
    ```
- C 특수 용어에서, 8이라는 값은 **초기자**(Initializer)라고 한다.
- 여러개의 변수가 하나의 선언에서 초기화 될 수 있다.
    ```c
    int height = 8, length = 12, width = 10;
    ```
- 각 변수가 각자의 초기자를 가져야 한다는 것을 주목하자. 다음의 예시에서 초기자 10은 **width**만 초기화 시킨다.
    ```c
    int height, length, width = 10;
    ```
### Printing Expression

- **printf**는 변수에 저장된 숫자만 출력할 수 있는 것이 아니다. 숫자로 된 아무 표현식의 값이나 출력할 수 있다.
- 이 특징을 이용하면, 프로그램을 단순화 할 수 있고 변수의 수를 줄일 수 있다.
- 예를 들어 다음 구문은
    ```c
    volume = height * length * width;
    printf("%d\n", volume);
    ```
    이렇게 대체할 수 있다.
    ```c
    printf("%d\n", height * length * width);
    ```
- **printf**의 이런 기능은 C의 원칙을 확실히 보여준다. ***값이 필요한 곳이라면, 같은 형의 어떤 표현도 좋다.***

## 2.5 Reading Input

- 입력값을 얻기 위해 **scanf** 함수를 이용한다. C 라이브러리에서 **printf**의 짝이다.
- **scanf**와 **printf**의 **f**는 **formatted**를 의미한다.
- 두 함수 모두 입출력의 형태를 명시하기 위해 **형식 문자열**(format string)을 필요로 한다.
- **printf** 함수가 데이터를 어떻게 출력할지 알아야 하는 것처럼, **scanf** 함수도 입력될 데이터의 형식을 알아야한다.
- **int** 값을 받기 위해, 다음과 같이 **scanf**를 사용한다.
    ```c
    scanf("%d", &i); // reads an integer; stores into i
    ```
- %d는 정수인 입력을 읽는다는 것을 말한다. i는 **scanf**가 입력받은 값을 저장할 변수이다.
- &의 의미는 당장 설명하기는 힘들지만, **scanf**를 사용할 때 종종 필요하다는 정도로 알아두자.
- **float**형을 읽기 위해서는 조금 다르게 함수를 호출한다.
    ```c
    scanf("%f", &x); // reads an float value; stores into x
    ```
    %f는 **float**형의 변수에서만 작동하기 때문에, x를 **float**형 변수라고 가정한다.
- %f는 실수값이 입력되는 것을 읽겠다는 것을 의미한다. 즉, 입력되는 수는 소수점을 포함할테지만 꼭 그럴필요는 없다.

### [PROGRAM] Computing the Dimensional Weight of a Box (Revisited)

- 이제 사용자가 박스의 크기를 입력할 수 있도록 프로그램을 개선시킬 수 있다.
- 각 **scanf**함수가 **printf**함수가 호출된 직후에 호출되는 것에 주목하자. 이 방법으로 사용자는 어떤 값을 언제 입력할지 알 수 있다.
    
```c
// Program name: dweight2.c
// Computes the dimensional weight of a
// box from input provided by the user

#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

   return 0;
}
```
**OUTPUT**
```
Enter height of box: 8
Enter length of box: 12
Enter width of box: 10
Volume (cubic inches): 960
Dimensional weight (pounds): 6
```
- 사용자에게 입력하라고 하는 메시지는 개행 문자로 끝내지 않는다. 왜냐하면 사용자가 같은 줄에 입력하길 바라기 때문이다.
- 사용자가 엔터키를 누르면, 커서는 자동적으로 다음줄로 넘어간다. 즉, 프로그램은 줄이 끝날 때 개행 문자를 넣을 필요 없다.
- **dweight2.c**는 사용자가 숫자가 아닌 입력을 하면 문제가 생긴다.

## 2.6 Defining Names for Constants

- **매크로 정의**(Macro Definition)을 사용하여 상수에 이름을 붙일 수 있다.
    ```c
    #define INCHES_PER_POUND 166
    ```
    #define은 전처리 지시어이다. 따라서 세미콜론이 붙지 않는다.
- 컴파일될 떄, 전처리기가 각 매크로를 각각의 값으로 대체한다. 예를들어 다음 구문은
    ```c
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    ```
    다음과 같이 된다.
    ```c
    weight = (volume + 166 - 1) / 166;
- 매크로가 연산자를 포함한다면, 표현식은 괄호로 쌓여야 한다.
    ```c
    #define RECIPROCAL_OF_PI (1.0f / 3.14159f)
    ```
- 매크로 이름에 대문자만 사용하는 것을 주목하자, 대부분의 C 프로그래머가 이런 관습을 따른다. 필수는 아니지만 프로그래머들이 수백년동안 이렇게 하고 있다.

### [PROGRAM] Converting from Fahrenheit to Celsius

- 화씨를 입력하면 섭씨로 변환해주는 프로그램을 만들어보자
- 출력은 다음과 같은 형식이다.
    ```
    Enter Fahrenheit temperature: 212
    Celsius equivalent: 100.0
    ```
    온도가 정수가 되지 않도록 한다.

```c
/// Program name: celsius.c
/// Converts a Fahrenheit temperature to Celsius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit. celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 04;
}
```
- 이 구문은
    ```c
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    ``` 
    컴파일러가 다음과 같이 받아들인다.
    ```c
    celsius = (fahrenheit - 32.0f) * (5.0f / 9.0f);
    ```

- **SCALE_FACTOR**을 (5.0f / 9.0f)로 정의하는 것은 중요하다. (5 / 9)로 정의하면 소수점 아래가 버려져 0이 되기 때문이다.
- %.1f를 사용하여 소수점 아래 한자리만 출력하게 하는 것을 주목하라.

## 2.7 Identifiers

- 프로그램을 작성할 떄, 변수, 함수, 매크로 등등의 이름을 골라야하는데, 이를 **식별자**(Identifier)라고 한다.
- C에서는 식별자에 문자, 숫자, 밑줄을 사용할 수 있다. (**C99**에서는 **universal character name**도 포함한다)
- 다음은 사용 가능한 식별자의 예시이다.
    ```
    times10  get_next_char  _done
    ```
    다음은 사용할 수 없는 식별자의 예시이다.
    ```
    10times  get-next-char
    ```
    10times는 문자나 밑줄이 아닌 숫자로 시작하고, get-next-char은 밑줄이 아닌 빼기 기호를 포함한다.
- C는 대소문자를 구별한다.
- 감각있는 프로그래머들은 식별자들이 관련있더라도 다르게 보이도록 만든다.
- 대소문자가 중요하므로, 많은 프로그래머들이 매크로가 아닌 식별자들은 **소문자와 밑줄**을 이용한다.
    ```
    symbol_table  current_page  name_and_address
    ```
- 다른 프로그래머들은 밑줄을 사용하지 않고 각 단어의 시작에 대문자를 사용한다. (첫번째 문자도 대문자로 쓸 때도 있다.)
    ```
    symbolTable  currentPage  nameAndAddress
    ```
- 첫번째 방법이 전통적으로 흔한 스타일이었지만, 두번째 방법이 Java와 C#이 널리 사용되면서 유명해졌다.
- 프로그램에 식별자가 나타날 때 마다 동일한 방식으로 식별자를 대문자로 사용해야한다.
- C는 식별자의 길이에 제한을 두지 않았으므로, 이를 길게 쓰는 것을 꺼리지 말아라.
- **current_page**는 **cp**같은 이름보다 더욱 이해하기 쉽다.

### Keywords

다음의 **키워드**(Keyword)는 C 컴파일러에게 매우 중요하다. 따라서 식별자로 쓰일 수 없다.

```
auto, enum, restrict, unsigned, break, extern,
return, void, case, float, short, volatile,
char, for, signed, while, const, goto,
sizeof, _Bool, contiune, if, static, _Complex,
default, inline, struct, _Imaginary, do, int,
switch, double, long, typedef, else, register, union
```
restrict, _Bool, _Complex, inline, _Imaginary의 다섯개는 **C99**에만있다.

- C가 대소문자를 구별하므로, 이 키워드들은 프로그램 내에서 소문자로 나타난다. 표준 라이브러리의 함수들도 소문자 이름을 가지고 있다.
- 프로그램을 대문자로 작성하지 말도록하자. 컴파일러가 키워드를 인식하지 못하고 라이브러리 함수를 호출하지 못하게 할 뿐이다..

**[주의] 다른 식별자 제한을 주의하자. 몇몇 컴파일러는 추가적인 키워드를 가지고 있다. 표준 라이브러리에 속하는 식별자또한 제환된다. 우연히 이것 중 하난를 이용하면 컴파일과 링크하는 과정에서 에러가 발생할 수 있다. 밑줄로 시작하는 식별자 또한 제한된다.**

## 2.8 Layout of a C Program