# File name : book_search.py
# Author : Lee Junhee
# Last Update : 2020-04-13
# Purpose : Book Search using Naver Search Open API

from urllib import parse, request

client_id = "94nc9nIHvgGRu0MQfiRg"
client_secret = "oI_nqrSjix"

def search_book(search_text, output = "json"):
    
    if output != "json" and output != "xml":
        raise Exception("올바른 출력 형식이 아닙니다.")    

    query_string = parse.quote(search_text)
    url = "https://openapi.naver.com/v1/search/book." + output + "?query=" + query_string

    res = request.urlopen(request.Request(url = url, 
        headers = {
            "X-Naver-Client-Id" : client_id,
            "X-Naver-Client-Secret" : client_secret}))

    if res.getcode() == 200:
        return res.read().decode("utf-8")
    else:
        return res.getcode()