from socket import *

clientSock = socket(AF_INET, SOCK_STREAM)
clientSock.connect(('dayone.kro.kr', 25570))

print("Connected")
clientSock.send('I am a client'.encode('utf-8'))

print("Sent message")

data = clientSock.recv(1024)
print(data.decode('utf-8'))