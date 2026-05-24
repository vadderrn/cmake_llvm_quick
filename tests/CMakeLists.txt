add_executable(test_lib lib/test_a.cpp)
target_link_libraries(test_lib GTest::gtest_main a)
add_test(NAME test_lib COMMAND test_lib)

add_executable(test_app app/test_app.cpp)
target_link_libraries(test_app GTest::gtest_main app_lib)
add_test(NAME test_app COMMAND test_app)
