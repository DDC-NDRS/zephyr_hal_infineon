# CUSTOM@NDRS: TF-M board config for bcu-mv25 (PSE84, S25HS512T on SMIF0 CS0).
# Replaces pse84/epc2/board/config.cmake through -DIFX_CONFIG_BSP_PATH (soc/infineon/edge/pse84/CMakeLists.txt),
# so TF-M no longer autodiscovers the EPC2 kit's design folder. Keep this directory as the only BSP source.

set(IFX_PDL_PART_NUMBER           "PSE846GPS2DBZC4A"    CACHE STRING "Part number, see PDL for more details")
set(IFX_SMIF_0_MEMORY_CONFIG      "S25HS512T_SMIF0_SlaveSlot_0" CACHE STRING "SMIF 0 memory config symbol")

set(IFX_BSP_LIB_PATH              "DOWNLOAD"            CACHE PATH   "Path to target BSP library (or DOWNLOAD to fetch automatically)")
set(IFX_BSP_LIB_GIT_REMOTE        "https://github.com/Infineon/TARGET_KIT_PSE84_EVAL_EPC2.git" CACHE STRING "Target BSP library repo URL")
set(IFX_BSP_LIB_VERSION           "release-v1.2.0"      CACHE STRING "The version of target BSP library to use")
set(IFX_BSP_LIB_PATCH_DIR         "${IFX_FAMILY_SOURCE_DIR}/libs/ifx_bsp/patch" CACHE STRING "Path to ifx-bsp patches")

set(IFX_DEVICE_DB_LIB_PATH        "DOWNLOAD"            CACHE PATH   "Path to target Device DB library (or DOWNLOAD to fetch automatically)")
set(IFX_DEVICE_DB_LIB_GIT_REMOTE  "https://github.com/Infineon/device-db.git" CACHE STRING "Target Device DB library repo URL")
set(IFX_DEVICE_DB_LIB_VERSION     "release-v4.34.0"     CACHE STRING "The version of target Device DB library to use")

set(PS_TEST_NV_COUNTERS           OFF                   CACHE BOOL   "Use the test NV counters to test Protected Storage rollback scenarios")

set(IFX_BSP_DESIGN_DIR_PATH       "${CMAKE_CURRENT_LIST_DIR}" CACHE FILEPATH "Path to directory with BSP design files.")
set(IFX_BSP_DESIGN_FILE_PATH      "${IFX_BSP_DESIGN_DIR_PATH}/design.modus"  CACHE FILEPATH "design.modus (only used when generating sources)")
set(IFX_BSP_QSPI_DESIGN_FILE_PATH "${IFX_BSP_DESIGN_DIR_PATH}/design.cyqspi" CACHE FILEPATH "design.cyqspi (only used when generating sources)")

# The sources in this directory are pregenerated; TF-M does not run the Device Configurator.
set(IFX_GENERATE_BSP_SOURCES      OFF                   CACHE BOOL   "Whether to generate BSP sources")
set(IFX_BSP_GENERATED_FILES_OUTPUT_PATH "${IFX_BSP_DESIGN_DIR_PATH}" CACHE PATH "BSP code generation output directory.")
