# Create the executable.
add_executable(toy_args_01
        main.cpp)
target_include_directories(toy_args_01
        PRIVATE ${ARGS_INCLUDES})
