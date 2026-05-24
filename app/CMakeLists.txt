add_executable(app main.cpp)
target_link_libraries(app a)

install(TARGETS app DESTINATION .)