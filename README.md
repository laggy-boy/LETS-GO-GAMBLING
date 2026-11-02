# Console Slot Machine

A beginner C++ console game where you place a bet and roll three numbers. Match all three numbers to win; otherwise, you lose your bet. The game tracks your balance, retries, wins, and losses.

## Requirements

- C++ compiler such as MinGW-w64 (g++)
- Windows, because this program uses `windows.h`, `Sleep()`, and `system("cls")`

## Build and run

Save the code as `main.cpp`, then compile and run it from Command Prompt or PowerShell:

```bat
g++ main.cpp -o slot-machine.exe
slot-machine.exe
```

## How to play

1. Enter your name (one word).
2. Enter your bet.
3. The game displays three random numbers from `1` to `3`.
4. If all three match, you win and your balance is updated. If they do not match, your bet is deducted.
5. The game repeats while your balance is at least zero.

## Scoring and balance

- **Three matching numbers:** increments the win counter and changes the balance using `money = money * 2 + bet * 2`.
- **No match:** increments the loss counter and subtracts the bet from the balance.
- Each play increments the retry counter.

## Important behavior in the current code

- The game loop continues while `money >= 0`. If your balance reaches exactly zero, the game continues; it stops only after the balance becomes negative.
- `gameover()` asks whether to continue only when the balance is negative. However, the `if (chose = 'y')` and `else if (chose = 'n')` statements assign a character instead of comparing it. This makes the first condition true every time, so entering `n` still starts the game again. Use `==` for comparisons and handle other inputs.
- The bet is not checked. Entering a negative bet or a bet larger than your balance can lead to unexpected results.
- The win formula multiplies the entire current balance and adds twice the bet. If you intended to award winnings differently, adjust that formula.
- `retry`, `win`, and `loss` are global integers initialized to zero by the program.

## Libraries used

- `<iostream>` for console input and output
- `<string>` for the player's name
- `<ctime>` and `<cstdlib>` for random number generation
- `<windows.h>` for the Windows `Sleep()` function
