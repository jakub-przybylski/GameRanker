# GameRanker 🎮

GameRanker is a C++ command-line application designed to manage and sort video game rankings. This project was developed as a final assignment for university.

## Authors
* **Jakub Przybylski**
* **Michał Matulaniec**

## Features
The program offers an interactive menu with the following capabilities:
1. **Display All Games:** View the full list of games loaded from the database.
2. **Sort by Rating:** Automatically sort games from highest to lowest score.
3. **Sort by Genre:** Organize games based on their category.
4. **TOP-X Ranking:** Generate a custom ranking of the top best-rated games.
5. **Data Loading:** Automatically loads game data from a `lista.txt` file.

## Technical Details
* **Language:** C++
* **Platform:** Windows (utilizes `windows.h` for system sleep functions)
* **Modular Structure:** The project is split into multiple headers and source files for better organization:
  - `zaladuj.h` (Data loading)
  - `sortowanieWedlugOceny.h` / `sortowanieWedlugGatunku.h` (Sorting logic)
  - `topX.h` (Top-tier filtering)
  - `globals.h` (Global variables management)

## How to Run
1. Ensure you have the `lista.txt` file in the same directory as the executable.
2. Open `GameRanker.cbp` in **Code::Blocks**.
3. Press `F9` to build and run the project.

---
*© 2026 Jakub Przybylski & Michał Matulaniec. All rights reserved.*
