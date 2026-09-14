# C++ Fundamentals: Clash of Clans Attack Simulator

A foundational C++ program simulating village raid mechanics and battle star evaluations inspired by *Clash of Clans*.

## 🎯 How It Works
The program evaluates battle performance against three core village structures:
* **Town Hall** (1000 HP)
* **Army Camp** (400 HP)
* **Gold Mine** (600 HP)

**Total Base HP:** 2000 HP

### Star Rating Logic
* **1 Star [★☆☆]:** Awarded if the Town Hall is destroyed.
* **2 Stars [★★☆]:** Awarded if at least 50% (1000 HP) of the total village HP is destroyed.
* **3 Stars [★★★]:** Awarded if 100% (2000 HP) of the base is demolished.

## 🛠️ Concepts Used
* Standard Input/Output (`<iostream>`, `cout`)
* Integer variables and basic arithmetic
* Conditional branching (`if`, `else`)

## 🚀 How to Run
Compile and run using any C++ compiler:
```bash
g++ clash-star-evaluator.cpp -o clash-sim
./clash-sim# cpp-fundamentals
---
**Author:** Prathmesh Sakhare
