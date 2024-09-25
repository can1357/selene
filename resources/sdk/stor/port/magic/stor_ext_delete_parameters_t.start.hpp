#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EXT_DELETE_PARAMETERS.Version", version, 0x0, 0x20, true, 0x306e2b2024b9268a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_STOR_EXT_DELETE_PARAMETERS.DeleteCallback", delete_callback, 0x40, 0x40, true, 0x44f6ba708ce25bff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_EXT_DELETE_PARAMETERS.DeleteContext", delete_context, 0x80, 0x40, true, 0xfc0f5eee161fa36d)
#else
#define _m00
#define _m01
#define _m02
#endif