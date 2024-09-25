#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GUID.Data1", data1, 0x0, 0x20, true, 0xd835cd00e2562140)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GUID.Data2", data2, 0x20, 0x10, true, 0xfbb329da2c11b04e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GUID.Data3", data3, 0x30, 0x10, true, 0xcdbdbab0e15222cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_GUID.Data4", data4, 0x40, 0x40, true, 0xdef11ccbd9112f05)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif