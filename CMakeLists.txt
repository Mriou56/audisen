cmake_minimum_required(VERSION 3.26)
project(audisen C)

set(CMAKE_C_STANDARD 11)

add_executable(audisen main.c
        ams.c
        ams.h
        amp.c
        amp.h
        frame.c
        frame.h
        usb.c
        usb.h
        audisen_sim.c
        define.h
        audisen_usb.c)
