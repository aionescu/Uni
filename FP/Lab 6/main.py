from ui import *

def main() -> None:
  ui = Ui()

  while True:
    raw = input("rentals> ")
    cmd = raw.split(' ', 1)

    args = cmd[1] if len(cmd) > 1 else ""
    args = list(map(lambda s: s.strip(), args.split(',')))

    ui.handle(cmd[0], args)

if __name__ == "__main__":
  main()