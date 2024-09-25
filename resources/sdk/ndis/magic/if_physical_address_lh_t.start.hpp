#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IF_PHYSICAL_ADDRESS_LH.Length", length, 0x0, 0x10, true, 0x27399a0172349d94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_IF_PHYSICAL_ADDRESS_LH.Address", address, 0x10, 0x0, true, 0x189bc94f6fadba14)
#else
#define _m00
#define _m01
#endif