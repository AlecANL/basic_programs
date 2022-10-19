cmake_minimum_required(VERSION 3.23)
project(basic_programs)

set(CMAKE_CXX_STANDARD 14)

add_executable(basic_programs main.cpp calculator.cpp menu.cpp menuHandler.cpp even_number.cpp measurement-converter.cpp palindrome-check.cpp utils.cpp rome-number-converter.cpp number-to-binary-converter.cpp multiply-table-generator.cpp multiply-table-list.cpp calc-hypotenuse.cpp decimal-to-hexadecimal-converter.cpp make-figures.cpp graphic-multiply.cpp letter-to-number.cpp move-dot.cpp automatic-cash-dispense.cpp)
