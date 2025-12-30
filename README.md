# TrigoAnalyzer

A simple and efficient **C++** program that analyzes triangles. By entering the lengths of three sides, the program identifies the type of triangle and calculates all three interior angles.

## 🚀 Features
* **Triangle Classification**: Tells you if a triangle is **Equilateral**, **Isosceles**, or **Scalene**.
* **Angle Calculation**: Uses the **Law of Cosines** to find precise angles.
* **User Friendly**: Simple command-line interface with an option to restart calculations.

## 📐 How it Works
The program uses the following mathematical formula to find the angles:


[Image of Law of Cosines formula for triangle angles]


The result is then converted from radians to degrees using the formula:
**Degrees = Radians * (180 / PI)**

## 💻 How to Run
1.  Ensure you have a C++ compiler installed (like G++).
2.  Download the `main.cpp` file.
3.  Open your terminal or command prompt.
4.  Compile the code: 
    ```bash
    g++ main.cpp -o TrigoAnalyzer
    ```
5.  Run the program:
    ```bash
    ./TrigoAnalyzer
    ```

## 🛠️ Technologies Used
* **Language**: C++
* **Library**: `<cmath>` for trigonometric functions.

---
*Created as a beginner-friendly geometry project.*
