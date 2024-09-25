#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.ProcessorCorrectable", processor_correctable, 0x0, 0x1, true, 0xf2eecdaa7e4088ed, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.ProcessorUncorrectableNonFatal", processor_uncorrectable_non_fatal, 0x1, 0x1, true, 0x7418705acef276a4, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.ProcessorUncorrectableFatal", processor_uncorrectable_fatal, 0x2, 0x1, true, 0x8d1049f8217695ae, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.MemoryCorrectable", memory_correctable, 0x3, 0x1, true, 0xf1653ecd549c641a, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.MemoryUncorrectableNonFatal", memory_uncorrectable_non_fatal, 0x4, 0x1, true, 0x80b1d84bc2c0c12a, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.MemoryUncorrectableFatal", memory_uncorrectable_fatal, 0x5, 0x1, true, 0xca26b510016c7a47, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PCIExpressCorrectable", pci_express_correctable, 0x6, 0x1, true, 0x970d066ba7224ae1, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PCIExpressUncorrectableNonFatal", pci_express_uncorrectable_non_fatal, 0x7, 0x1, true, 0x31203c267ea67672, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PCIExpressUncorrectableFatal", pci_express_uncorrectable_fatal, 0x8, 0x1, true, 0x893b584a41354e4d, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PlatformCorrectable", platform_correctable, 0x9, 0x1, true, 0x402fab5a1a60b685, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PlatformUncorrectableNonFatal", platform_uncorrectable_non_fatal, 0xa, 0x1, true, 0xf9d6996e30804cf5, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.PlatformUncorrectableFatal", platform_uncorrectable_fatal, 0xb, 0x1, true, 0xbc9aa9b737927854, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.IA64Corrected", ia64_corrected, 0xc, 0x1, true, 0x9aa94c9c65ecfbc1, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.IA64Recoverable", ia64_recoverable, 0xd, 0x1, true, 0xa8f88b2616eba119, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.IA64Fatal", ia64_fatal, 0xe, 0x1, true, 0x4738bb6fd92d85ec, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.IA64RecoverableCache", ia64_recoverable_cache, 0xf, 0x1, true, 0xd6850b04ca7378d, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.IA64RecoverableRegFile", ia64_recoverable_reg_file, 0x10, 0x1, true, 0x6fdb2298c0fe325e, 1, uint32_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_INJECTION_CAPABILITIES.AsULONG", as_ulong, 0x0, 0x20, true, 0xcece6dec45e5ba86)
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
#endif