#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_NAME.Object", object, 0x0, 0x40, true, 0xf44dfd3f6f3a046b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_name_information_t*), "_REG_QUERY_KEY_NAME.ObjectNameInfo", object_name_info, 0x40, 0x40, true, 0x4d0550cfba5832fb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_QUERY_KEY_NAME.Length", length, 0x80, 0x20, true, 0xa3c605178f55970d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_KEY_NAME.ReturnLength", return_length, 0xc0, 0x40, true, 0x9985362aa2e2b4f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_NAME.CallContext", call_context, 0x100, 0x40, true, 0xb61d9ffa65303b16)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_NAME.ObjectContext", object_context, 0x140, 0x40, true, 0xbf050877af848981)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif