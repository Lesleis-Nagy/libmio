macro (setup_catch2)

    # Set variables
    set(LIBMIO_CATCH2         "catch2-v2.13.9")
    set(LIBMIO_CATCH2_SRC_DIR "${LIBMIO_THIRD_PARTY_DIR}/${LIBMIO_CATCH2}")

    # Find headers
    find_path(CATCH2_INCLUDES
              NAMES "catch/catch.hpp"
              PATHS "${LIBMIO_CATCH2_SRC_DIR}/include"
              NO_DEFAULT_PATH
              NO_PACKAGE_ROOT_PATH
              NO_CMAKE_PATH
              NO_CMAKE_ENVIRONMENT_PATH
              NO_SYSTEM_ENVIRONMENT_PATH
              NO_CMAKE_SYSTEM_PATH
              NO_CMAKE_INSTALL_PREFIX)

    include(FindPackageHandleStandardArgs)

    find_package_handle_standard_args(CATCH2 DEFAULT_MSG
            CATCH2_INCLUDES)
    mark_as_advanced(CATCH2_INCLUDES)

endmacro()
