#!/bin/python3

import socket

HOST = ""
PORT = 8000

# create a socket object
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server_socket:
    # bind the socket to the host and port
    server_socket.bind((HOST, PORT))
    print(f"Serving at port {PORT}")

    # listen for incoming connections
    server_socket.listen(1)

    while True:
        # Accept new connections
        client_socket, client_address = server_socket.accept()
        with client_socket:
            print(f"connected by {client_address}")

            # Recieve the request data
            request_data = client_socket.recv(1024).decode("utf-8")
            print("Recieved request: ")
            print(request_data)

            # prepare a simple HTTP response
            response = (
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: text/html\r\n"
                "Content-Length: 13\r\n"
                "\r\n"
                "Hello, world!"
            )

            # send the response back to the client
            client_socket.sendall(response.encode("utf-8"))

            # close the client connection
            client_socket.close()
