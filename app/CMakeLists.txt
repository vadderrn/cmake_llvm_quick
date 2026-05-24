add_library(app_lib STATIC libapp.cpp)
target_include_directories(app_lib PUBLIC include)
target_link_libraries(app_lib PUBLIC a)

add_executable(app main.cpp)
target_link_libraries(app app_lib)

install(TARGETS app DESTINATION .)
