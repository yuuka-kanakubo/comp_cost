set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_HOME_DIRECTORY}
    )
add_executable(comp_cost main.cpp)
target_link_libraries(comp_cost COMPCOST)
