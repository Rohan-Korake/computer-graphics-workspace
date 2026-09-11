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

### Programs

| Sr. No. | Program Name      | Description                                        |               Source File               |
| :-----: | :---------------- | :------------------------------------------------- | :-------------------------------------: |
|    1    | **Triangle**      | Simple program to display neon Triangle            |   [View Code](./shapes/triangle.cpp)    |
|    2    | **Rectangle**     | Simple program to display Orange Rectangle         |  [View Code](./shapes/reactangle.cpp)   |
|    3    | **Pentagon**      | Simple program to display Lime Pentagon            |   [View Code](./shapes/pentagon.cpp)    |
|    4    | **Square**        | Simple program to display Hot Pink Square          |    [View Code](./shapes/square.cpp)     |
|    5    | **Parallelogram** | Simple program to display Hot Golden Parallelogram | [View Code](./shapes/parallelogram.cpp) |
