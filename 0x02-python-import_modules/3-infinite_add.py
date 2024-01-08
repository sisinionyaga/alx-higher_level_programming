#!/usr/bin/python3

if __name__ == "__main__":
    "Print the addition of all arguments."
    import sys

    total = 0
    for i in range(len(sys.argv) - 1):
        total += int(sys.argv[i + 1])
    print("{}".format(total)#!/usr/bin/python3

if __name__ == "__main__":
    """Print the addition of all arguments."""
    import sys

    # Convert command-line arguments to integers and sum them
    total = sum(map(int, sys.argv[1:]))

    # Print the result followed by a new line
    print(total)
)
