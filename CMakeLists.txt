cmake_minimum_required(VERSION 3.14)
project(CS_APP C)

set(CMAKE_C_STANDARD 99)
add_subdirectory(hex2dd)
add_subdirectory(dd2hex)
add_subdirectory(hostinfo)
add_subdirectory(socket)
add_subdirectory(echo)


add_subdirectory(10.1)