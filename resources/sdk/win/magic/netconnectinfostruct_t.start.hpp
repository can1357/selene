#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETCONNECTINFOSTRUCT.cbStructure", cb_structure, 0x0, 0x20, true, 0xf7f49ca2cb8dd504)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETCONNECTINFOSTRUCT.dwFlags", dw_flags, 0x20, 0x20, true, 0x1357df8231ad6003)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETCONNECTINFOSTRUCT.dwSpeed", dw_speed, 0x40, 0x20, true, 0xfc7ee87560e33e51)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETCONNECTINFOSTRUCT.dwDelay", dw_delay, 0x60, 0x20, true, 0x174d6b8c9ab6c6f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETCONNECTINFOSTRUCT.dwOptDataSize", dw_opt_data_size, 0x80, 0x20, true, 0x796076c8fb5c72b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif