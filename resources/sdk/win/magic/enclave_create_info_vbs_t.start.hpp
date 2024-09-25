#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCLAVE_CREATE_INFO_VBS.Flags", flags, 0x0, 0x20, true, 0x9a5e6a263eaf3b75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_ENCLAVE_CREATE_INFO_VBS.OwnerID", owner_id, 0x20, 0x0, true, 0xcd9c41e31f1c3bc0)
#else
#define _m00
#define _m01
#endif