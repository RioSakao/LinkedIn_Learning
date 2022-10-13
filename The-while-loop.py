
secret = 'swordfish'
pw = ''
auth = False
count = 0
max_attempt = 5

while pw != secret:
    count += 1
    if count > max_attempt: break
    pw = input(f"{count}: What's the secret word? ")
else: #excuted only if 'break' doesn't get called
    auth = True

print("Authorized" if auth else "Calling the FBI ... ")