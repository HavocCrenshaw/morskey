import os

debug_dir      = "bin/Debug"
ndebug_dir     = "bin/Release"
debug_success  = False
ndebug_success = False

try:
    os.makedirs(debug_dir)
except FileExistsError:
    print("Debug directory already exists.")
except Exception as e:
    print(f"An unexpected exception occured creating the Debug directory.\n"
          f"{e}")
else:
    debug_success = True

try:
    os.makedirs(ndebug_dir)
except FileExistsError:
    print("Release directory already exists.")
except Exception as e:
    print(f"An unexpected exception occured creating the Release directory.\n"
          f"{e}")
else:
    ndebug_success = True

if debug_success and ndebug_success:
    print("Operation succeeded.")
