#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_EXCEPTION_PORT.ExceptionPortHandle", exception_port_handle, 0x0, 0x40, true, 0x26d8f8a5278a433f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_EXCEPTION_PORT.StateFlags", state_flags, 0x40, 0x20, true, 0x992804243e5e73a8)
#else
#define _m00
#define _m01
#endif