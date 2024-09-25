#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_UNLOAD_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0xe08da0f5d1a6da19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_UNLOAD_KEY_INFORMATION.UserEvent", user_event, 0x40, 0x40, true, 0x35e94e487fb34c12)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_UNLOAD_KEY_INFORMATION.CallContext", call_context, 0x80, 0x40, true, 0x4e1822ce63b2c4e0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_UNLOAD_KEY_INFORMATION.ObjectContext", object_context, 0xc0, 0x40, true, 0x6be8cec01ad51207)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif