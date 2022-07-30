set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_HOME_DIRECTORY}
    )
add_executable(comp_cost main.cpp)

target_compile_options(comp_cost PUBLIC -std=c++11 -g -Ofast)

target_link_libraries(comp_cost COMPCOST_lib)
