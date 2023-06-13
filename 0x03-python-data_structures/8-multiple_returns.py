#!/usr/bin/python3
def mutliple_returns(sentence):
    """returns the length of sentence and its first character as a tuple"""
    res = (len(sentence), sentence[0] if sentence else "None")
    return (res)
