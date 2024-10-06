import re
def isPangram(inSentence):
    alphaList='abcdefghijklmnopqrstuvwxyz'
    alphaCount=0
    if len(inSentence)<26:
        return False
    else:
        inSentence=re.sub('[^a-zA-Z]','',inSentence)
        inSentence=inSentence.lower()
        for i in range(len(alphaList)):
            if alphaList[i] in inSentence:
                alphaCount=alphaCount+1
        if alphaCount==26:
            return True
        else:
            return False
inSentence=input('Enter a String:')
if (isPangram(inSentence)):
    print("Input Sentence is a Pangram")
else:
    print("Input Sentence is not a Pangram")
