# 📑 Changelog
All notable changes to this project will be documented in this file.  
The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/)  
and this project adheres to [Semantic Versioning](https://semver.org/).

---

## [2.0.0] - 2025-09-19
### 🚀 Major Changes
- Full refactor of the **Tic Tac Toe** game.
- Replaced raw array with `vector<char>` for better safety and flexibility.
- Added reusable functions:
  - `initializeBoard`
  - `makeMove`
  - `checkWinner`
  - `printBoard`
- Simplified turn logic and winner verification.
- Reduced repetitive code using loops and constants.
- Added cross-platform **clear screen** support (Windows/Linux).

---

## [1.0.0] - 2025-09-18
### 🎉 Initial Release
- First stable version of the **Tic Tac Toe** game in C++.
- Board implemented with a character array.
- Basic two-player turn logic.
- Winner and draw detection.
- Console board visualization.
