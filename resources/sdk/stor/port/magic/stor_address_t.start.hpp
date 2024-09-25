#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_ADDRESS.Type", type, 0x0, 0x10, true, 0x38b447388a3ee090)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_ADDRESS.Port", port, 0x10, 0x10, true, 0xee2f845ff62f8238)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_ADDRESS.AddressLength", address_length, 0x20, 0x20, true, 0xa5d7ff067f331911)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STOR_ADDRESS.AddressData", address_data, 0x40, 0x8, true, 0x192c3a4a9adfb085)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif