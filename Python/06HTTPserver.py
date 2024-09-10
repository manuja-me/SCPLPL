#!/bin/python3

from http.server import SimpleHTTPRequestHandler
from socketserver import TCPServer

PORT = 8000

Handler = SimpleHTTPRequestHandler

with TCPServer(("", PORT), Handler) as httpd:
    print(f"Serving at a {PORT}")
    httpd.serve_forever()
