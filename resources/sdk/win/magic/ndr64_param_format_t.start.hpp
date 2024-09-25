#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_PARAM_FORMAT.Type", type, 0x0, 0x40, true, 0xb7755514af54fb5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_param_flags_t), "_NDR64_PARAM_FORMAT.Attributes", attributes, 0x40, 0x10, true, 0x8b0c5dac4d904d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PARAM_FORMAT.StackOffset", stack_offset, 0x60, 0x20, true, 0xf0ecba344bce2fb8)
#else
#define _m00
#define _m01
#define _m02
#endif