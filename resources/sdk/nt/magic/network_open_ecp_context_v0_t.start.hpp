#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.Size", size, 0x0, 0x10, true, 0xb9872f55a0675c3f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_location_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.in.Location", location, 0x0, 0x20, true, 0x7afe2c513b57e7b1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_integrity_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.in.Integrity", integrity, 0x20, 0x20, true, 0xccec60e72279b222)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_in_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.in", in, 0x20, 0x40, true, 0x4e9d55e3c38d33fa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_location_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.out.Location", location, 0x0, 0x20, true, 0x68e943556e4c4fa1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_integrity_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.out.Integrity", integrity, 0x20, 0x20, true, 0x52f9b25d9e8b5a25)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_in_t), "_NETWORK_OPEN_ECP_CONTEXT_V0.out", out, 0x60, 0x40, true, 0x5cfd8832089eb433)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif