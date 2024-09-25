#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.DFAR", dfar, 0x0, 0x20, true, 0xdd962c385d6f40d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.DFSR", dfsr, 0x20, 0x20, true, 0x59fb43b49669afaa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.IFAR", ifar, 0x40, 0x20, true, 0x6fd7584ae0c33f6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.ISR", isr, 0x60, 0x20, true, 0xe19cf90af235f150)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.MAIR0", mair0, 0x80, 0x20, true, 0xe5626e81e6445641)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.MAIR1", mair1, 0xa0, 0x20, true, 0x5ae367059774b9f9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.MIDR", midr, 0xc0, 0x20, true, 0xc13b26c56abd2f51)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.MPIDR", mpidr, 0xe0, 0x20, true, 0x4cfe346fe874e796)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.NMRR", nmrr, 0x100, 0x20, true, 0x73ab3cc8e4a075e8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.PRRR", prrr, 0x120, 0x20, true, 0x58db8fca79ecdc98)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SCTLR", sctlr, 0x140, 0x20, true, 0xa53071683e2959fb)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR", spsr, 0x160, 0x20, true, 0x30f278fb44a48b16)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR_abt", spsr_abt, 0x180, 0x20, true, 0x7e2551d1d65d4044)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR_fiq", spsr_fiq, 0x1a0, 0x20, true, 0xbb6b4e681aa1e310)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR_irq", spsr_irq, 0x1c0, 0x20, true, 0x600dd833a569b808)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR_svc", spsr_svc, 0x1e0, 0x20, true, 0x61a72f0ca99404d6)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.SPSR_und", spsr_und, 0x200, 0x20, true, 0xafd3fe44b9028e08)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TPIDRPRW", tpidrprw, 0x220, 0x20, true, 0x338c34c3009ec8c9)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TPIDRURO", tpidruro, 0x240, 0x20, true, 0xe19077883381f0a8)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TPIDRURW", tpidrurw, 0x260, 0x20, true, 0xe7fc800b553a7da5)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TTBCR", ttbcr, 0x280, 0x20, true, 0x63511e10f42c7750)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TTBR0", ttbr0, 0x2a0, 0x20, true, 0x646a7f6bbebe6598)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.TTBR1", ttbr1, 0x2c0, 0x20, true, 0x83ccc4adb67161b1)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL1_CSR.DACR", dacr, 0x2e0, 0x20, true, 0x78c1d3bfe8d8342e)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif