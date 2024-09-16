set(WARNING_CFLAGS -Wall -Wextra -Wfatal-errors -Wshadow -Wvla -Wfloat-conversion -Wfloat-equal -Walloc-zero)
set(WERROR_CFLAGS -Werror -Wno-unused -Wno-sign-conversion -Wno-unused-parameter -Wno-unknown-warning-option)
set(MY_CFLAGS -ggdb ${WARNING_CFLAGS} ${SANITIZER_CFLAGS} ${WERROR_CFLAGS})

foreach(PART parta partb partc)
    add_library(${PART} OBJECT ${PART}.c ${PART}.h)
    target_include_directories(${PART} PUBLIC .)
    target_compile_options(${PART} PRIVATE ${MY_CFLAGS})
    target_compile_features(${PART} PUBLIC c_std_17)
endforeach()

