cmake_minimum_required(VERSION 3.26.1)

project(testc)

add_executable(server server.c)
add_executable(client client.c)

add_executable(main main.c)
add_executable(main sort.c sort_recursive.c main.c)

add_executable(single single.c)
add_executable(main main.c)
