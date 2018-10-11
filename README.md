[![Build Status](https://travis-ci.com/Mizux/plop.svg?branch=master)](https://travis-ci.com/Mizux/plop)
# Plop
Test C++/CMake IDE integration with INTERFACE

# Build
```shell
$ cmake -H. -Bbuild
$ cmake --build build
```

# QtCreator
`libA` use only `PRIVATE` sources while `libB` use `PUBLIC` for headers.

![qtcreator integration](qtcreator.png)

We can see for `App`, `libB` headers are listed.
