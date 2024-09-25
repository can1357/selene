#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.Version", version, 0x0, 0x20, true, 0x963e4865d15d3537)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.CHPECodeAddressRangeOffset", chpe_code_address_range_offset, 0x20, 0x20, true, 0xb8cc640c3405602d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.CHPECodeAddressRangeCount", chpe_code_address_range_count, 0x40, 0x20, true, 0x2e9fab0663fa0228)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64ExceptionHandlerFunctionPointer", wow_a64_exception_handler_function_pointer, 0x60, 0x20, true, 0x997beccaed7fe300)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchCallFunctionPointer", wow_a64_dispatch_call_function_pointer, 0x80, 0x20, true, 0x181aa5ca73de9114)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchIndirectCallFunctionPointer", wow_a64_dispatch_indirect_call_function_pointer, 0xa0, 0x20, true, 0xab431bc1aa13d8c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchIndirectCallCfgFunctionPointer", wow_a64_dispatch_indirect_call_cfg_function_pointer, 0xc0, 0x20, true, 0x58d3345bd9963570)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchRetFunctionPointer", wow_a64_dispatch_ret_function_pointer, 0xe0, 0x20, true, 0xc5891b911a8ad720)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchRetLeafFunctionPointer", wow_a64_dispatch_ret_leaf_function_pointer, 0x100, 0x20, true, 0x4e6460e0bc55c169)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64DispatchJumpFunctionPointer", wow_a64_dispatch_jump_function_pointer, 0x120, 0x20, true, 0x87f360908e90a964)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.CompilerIATPointer", compiler_iat_pointer, 0x140, 0x20, true, 0x9cb56cfc04450b06)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_METADATA_X86.WowA64RdtscFunctionPointer", wow_a64_rdtsc_function_pointer, 0x160, 0x20, true, 0x2c4493c4da708144)
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
#endif