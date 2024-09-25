#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCLAVE_CREATE_INFO_VBS_BASIC.Flags", flags, 0x0, 0x20, true, 0xf21d4830f9490dd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_ENCLAVE_CREATE_INFO_VBS_BASIC.OwnerID", owner_id, 0x20, 0x0, true, 0x4a2a481913e256ef)
#else
#define _m00
#define _m01
#endif