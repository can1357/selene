#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCI_ADDR.Address", address, 0x0, 0x20, true, 0xd4a4edfc686880c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCI_ADDR.QuadPart", quad_part, 0x0, 0x40, true, 0xc57c39ef577ad76e)
#else
#define _m00
#define _m01
#endif