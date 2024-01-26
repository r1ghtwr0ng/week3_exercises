# add Library Automata_Lib
add_library(Automata_lib automaton.cpp)
target_include_directories(Automata_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)

# add executable 
add_executable(Automata_bin main.cpp)
target_link_libraries(Automata_bin PUBLIC Automata_lib)