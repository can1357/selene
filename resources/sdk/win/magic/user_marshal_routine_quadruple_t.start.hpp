#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(user_marshal_sizing_routine_t ), "_USER_MARSHAL_ROUTINE_QUADRUPLE.pfnBufferSize", pfn_buffer_size, 0x0, 0x40, true, 0xeaf3e53ac0d4a6b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t*(uint32_t*, uint8_t*, void*)>*), "_USER_MARSHAL_ROUTINE_QUADRUPLE.pfnMarshall", pfn_marshall, 0x40, 0x40, true, 0xc18e50c2b66c57a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t*(uint32_t*, uint8_t*, void*)>*), "_USER_MARSHAL_ROUTINE_QUADRUPLE.pfnUnmarshall", pfn_unmarshall, 0x80, 0x40, true, 0x15c391401f73fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t*, void*)>*), "_USER_MARSHAL_ROUTINE_QUADRUPLE.pfnFree", pfn_free, 0xc0, 0x40, true, 0xeb341b99fecf41a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif