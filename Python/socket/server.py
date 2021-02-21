from socket import *

serverSock = socket(AF_INET, SOCK_STREAM)
serverSock.bind(('',25570))
serverSock.listen(1)

connectionSock, addr = serverSock.accept()

print("Connected from", addr)

data = connectionSock.recv(1024)
print(data.decode('utf-8'))

connectionSock.send('I\'m Server'.encode('utf-8'))
print("Sent Message")