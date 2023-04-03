macro (setup_rapidxml)

    # Set variables
    set(LIBMIO_RAPIDXML         "rapidxml-v1.13")
    set(LIBMIO_RAPIDXML_SRC_DIR "${LIBMIO_THIRD_PARTY_DIR}/${LIBMIO_RAPIDXML}")

    # Find headers
    find_path(RAPIDXML_INCLUDES
              NAMES "rapidxml.hpp"
              PATHS "${LIBMIO_RAPIDXML_SRC_DIR}/include"
              NO_DEFAULT_PATH
              NO_PACKAGE_ROOT_PATH
              NO_CMAKE_PATH
              NO_CMAKE_ENVIRONMENT_PATH
              NO_SYSTEM_ENVIRONMENT_PATH
              NO_CMAKE_SYSTEM_PATH
              NO_CMAKE_INSTALL_PREFIX)

    include(FindPackageHandleStandardArgs)

    find_package_handle_standard_args(RAPIDXML DEFAULT_MSG
            RAPIDXML_INCLUDES)
    mark_as_advanced(RAPIDXML_INCLUDES)

endmacro()
