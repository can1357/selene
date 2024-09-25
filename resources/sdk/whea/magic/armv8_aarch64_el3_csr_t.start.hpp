#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.ELR_EL3", elr_el3, 0x0, 0x40, true, 0xc0050ec653cdcf5e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.ESR_EL3", esr_el3, 0x40, 0x40, true, 0xe9712cb205ed9796)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.FAR_EL3", far_el3, 0x80, 0x40, true, 0xba32c1c329a93724)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.MAIR_EL3", mair_el3, 0xc0, 0x40, true, 0xa5410ac24143c0b3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.SCTLR_EL3", sctlr_el3, 0x100, 0x40, true, 0xa9ec03465cf9b978)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.SP_EL3", sp_el3, 0x140, 0x40, true, 0x23497d917de5c1ee)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.SPSR_EL3", spsr_el3, 0x180, 0x40, true, 0x767712fb43190253)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.TCR_EL3", tcr_el3, 0x1c0, 0x40, true, 0xa8b72a3ebe7a1585)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.TPIDR_EL3", tpidr_el3, 0x200, 0x40, true, 0xda0f1df353b8c5a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARMV8_AARCH64_EL3_CSR.TTBR0_EL3", ttbr0_el3, 0x240, 0x40, true, 0x4fea9a34c79fefe9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif