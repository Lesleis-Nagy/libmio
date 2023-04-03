macro (setup_args)

    # Set variables
    set(LIBMIO_ARGS         "args-v6.3.0")
    set(LIBMIO_ARGS_SRC_DIR "${LIBMIO_THIRD_PARTY_DIR}/${LIBMIO_ARGS}")

    # Find headers
    find_path(ARGS_INCLUDES
              NAMES "args.hxx"
              PATHS "${LIBMIO_ARGS_SRC_DIR}/include"
              NO_DEFAULT_PATH
              NO_PACKAGE_ROOT_PATH
              NO_CMAKE_PATH
              NO_CMAKE_ENVIRONMENT_PATH
              NO_SYSTEM_ENVIRONMENT_PATH
              NO_CMAKE_SYSTEM_PATH
              NO_CMAKE_INSTALL_PREFIX)

    include(FindPackageHandleStandardArgs)

    find_package_handle_standard_args(ARGS DEFAULT_MSG
            ARGS_INCLUDES)
    mark_as_advanced(ARGS_INCLUDES)

endmacro()
