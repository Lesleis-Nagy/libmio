add_executable(tec2hdf
        tec2hdf.cpp)
target_include_directories(tec2hdf
    PUBLIC ${LIBMIO_INCLUDE_DIR}
           ${LIBMIO_GRAMMAR_INCLUDE_DIR}
           ${ANTLR_INCLUDE_DIR})
target_link_libraries(tec2hdf
    merrilltecplot)

add_subdirectory(grammar)
