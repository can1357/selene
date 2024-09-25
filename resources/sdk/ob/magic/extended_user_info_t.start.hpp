#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OB_EXTENDED_USER_INFO.Context1", context1, 0x0, 0x40, true, 0x9ad53d2ebae291b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OB_EXTENDED_USER_INFO.Context2", context2, 0x40, 0x40, true, 0xf7077cd9e7b689cf)
#else
#define _m00
#define _m01
#endif