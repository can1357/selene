#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_OBJECT_HANDLE_EVENT.Object", object, 0x0, 0x40, true, 0x20f80cff2c835889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OBJECT_HANDLE_EVENT.ProcessId", process_id, 0x40, 0x20, true, 0x6db753d366f8e173)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OBJECT_HANDLE_EVENT.Handle", handle, 0x60, 0x20, true, 0x13b111edaf3a994c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_OBJECT_HANDLE_EVENT.ObjectType", object_type, 0x80, 0x10, true, 0xc410830685617e49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif