TF-M input for bcu-mv25 (CONFIG_BOARD_BCU_MV25, m33/ns).

soc/infineon/edge/pse84/CMakeLists.txt passes this directory to TF-M as
IFX_BSP_GENERATED_FILES_OUTPUT_PATH, so TF-M builds from the files here instead of
its EPC2 kit defaults (modules/tee/tf-m/.../infineon/pse84/epc2/board/shared/design/default/GeneratedSource).

PUT YOUR GENERATED FILES HERE (Device Configurator + QSPI Configurator output for the board):
  cymem_CM33_0.h  cymem_CM33_0_S.h  cymem_CM55_0.h
  cymem_memory_locations.h  cymem_memory_types.h
  cymem_gnu_CM33_0.ld  cymem_gnu_CM33_0_S.ld  cymem_gnu_CM55_0.ld
  (and the armlink/ilinkarm variants if you keep the same file set as the EPC2 default)
  cycfg_ppc.h (and cycfg_ppc.c / cycfg_mpc.c if your generator emits them)
  cycfg_qspi_memslot.{c,h}  -> must define S25HS512T_SMIF0_SlaveSlot_0 (SMIF0 CS0)

Layout must match boards/ndrs/bcu-mv25/bcu-mv25_memory_map.dtsi:
  TF-M (m33s_xip) 0x100000, NS (m33_xip) 0x340000, ITS/PS in RRAM.
Check after a build: NS _vector_table == 0x08340400.
