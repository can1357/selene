#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSuspendMonitor._fRegistered", f_registered, 0x40, 0x20, true, 0x9fa4eabf85a14c97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSuspendMonitor._fSuspended", f_suspended, 0x60, 0x20, true, 0xb276334247d7ad1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSuspendMonitor._RundownCount", rundown_count, 0x80, 0x20, true, 0xa1927d0d3ff2044a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CSuspendMonitor._ulRundownComplete", ul_rundown_complete, 0xa0, 0x20, true, 0x4bca7b0804fc4c65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif