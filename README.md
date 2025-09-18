---
# 🎮 Tic Tac Toe (C++ Console Game)

A simple **two-player Tic Tac Toe game** built in C++ that runs in the console. Players take turns marking spaces in a 3×3 grid until one player wins or the game ends in a draw.

---

## ✨ Features

* Two-player mode (Player X and Player O).
* Players can enter their names for personalization.
* Dynamic game board updates after every move.
* Detects **winning conditions** (rows, columns, diagonals).
* Declares the winner or a draw.
* Console UI with a clear display of the board.

---

## 📂 Project Structure

```
tic-tac-toe/
│── main.cpp   # Game source code
│── README.md  # Project documentation
```

---

## ▶️ How to Run

1. Clone or download this repository.
2. Open the project folder in your terminal.
3. Compile the program with a C++ compiler:

   ```bash
   g++ main.cpp -o tictactoe
   ```
4. Run the executable:

   ```bash
   ./tictactoe   # Linux / Mac
   tictactoe.exe # Windows
   ```

---

## 🎯 How to Play

1. Enter the names of **Player 1** and **Player 2**.
2. The board is numbered from **1 to 9** as follows:

   ```
   1 | 2 | 3
   ---------
   4 | 5 | 6
   ---------
   7 | 8 | 9
   ```
3. Players take turns entering a number (1–9) to place their mark:

   * Player 1 → **X**
   * Player 2 → **O**
4. The game continues until:

   * One player gets **three in a row** (horizontally, vertically, or diagonally).
   * All spaces are filled (resulting in a **draw**).

---

## 🛠️ Example Gameplay

```
==========================
        Tic Tac Toe
==========================

Alice (X) ======== Bob (O)

     ||     ||     
  1  ||  2  ||  3
=====||=====||=====
     ||     ||     
  4  ||  5  ||  6
=====||=====||=====
     ||     ||     
  7  ||  8  ||  9

Alice Your Turn, Enter a Number: 5
```

---

## ⚠️ Notes

* The game uses `system("cls")` to clear the console screen (works on **Windows**).
* On **Linux/Mac**, replace `system("cls")` with `system("clear")`.
* Input validation is basic — if you enter an invalid number, you’ll be prompted to try again.

---

## 📌 Future Improvements

* Add single-player mode with a computer opponent (AI).
* Improve input validation to handle non-numeric entries.
* Make the board display cross-platform without relying on `system("cls")`.
* Add a scoring system (track wins across multiple rounds).

---

## 👨‍💻 Author

Made with ❤️ in C++ by **Riandry Connor**

---
