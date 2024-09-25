#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_LOGICAL_ADDRESS_MAPPING.AdapterContext", adapter_context, 0x0, 0x40, true, 0x76e90478ee3f3c16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_LOGICAL_ADDRESS_MAPPING.AdapterPageCount", adapter_page_count, 0x40, 0x20, true, 0xbe6bb9a307d612f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_NDK_LOGICAL_ADDRESS_MAPPING.AdapterPageArray", adapter_page_array, 0x80, 0x40, true, 0x850082755427893f)
#else
#define _m00
#define _m01
#define _m02
#endif