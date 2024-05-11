cmake_minimum_required(VERSION 3.28)
project(CPP)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)

add_executable(
        CPP
        #        main.cpp
#        week01/demos/hello.cpp
#        week01/demos/main0.cpp
#        week01/demos/main1.cpp
#        week01/demos/mul.h
#        week01/demos/mul.cpp
#        week01/demos/argument.cpp
#        week02/demos/overflow.cpp
#        week02/demos/char.cpp
#        week02/demos/intmax.cpp
#        week02/demos/init.cpp
#        week02/demos/float.cpp
#        week02/demos/precision.cpp
        week04/demos/array.cpp
        week04/demos/initchar.cpp
        week04/demos/stringop.cpp
        week04/demos/structpadding.cpp
        week01/demos/lab/ex1.cpp
        week01/demos/lab/ex2/add.cpp
        week01/demos/lab/ex2/main.cpp
        week02/demos/lab/test.cpp
        week05/demos/pointer.cpp
        week05/demos/pointer-struct.cpp
        week05/demos/pointer-array.cpp
        week05/demos/newdelete.cpp
        week06/demos/function.cpp
        week06/demos/param-pointer.cpp
        week06/demos/param-pointer.cpp
        week06/examples/param-pointer.cpp
        week07/demos/overload.cpp
        week07/demos/template.cpp
        week09/demos/firstclass.cpp
        week09/demos/multi-files/student.cpp
        week09/demos/multi-files/student.h
        week09/demos/multi-files/main.cpp
        week09/demos/constructor.cpp
        week09/demos/static.cpp
        week10/demos/cv_Mat.cpp
        week10/demos/example1/MyString.cpp
        week10/demos/example1/MyString.h
        projects/2022Fall/Project4/matrix.h
        projects/2022Fall/Project4/matrix.c
        projects/2022Fall/Project4/main.c
)

target_link_libraries(CPP ${OpenCV_LIBS})