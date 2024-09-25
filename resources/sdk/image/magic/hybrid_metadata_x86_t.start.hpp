#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.Version", version, 0x0, 0x0, false, 0xca742839283766c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.WowA64ExceptionHandlerFunctionPointer", wow_a64_exception_handler_function_pointer, 0x0, 0x0, false, 0x432a32be89a10589)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.WowA64DispatchCallFunctionPointer", wow_a64_dispatch_call_function_pointer, 0x0, 0x0, false, 0xc47f052363b541fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.WowA64DispatchIndirectCallFunctionPointer", wow_a64_dispatch_indirect_call_function_pointer, 0x0, 0x0, false, 0x19805ae45a1181c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.HybridCodeAddressRangeOffset", hybrid_code_address_range_offset, 0x0, 0x0, false, 0xf7056e2be029634d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_METADATA_X86.HybridCodeAddressRangeCount", hybrid_code_address_range_count, 0x0, 0x0, false, 0xf37aceceec0df856)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif