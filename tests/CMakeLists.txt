foreach(X a b c)
    set(TARGET "test_${X}")
    add_executable(${TARGET} ${TARGET}.cpp)

    target_link_libraries(${TARGET} PRIVATE part${X} GTest::gtest_main)
    target_compile_options(${TARGET} PUBLIC -ggdb ${SANITIZER_CFLAGS})
    target_link_options(${TARGET} PUBLIC ${SANITIZER_CFLAGS})
    target_compile_features(${TARGET} PUBLIC cxx_std_17)

    string(TOUPPER ${X} XUP)
    gtest_discover_tests(${TARGET} PROPERTIES LABELS ${XUP})
endforeach()

