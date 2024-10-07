file = open('sampleb.txt')
content = file.readlines()
print("3rd line")
print(content[0:2])
print("first three lines")
print(content[0:3])
def LastNlines(fname, N):
 with open(fname) as file:
    for line in (file.readlines() [-N:]):
        print(line, end ='')
        if __name__ == '__main__':
            name = 'sampleb.txt'
            N = 3
            try:
                print("Last N lines are:")
                LastNlines(fname, N)
            except:
                print('File not found')