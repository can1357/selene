#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_SECURE_CSR.SCTLR", sctlr, 0x0, 0x20, true, 0xa4124c88d3d372f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_SECURE_CSR.SPSR_mon", spsr_mon, 0x20, 0x20, true, 0x7a19222d9bd6f9c)
#else
#define _m00
#define _m01
#endif