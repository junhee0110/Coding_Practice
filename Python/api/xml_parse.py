# File name : xml_parse.py
# Author : Lee Junhee
# Last Update : 2020-04-13
# Purpose : Parse XML string and display it

import xml.etree.ElementTree as ET
from book_search import *

search_text = "9791132100997"
result = ET.fromstring(search_book(search_text, 'xml'))[0]

result_text = '''검색어 : {}
검색 시간  : {}
검색 결과 개수 : {}'''

item_text ='''검색 번호 : {}
책 제목 : {}
저자 : {}
정가 : {}
출판사 : {}
ISBN : {}
출간일 : {}'''

print(result_text.format(search_text, result.find("lastBuildDate").text, result.find("display").text))
item_list = result.findall('item')

for x in range(len(item_list)):
    i = item_list[x]
    print("")
    print(item_text.format(x+1, i.find("title").text, i.find("author").text, i.find("price").text, i.find("publisher").text, i.find("isbn").text, i.find("pubdate").text,))
