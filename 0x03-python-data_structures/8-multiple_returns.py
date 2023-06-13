#!/usr/bin/python3
def mutliple_returns(sentence):
    """returns the length of sentence and its first character as a tuple"""
    if sentence == "":
        return (0, None)
    return (len(sentence), sentence[0])
