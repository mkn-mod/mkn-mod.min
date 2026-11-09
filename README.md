# min_mkn-mod

**Minimal dynamically loaded maiken module**

## Prerequisites
  [maiken](https://github.com/mkn/mkn)
  

## Usage

  The `test` profile loads the module on itself, printing from its constructor, compile phase and destructor.

  Windows cl:

    mkn clean build -dtOa "-EHsc -std:c++20"
    mkn clean build run -dtOp test -a "-EHsc -std:c++20"

  Linux/macOS:

    mkn clean build -dtOa "-std=c++20 -fPIC"
    mkn clean build run -dtOp test -a "-std=c++20 -fPIC"
