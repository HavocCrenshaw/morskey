import subprocess
import sys

win32 = False

def printUsage():
    print("Usage: OS TARGET\n"
          "\n"
          "\tOS options:\n"
          "\t-win32\tCompile for Windows\n"
          "\t-x11\tCompile for X11 Linux\n"
          "\n"
          "\tTARGET options:\n"
          "\tall\tMake all targets\n"
          "\tdebug\tMake debug\n"
          "\trelease\tMake release\n"
          "\tclean\tMake clean\n")

def invokeMake(build_win32: bool, target: str):
    if build_win32:
        build_type = "make_win32"
    else:
        build_type = "make_x11"

    subprocess.run(["make", "-f", f"{build_type}", f"{target}"])

if len(sys.argv) < 3:
    printUsage()
    sys.exit(1)

if sys.argv[1] == "-win32":
    win32 = True

elif sys.argv[1] == "-x11":
    # Indention needed, slightly inefficient, but better for UX.
    win32 = False 

else:
    printUsage()

validTarget = sys.argv[2] == "all" or sys.argv[2] == "debug" or \
              sys.argv[2] == "release" or sys.argv[2] == "clean"

if validTarget:
    invokeMake(win32, sys.argv[2])
else:
    printUsage()
