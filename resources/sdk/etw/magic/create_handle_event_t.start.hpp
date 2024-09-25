#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CREATE_HANDLE_EVENT.Object", object, 0x0, 0x40, true, 0x19a9d51297b887ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CREATE_HANDLE_EVENT.Handle", handle, 0x40, 0x20, true, 0x5359779e121de0dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_CREATE_HANDLE_EVENT.ObjectType", object_type, 0x60, 0x10, true, 0x467b48435b8cdb0b)
#else
#define _m00
#define _m01
#define _m02
#endif