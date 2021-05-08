# File name : json_parse.py
# Author : Lee Junhee
# Last Update : 2020-04-13
# Purpose : Parse JSON string and display it

import json
from book_search import *

search_text = "9791132100997"
result_dict = json.loads(search_book(search_text))

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

print(result_text.format(search_text, result_dict['lastBuildDate'], result_dict['display']))
for x in range(len(result_dict['items'])):
    i = result_dict['items'][x]
    print("")
    print(item_text.format(x+1, i['title'], i['author'], i['price'], i['publisher'], i['isbn'], i['pubdate']))