#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.ELR_EL1", elr_el1, 0x0, 0x40, true, 0x409539c6213edb5e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.ESR_EL2", esr_el2, 0x40, 0x40, true, 0x926d7aef290e4fc4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.FAR_EL1", far_el1, 0x80, 0x40, true, 0x4a9cb58fe96f9f38)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.ISR_EL1", isr_el1, 0xc0, 0x40, true, 0x873f63e2ec21c918)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.MAIR_EL1", mair_el1, 0x100, 0x40, true, 0xd2817e5767839db6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.MIDR_EL1", midr_el1, 0x140, 0x40, true, 0x58a4efcc4de4b8a7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.MPIDR_EL1", mpidr_el1, 0x180, 0x40, true, 0x49c7f2f27bd91a2d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.SCTLR_EL1", sctlr_el1, 0x1c0, 0x40, true, 0x673b3e19bc3e270b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.SP_EL0", sp_el0, 0x200, 0x40, true, 0x6bcd2d58c5f7fc2a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.SP_EL1", sp_el1, 0x240, 0x40, true, 0x1c399079d0a3070c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.SPSR_EL1", spsr_el1, 0x280, 0x40, true, 0x44db2e30f4c89964)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TCR_EL1", tcr_el1, 0x2c0, 0x40, true, 0x25ca7a2e86d9c9f8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TPIDR_EL0", tpidr_el0, 0x300, 0x40, true, 0x1fd7c286aa9527db)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TPIDR_EL1", tpidr_el1, 0x340, 0x40, true, 0x8ad13c88b43a4db6)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TPIDRRO_EL0", tpidrro_el0, 0x380, 0x40, true, 0xc1de67b04dc5d037)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TTBR0_EL1", ttbr0_el1, 0x3c0, 0x40, true, 0x87db881d474d587)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_AARCH64_EL1_CSR.TTBR1_EL1", ttbr1_el1, 0x400, 0x40, true, 0x10eb923f775f9a92)
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
#endif