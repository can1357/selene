#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration$win32kbase.sys", 0xb0890, 0x0, true, 0x1bb73c35904a353d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration$win32kbase.sys", 0x8b584, 0x0, true, 0xc51ba9e48892129c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif