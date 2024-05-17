# For more information about build system see
# https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html
# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
add_compile_options(-Wno-format)
add_compile_options(-Wno-dangling-pointer)
add_compile_options(-Wno-implicit-function-declaration)
project(esp32_s3_lvgl9_lottie_test)
