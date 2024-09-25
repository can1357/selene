#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.cbSize", cb_size, 0x0, 0x20, true, 0xb258ea17feef0848)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.dwFlags", dw_flags, 0x20, 0x20, true, 0xc54508ec70fbd3d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.iMaxSpeed", i_max_speed, 0x40, 0x20, true, 0x7e54629a42ad1eb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.iTimeToMaxSpeed", i_time_to_max_speed, 0x60, 0x20, true, 0xa4fa134dfb73885a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.iCtrlSpeed", i_ctrl_speed, 0x80, 0x20, true, 0xbd7e07e26fcb92af)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.dwReserved1", dw_reserved1, 0xa0, 0x20, true, 0xc65dcb958f5ac80b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEKEYS.dwReserved2", dw_reserved2, 0xc0, 0x20, true, 0x133d22411080df8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif