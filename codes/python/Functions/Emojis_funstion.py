# In this code we define a function for emojis
def emoji_converter(message):
    words = message.split("   ")
    emojis = {
        ":)": "😊",
        ":(": "😒"
    }
    output = ""
    for word in words:
        output += emojis.get(word,word) + "\t"
    return output


message = input(">")
result = emoji_converter(message)
print( result )