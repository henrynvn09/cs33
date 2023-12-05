import subprocess
import sys

# Check if the correct number of arguments are provided
if len(sys.argv) != 3:
    print("Usage: python script.py <p> <r>")
    sys.exit(1)

# Extract the arguments
p = sys.argv[1]
r = sys.argv[2]

# Construct the command
command = ["make", "&&", "./test", "-p", p, "-r", r, "-c", "2048"]

# Run the command
try:
    subprocess.check_call(command)
except subprocess.CalledProcessError as e:
    print("Error: Command returned non-zero exit status.")
