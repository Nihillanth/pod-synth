def say_hello():
    hello = input("Say Hello or huy >>> ")
    if hello.lower() == "hello":
        print("\n<><><><><><><><><><><><><><><>")
        return "Hi there, partner!!!\n<><><><><><><><><><><><><><><>\n"
    elif hello.lower() ==  "huy":
        print("\n<><><><><><><><><><><><><><><>")
        return "Sam takoy, pidrila\n<><><><><><><><><><><><><><><>\n"

print(say_hello())
