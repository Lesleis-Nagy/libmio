add_executable(test_TecplotFileData test_TecplotFileData.cpp)
target_include_directories(test_TecplotFileData
        PUBLIC ${LIBMIO_INCLUDES}
               ${ANTLR4_INCLUDES}
               ${CATCH2_INCLUDES}
               ${ANTLR4_GEN_INCLUDES})
target_link_libraries(test_TecplotFileData mio_tecplot)


######################################################################################################################
# Build tests for the mio_utilities library.                                                                         #
######################################################################################################################

add_executable(test_utilities test_utilities.cpp)
target_include_directories(test_utilities
        PUBLIC ${LIBMIO_INCLUDES}
        ${CATCH2_INCLUDES})
target_link_libraries(test_utilities mio_utilities)
