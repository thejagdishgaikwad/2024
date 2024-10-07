def read_file(fname):
 f = open(fname, "a")
 f.write("\nNow the file has more content!")
 f.close()
 f = open(fname, "r")
 print(f.read())
read_file('append.txt')