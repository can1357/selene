#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_VSM_PROTECTION_INFORMATION.DmaProtectionsAvailable", dma_protections_available, 0x0, 0x8, true, 0x6f9826ec9789d4e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_VSM_PROTECTION_INFORMATION.DmaProtectionsInUse", dma_protections_in_use, 0x8, 0x8, true, 0x7e3a7e86af44fb62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_VSM_PROTECTION_INFORMATION.HardwareMbecAvailable", hardware_mbec_available, 0x10, 0x8, true, 0xcf1513f7c9577ddb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_VSM_PROTECTION_INFORMATION.ApicVirtualizationAvailable", apic_virtualization_available, 0x18, 0x8, true, 0x700ba61e1f5a2e49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif