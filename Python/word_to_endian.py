#!/bin/python3


def find_little_endian(word):
    little_endian = "".join(f"{ord(c):02X}" for c in reversed(word))
    return little_endian


def find_big_endian(word):
    big_endian = "".join(f"{ord(c):02X}" for c in word)
    return big_endian


# Simulate the process
challenge_word = input("word: ")
print(f"Word: {challenge_word}")

little_endian = find_little_endian(challenge_word)
big_endian = find_big_endian(challenge_word)

print(f"Little Endian: {little_endian}")
print(f"Big Endian: {big_endian}")
