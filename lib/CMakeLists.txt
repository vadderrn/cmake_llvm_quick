add_library(a STATIC a.cpp)
target_include_directories(a PUBLIC include)

install(TARGETS a DESTINATION lib)
install(DIRECTORY include DESTINATION .)