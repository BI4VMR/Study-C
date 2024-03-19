# 声明该工程可使用的最低CMake版本
cmake_minimum_required(VERSION 3.23)

# 工程名称
# 我们可以通过"CMAKE_PROJECT_NAME"变量访问该名称
project(Study-C)

# 设置变量的值
# 变量"CMAKE_C_STANDARD"表示C语言标准版本，此处将其设为"C99"。
set(CMAKE_C_STANDARD 99)

# ----- 基础知识 -----
add_subdirectory(
        "${PROJECT_SOURCE_DIR}/M01_Overview/C01_HelloWorld"
        "${PROJECT_SOURCE_DIR}/M01_Overview/C01_HelloWorld/cmake-build-debug")

add_subdirectory(
        "${PROJECT_SOURCE_DIR}/M02_Syntax/C07_Struct"
        "${PROJECT_SOURCE_DIR}/M02_Syntax/C07_Struct/cmake-build-debug")
