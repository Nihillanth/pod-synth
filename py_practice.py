def is_anagram(s1, s2):
    s1 = s1.replace(' ', '').lower()
    s2 = s2.replace(' ', '').lower()
    if sorted(s1) == sorted(s2):
        return True
    else:
        return False
# s1, s2 = input(), input()
# print(is_anagram(s1, s2))


def is_poli(s1):
    if s1.lower() == s1[::-1].lower():
        return True
    return False
s1 = input()
# print(is_poli(s1))


### last digit
nl = [c for c in s if c.isdigit()]
# s = input()
# print(nl)

# Шифр Цезаря
import string
def cipher(a_string, key):
    uppercase = string.acii_uppercase
    lowercase = string.acii_lowercase
    encrypt = ''
    for c in a_string:
        if c in uppercase:
            new = (uppercase.index(c) + key) % 26
            encrypt += uppercase[new]
        elif c in lowercase:
            new = (lowercase.index(c) + key) % 26
            encrypt += lowercase[new]
        else:
            encrypt += c
    return encrypt

a_string = input
print(cipher())