cmake_minimum_required(VERSION 3.23)
project(signal-printer-c C)

set(CMAKE_C_STANDARD 23)
set(TARGET signal-printer-c)

FILE(GLOB Sources *.h *.c)
add_executable(${TARGET} ${Sources})
