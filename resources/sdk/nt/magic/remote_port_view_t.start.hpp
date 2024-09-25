#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOTE_PORT_VIEW.Length", length, 0x0, 0x20, true, 0x815f205c79337b10)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REMOTE_PORT_VIEW.ViewSize", view_size, 0x40, 0x40, true, 0x6cdd64584a420fb2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REMOTE_PORT_VIEW.ViewBase", view_base, 0x80, 0x40, true, 0xe21bea6a121f4490)
#else
#define _m00
#define _m01
#define _m02
#endif