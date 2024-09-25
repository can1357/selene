#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST.RequestLevel", request_level, 0x0, 0x20, true, 0xf5654482fa50eb3f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST.RequestFlags", request_flags, 0x20, 0x20, true, 0x87937b26ac405ba3)
#else
#define _m00
#define _m01
#endif