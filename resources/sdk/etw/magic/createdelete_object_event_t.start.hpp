#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CREATEDELETE_OBJECT_EVENT.Object", object, 0x0, 0x40, true, 0x2e4ec5c512bec0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_CREATEDELETE_OBJECT_EVENT.ObjectType", object_type, 0x40, 0x10, true, 0xea52f272aa4d9a8b)
#else
#define _m00
#define _m01
#endif