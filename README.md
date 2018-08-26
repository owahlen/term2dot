# term2dot

Calculator that computes a mathematical term given as input and exports the expression tree as Graphviz file.

## Features
* Basic arithmetic:
  * addition (+)
  * subtraction (-)
  * multiplication (*)
  * division (/)
  * raise to the power of (^)
* Brackets
* Standard functions (abs, sqrt)
* Exponential and logarithmic functions (exp, log)
* Trigonomic functions (cos, sin, tan)
* Hyperbolic functions (cosh, sinh, tanh)


## Installation Requirements
* bison
* flex
* C++ Compiler (e.g. g++)
* make utility (e.g. gmake)
* graphviz

## Installation
The `calc` application is built in the source code directory with the command:
```
$ make
```

## Usage
When sending a mathematical term to this application via `stdin` the Graphviz file `term.dot` is created.
Example:
```
$ echo "3-5*2" | ./calc
```
The resulting graph can be viewed for example with the `dotty` command from the Graphviz package:
```
$ dotty term.dot
```
