#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_CALLBACK_INFORMATION.CallbackObject", callback_object, 0x0, 0x40, true, 0x8a74d1ae5dc920a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_CALLBACK_INFORMATION.Context", context, 0x40, 0x40, true, 0x28aa6e582d5e16ae)
#else
#define _m00
#define _m01
#endif