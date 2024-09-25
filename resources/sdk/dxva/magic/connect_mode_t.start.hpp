#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_ConnectMode.guidMode", guid_mode, 0x0, 0x80, true, 0xde2c808470d73a1a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_ConnectMode.wRestrictedMode", w_restricted_mode, 0x80, 0x10, true, 0x9b46e0cfec147c04)
#else
#define _m00
#define _m01
#endif