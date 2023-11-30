cmake_minimum_required(VERSION 3.26)
project(lab01 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab01
        ll_cycle.h
        ll_cycle.c
        test_ll_cycle.c)
#add_executable(ll_cycle_h ll_cycle.h )
#add_executable(ll_cycle_c ll_cycle.c)
#add_executable(test_ll_cycle test_ll_cycle.c)

