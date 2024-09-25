#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDPADDRESS.TargetId", target_id, 0x0, 0x20, true, 0x293d5404f511567f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDPADDRESS.DPNativeError", dp_native_error, 0x20, 0x20, true, 0xbce4799d28fc4459)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDPADDRESS.RootPortIndex", root_port_index, 0x40, 0x20, true, 0x3b75ad0e070006f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_GETDPADDRESS.NumLinks", num_links, 0x60, 0x8, true, 0x543e33de14d64b4e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 15>), "_DXGKARG_GETDPADDRESS.RelAddress", rel_address, 0x68, 0x78, true, 0x45f0fe30f5f7509a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif