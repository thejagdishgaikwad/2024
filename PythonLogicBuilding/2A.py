def vowelCheck(char):
    if(char=='a' or char=='A' or char=='e'
       or char=='E' or char=='i' or char=='I'
       or char=='o' or char=='O' or char=='u'
       or char=='U'):
        return 'True'
    else:
        return 'False'

vchar=input('Enter a character:')
if(vowelCheck(vchar)=='True'):
    print(vchar,'is vowel')
else:
    print(vchar,'is not vowel')
