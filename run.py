import os

target = os.sys.argv[1]

os.system("g++ -o %s %s.cpp" % (target, target))

os.system("./%s > output" % target)

os.system("rm %s" % target)