#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.ELR_EL2", elr_el2, 0x0, 0x40, true, 0x82e8e0a40c1b37b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.ESR_EL2", esr_el2, 0x40, 0x40, true, 0xf629b637fd69d3ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.FAR_EL2", far_el2, 0x80, 0x40, true, 0x576854582396525d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.HACR_EL2", hacr_el2, 0xc0, 0x40, true, 0xbdd995223c1fe6d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.HCR_EL2", hcr_el2, 0x100, 0x40, true, 0x6239593af42f6378)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.HPFAR_EL2", hpfar_el2, 0x140, 0x40, true, 0xb814df87cbf1b2f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.MAIR_EL2", mair_el2, 0x180, 0x40, true, 0x84efc319572416cf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.SCTLR_EL2", sctlr_el2, 0x1c0, 0x40, true, 0x4f744b5e5087280c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.SP_EL2", sp_el2, 0x200, 0x40, true, 0x99d19cce7bb394ad)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.SPSR_EL2", spsr_el2, 0x240, 0x40, true, 0xf5924c1bdc710e74)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.TCR_EL2", tcr_el2, 0x280, 0x40, true, 0xc2197c94679b580e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.TPIDR_EL2", tpidr_el2, 0x2c0, 0x40, true, 0x18f0bcc2c5604719)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.TTBR0_EL2", ttbr0_el2, 0x300, 0x40, true, 0x321ed3e05f71499e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.VTCR_EL2", vtcr_el2, 0x340, 0x40, true, 0x91e54072d118f565)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL2_CSR.VTTBR_EL2", vttbr_el2, 0x380, 0x40, true, 0xaafe8080e414e23e)
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
#endif