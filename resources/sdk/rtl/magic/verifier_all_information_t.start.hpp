#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_VERIFIER_ALL_INFORMATION.Size", size, 0x0, 0x40, true, 0x8e1de2ce96576889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_VERIFIER_ALL_INFORMATION.OffsetPageHeapsInformation", offset_page_heaps_information, 0x40, 0x40, true, 0xfa0eb500bcd0cd2c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_VERIFIER_ALL_INFORMATION.OffsetRuntimeFlagsInformation", offset_runtime_flags_information, 0x80, 0x40, true, 0xb5a53f2ad92f1b3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_VERIFIER_ALL_INFORMATION.OffsetFaultInjectInformation", offset_fault_inject_information, 0xc0, 0x40, true, 0x6e74bb21abf81051)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif