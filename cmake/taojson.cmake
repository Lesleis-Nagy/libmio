macro (setup_taojson)

    # Set variables
    set(LIBMIO_TAOJSON          "taojson-v1.0.0-beta.13")
    set(LIBMIO_TAOJSON_SRC_DIR "${LIBMIO_THIRD_PARTY_DIR}/${LIBMIO_TAOJSON}")

    # Find headers
    find_path(TAOJSON_INCLUDES
              NAMES "tao/json.hpp"
              PATHS "${LIBMIO_TAOJSON_SRC_DIR}/include"
              NO_DEFAULT_PATH
              NO_PACKAGE_ROOT_PATH
              NO_CMAKE_PATH
              NO_CMAKE_ENVIRONMENT_PATH
              NO_SYSTEM_ENVIRONMENT_PATH
              NO_CMAKE_SYSTEM_PATH
              NO_CMAKE_INSTALL_PREFIX)

    include(FindPackageHandleStandardArgs)

    find_package_handle_standard_args(TAOJSON DEFAULT_MSG
            TAOJSON_INCLUDES)
    mark_as_advanced(TAOJSON_INCLUDES)

endmacro()
