# 🚢 Battleship

![Language](https://img.shields.io/badge/Language-C++-blue?style=for-the-badge)
![Type](https://img.shields.io/badge/Type-Terminal%20Game-yellowgreen?style=for-the-badge)

## 📚 Project Summary

**Battleship** is a small single-player terminal game written in C++. Four ships are hidden at random positions on a 4×4 grid, and the player tries to find all of them in as few turns as possible.

---

## 🧠 What I Learned in Battleship

### 🔹 Game Logic
* Representing the board with a **2D array** (`int ships[4][4]`)
* Placing exactly four ships at **random positions** using `rand()` and `srand(time(0))`
* Tracking hits and the number of turns with a simple game loop

### 🔹 Terminal Interaction
* Reading row and column input with `cin`
* Clearing the screen between turns with `system("clear")` (and `cls` on Windows, via a small `#ifdef _WIN32` macro)

---

## 📁 Project Structure

```bash
battleship/
├── battleship.cpp
└── README.md
```

---

## ⚙️ How to Play

1. Four ships are hidden on the grid.
2. Enter a **row** and a **column** between `0` and `3`, separated by a space.
3. The game tells you whether you hit or missed.
4. Sink all four ships to win. The game shows how many turns it took.

```bash
git clone https://github.com/exhilarin/battleship.git
cd battleship

g++ battleship.cpp -o battleship
./battleship
```

---

## 🚀 Key Takeaways

A small project that shows how far you can get with just arrays, a loop and some randomness.

---

> _“Every big game starts as a small game loop.”_
