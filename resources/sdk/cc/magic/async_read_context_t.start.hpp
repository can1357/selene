#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_CC_ASYNC_READ_CONTEXT.CompletionRoutine", completion_routine, 0x0, 0x40, true, 0x82d2ee838918f4cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CC_ASYNC_READ_CONTEXT.Context", context, 0x40, 0x40, true, 0xdca755950e4c6678)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_CC_ASYNC_READ_CONTEXT.Mdl", mdl, 0x80, 0x40, true, 0xde0e0a59d549b995)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_CC_ASYNC_READ_CONTEXT.RequestorMode", requestor_mode, 0xc0, 0x8, true, 0x4bf17e8be2b66568)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_ASYNC_READ_CONTEXT.NestingLevel", nesting_level, 0xe0, 0x20, true, 0xfe29ae600c06389b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif