#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "RPC_CLIENT_INFORMATION1.UserName", user_name, 0x0, 0x40, true, 0x7786a00214071e46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "RPC_CLIENT_INFORMATION1.ComputerName", computer_name, 0x40, 0x40, true, 0x8349485b5b09375c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "RPC_CLIENT_INFORMATION1.Privilege", privilege, 0x80, 0x10, true, 0x2a700f8f115d2944)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_CLIENT_INFORMATION1.AuthFlags", auth_flags, 0xa0, 0x20, true, 0xc854732dcc4fe055)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif