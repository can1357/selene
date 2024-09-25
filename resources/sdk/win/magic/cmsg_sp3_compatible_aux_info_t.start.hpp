#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SP3_COMPATIBLE_AUX_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xbd98d7ec446b2224)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SP3_COMPATIBLE_AUX_INFO.dwFlags", dw_flags, 0x20, 0x20, true, 0x1a06b3d27f3c6073)
#else
#define _m00
#define _m01
#endif