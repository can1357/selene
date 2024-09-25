#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.ELR_hyp", elr_hyp, 0x0, 0x20, true, 0x2147a310de626be9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HAMAIR0", hamair0, 0x20, 0x20, true, 0x8de3f7f94af5c032)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HAMAIR1", hamair1, 0x40, 0x20, true, 0xe0074335e3795f18)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HCR", hcr, 0x60, 0x20, true, 0xd55512f8fe4fb751)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HCR2", hcr2, 0x80, 0x20, true, 0x325db0840e346696)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HDFAR", hdfar, 0xa0, 0x20, true, 0x8f270cc2d39824e5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HIFAR", hifar, 0xc0, 0x20, true, 0x4a51d447a1c1c54e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HPFAR", hpfar, 0xe0, 0x20, true, 0x37418d9bf58201be)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HSR", hsr, 0x100, 0x20, true, 0x40a8c62e18df529a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HTCR", htcr, 0x120, 0x20, true, 0x3d659641597a8cf8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HTPIDR", htpidr, 0x140, 0x20, true, 0xb137a501352ff81d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.HTTBR", httbr, 0x160, 0x20, true, 0xe3531b6b70501a72)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.SPSR_hyp", spsr_hyp, 0x180, 0x20, true, 0x7b89b4137ada32b7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.VTCR", vtcr, 0x1a0, 0x20, true, 0x63dc3049b67087e9)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.VTTBR", vttbr, 0x1c0, 0x20, true, 0xbf13a54bba2586b9)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_AARCH32_EL2_CSR.DACR32_EL2", dacr32_el2, 0x1e0, 0x20, true, 0xa955fe3b0de8d7c8)
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
#endif