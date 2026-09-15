# Computer Graphics Practicals (C++ & OpenGL)

A collection of computer graphics algorithms, laboratory practicals, and experiments implemented in C++ using OpenGL and GLUT.

---

## Compilation

To compile the C++ files run the following command in your terminal:

```bash
g++ fileName.cpp -o fileName -I/opt/homebrew/include -L/opt/homebrew/lib -lGLEW -framework OpenGL -framework GLUT
```

To run the compiled program:

```bash
./fileName
```

## Color Palette Reference

You can find a list of pre-tested RGB values for your shapes in the [colors.txt](./colors.txt) file.

### Shapes

| Sr. No. | Program Name      |               Source File               |
| :-----: | :---------------- | :-------------------------------------: |
|   01    | **Triangle**      |   [View Code](./shapes/triangle.cpp)    |
|   02    | **Rectangle**     |  [View Code](./shapes/reactangle.cpp)   |
|   03    | **Pentagon**      |   [View Code](./shapes/pentagon.cpp)    |
|   04    | **Square**        |    [View Code](./shapes/square.cpp)     |
|   05    | **Parallelogram** | [View Code](./shapes/parallelogram.cpp) |

---

### Scenes

| Sr. No. | Program Name |          Source File           |
| :-----: | :----------- | :----------------------------: |
|   01    | **Home**     | [View Code](./scenes/home.cpp) |

---

### Operators

| Sr. No. | Program Name |              Source File              |
| :-----: | :----------- | :-----------------------------------: |
|   01    | **Plus**     |   [View Code](./operators/plus.cpp)   |
|   02    | **Minus**    |  [View Code](./operators/minus.cpp)   |
|   03    | **Corss**    |  [View Code](./operators/cross.cpp)   |
|   04    | **EqualTo**  | [View Code](./operators/equalTo.cpp)  |
|   05    | **Division** | [View Code](./operators/division.cpp) |
