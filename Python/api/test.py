import urllib.request as R
import urllib.parse as P
import xml.etree.ElementTree as ET
'''
client_id = "94nc9nIHvgGRu0MQfiRg"
client_secret = "oI_nqrSjix"
encText = P.quote("C언어")
url = "https://openapi.naver.com/v1/search/book.xml?query=" + encText

request = R.Request(url)
request.add_header("X-Naver-Client-Id",client_id)
request.add_header("X-Naver-Client-Secret",client_secret)

res = R.urlopen(request)
rescode = res.getcode()
print(rescode)
print()

body = res.read().decode('utf-8')
'''

body = '''<?xml version="1.0" encoding="UTF-8"?>
<rss version="2.0">
    <channel>
        <title>Naver Open API - book ::'C언'</title>
        <link>https://search.naver.com</link>
        <description>Naver Search Result</description>
        <lastBuildDate>Sat, 27 Mar 2021 23:49:14 +0900</lastBuildDate>
        <total>80</total>
        <start>1</start>
        <display>10</display>
        <item>
            <title>오디세이 파이널 &lt;b&gt;언&lt;/b&gt;/외/수(가형) 모의고사 1회분(&lt;b&gt;C&lt;/b&gt;)</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=1282910</link>
            <image></image>
            <author>에듀토피아중앙교육(주)</author>
            <price>9000</price>
            <discount></discount>
            <publisher>PENGUIN</publisher>
            <pubdate>20041026</pubdate>
            <isbn>0000000426 9780000000422</isbn>
            <description></description>
        </item>
        <item>
            <title>오디세이 파이널 &lt;b&gt;언&lt;/b&gt;/외/수(나형) 모의고사 1회분(&lt;b&gt;C&lt;/b&gt;)</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=1282913</link>
            <image></image>
            <author>에듀토피아중앙교육(주)</author>
            <price>9000</price>
            <discount></discount>
            <publisher>BJU</publisher>
            <pubdate>20041026</pubdate>
            <isbn>0000000477 9780000000477</isbn>
            <description></description>
        </item>
        <item>
            <title>기술과 기법 진로상담</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=1536997</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/015/369/01536997.jpg?type=m1&amp;udate=20161223</image>
            <author>NORMAN &lt;b&gt;C&lt;/b&gt;.GYSBERS|EARL J.MOORE</author>
            <price>15000</price>
            <discount>13500</discount>
            <publisher>한국학술정보</publisher>
            <pubdate>20050120</pubdate>
            <isbn>8953417872 9788953417878</isbn>
            <description>진로상담의 영역에서 기술과 기법을 확대하고 확장하도록 상담자에게 도움을 주는 책. 상담자들이 진로상담을 실시하는 동안에 수집된 정보와 관찰된 행동을 이해하고 해석할 수 있도록 구성하였다. 결혼과 가족상담, 인지심리, 학습형태 이론, 대뇌반구의 기능과 같은 다양한 자원으로부터 주요한 개념과 기법을... </description>
        </item>
        <item>
            <title>알기 쉬운 &lt;b&gt;C&lt;/b&gt; 프로그래밍</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=13783673</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/137/836/13783673.jpg?type=m1&amp;udate=20200416</image>
            <author>조정호|전현민|김응주|장문수|김영진</author>
            <price>25000</price>
            <discount>24250</discount>
            <publisher>광문각</publisher>
            <pubdate>20180625</pubdate>
            <isbn>8970939032 9788970939032</isbn>
            <description>&lt;b&gt;C 언&lt;/b&gt;어를 쉽게 배울 수 있는 최고의 방법을 제시!
&lt;b&gt;C 언&lt;/b&gt;어는 실무에서 가장 많이 사용되는 언어 중의 하나이다. 컴퓨터의 하드웨어에 기초하여 개발된 &lt;b&gt;C 언&lt;/b&gt;어는 간결하고 효율적인 표현으로 강력한 기능을 발휘한다. &lt;b&gt;C 언&lt;/b&gt;어를 쉽게 배울 수 있는 방법은 ‘간단한 C 프로그램’을 몇 개 선택하고, 이들을 완전히... </description>
        </item>
        <item>
            <title>VISUAL &lt;b&gt;C&lt;/b&gt;++로 구현한 &lt;b&gt;C&lt;/b&gt; 프로그래밍</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=2096143</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/020/961/02096143.jpg?type=m1&amp;udate=20150724</image>
            <author>김정호|김충혁|이부형</author>
            <price>25000</price>
            <discount>22500</discount>
            <publisher>웅보출판사</publisher>
            <pubdate>20060116</pubdate>
            <isbn>8984621935 9788984621930</isbn>
            <description>C 프로그래밍 입문서. 이 책은 &lt;b&gt;C언&lt;/b&gt;어를 배우는데 필요한 윈도우 비주얼 환경에서 &lt;b&gt;C언&lt;/b&gt;어의 개요, 기초, 기본 자료형, 기억 클래스, 연산자, 제어 구조 등 C가 어떻게 이용되고 활용되는지 알려주고 있다. 또한 많은 예제를 통해 &lt;b&gt;C언&lt;/b&gt;어를 익히는 데 어려움이 없도록 했고, 각 장 마지막 부분에 연습문제를 실어... </description>
        </item>
        <item>
            <title>C로 배우는 컴퓨터프로그래밍</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=86591</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/000/865/00086591.jpg?type=m1&amp;udate=20100111</image>
            <author>이규철</author>
            <price>27000</price>
            <discount></discount>
            <publisher>에드텍</publisher>
            <pubdate>19990910</pubdate>
            <isbn>8986891549 9788986891546</isbn>
            <description>다양한 실습을 통하여 문제를 해결하고 통용되고 있는소프트웨어 공학 방법을 적용하여 프로그램을 재사용 이 가능한 모듈들로 설계하는 방법을 설명한 책. &lt;b&gt;C언&lt;/b&gt; 어의 개요, 함수를 사용한 하향식 설계, 모듈화 프로 그래밍 등 15개 장으로 엮었다.</description>
        </item>
        <item>
            <title>&lt;b&gt;C언&lt;/b&gt;어입문 (예제중심의)</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=1532763</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/015/327/01532763.jpg?type=m1&amp;udate=20081009</image>
            <author>이종섭</author>
            <price>13000</price>
            <discount></discount>
            <publisher>경문사</publisher>
            <pubdate>20050225</pubdate>
            <isbn>8972827959 9788972827955</isbn>
            <description>예제 중심으로 이루어진 &lt;b&gt;C 언&lt;/b&gt;어 입문서. &lt;b&gt;C 언&lt;/b&gt;의 소개, 프로그래밍 입문, 연산자, 제어문, 함수, 파일의 입출력 등의 내용으로 구성되었다.
</description>
        </item>
        <item>
            <title>37.2°&lt;b&gt;C&lt;/b&gt;</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=6861101</link>
            <image>https://bookthumb-phinf.pstatic.net/cover/068/611/06861101.jpg?type=m1&amp;udate=20180104</image>
            <author>서연</author>
            <price>3000</price>
            <discount></discount>
            <publisher>신영미디어</publisher>
            <pubdate>20120313</pubdate>
            <isbn>9050149448 4809050149440</isbn>
            <description>그래서 사랑은 언제나 37.2°&lt;b&gt;C&lt;/b&gt;.
교생실습을 나갔던 첫날, 희연은 부인하고 싶었다.
맨 뒤에 앉은 건방진 눈빛의 그에게 단숨에 빠져 버린 것이 아니라고.... 옥죄듯 그녀의 허리를 꼭 끌어안은 승하는 천천히 &lt;b&gt;언&lt;/b&gt; 귓불을 향해 천천히 입술을 내렸다.
“지루한 여행은 끝났어. 당신에게도, 내게도.”
턱 끝을 어루만지는... </description>
        </item>
        <item>
            <title>알기쉬운 TURBO &lt;b&gt;C&lt;/b&gt;</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=3580241</link>
            <image></image>
            <author>진영수</author>
            <price>12000</price>
            <discount></discount>
            <publisher>글나무</publisher>
            <pubdate>19951201</pubdate>
            <isbn>7401000725 2007401000729</isbn>
            <description></description>
        </item>
        <item>
            <title>&lt;b&gt;C&lt;/b&gt; &amp; &lt;b&gt;C&lt;/b&gt;++ 활용 팁 1001</title>
            <link>http://book.naver.com/bookdb/book_detail.php?bid=1341215</link>
            <image></image>
            <author>KRES JAMSA</author>
            <price>20000</price>
            <discount></discount>
            <publisher>가남사</publisher>
            <pubdate>19940201</pubdate>
            <isbn>8973540904 9788973540907</isbn>
            <description>&lt;b&gt;C언&lt;/b&gt;어와 C++에서의 함수사용, 프로그래밍 테크닉,    &lt;b&gt;C&lt;/b&gt;++&lt;b&gt;언&lt;/b&gt;어의 클래스, 연산자, 중복정의 등 객체지향 언 어를 해부, 전문 프로그래밍 기법을 소개하였다.     디스켓포함.</description>
        </item>
    </channel>
</rss>'''

root = ET.fromstring(body)
print(root.tag)
for x in root[0].findall("item"):
    for y in x.find("title").itertext():
        print(y)

