#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_STORAGE_OFFLOAD_TOKEN.TokenType", token_type, 0x0, 0x20, true, 0x4a8a18a3c6a2e7cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_OFFLOAD_TOKEN.TokenIdLength", token_id_length, 0x30, 0x10, true, 0x2a2a8f1c9512d420)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_storage_offload_zero_data_token_t), "_STORAGE_OFFLOAD_TOKEN.StorageOffloadZeroDataToken", storage_offload_zero_data_token, 0x40, 0xc0, true, 0xcda64547e1317123)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 504>), "_STORAGE_OFFLOAD_TOKEN.Token", token, 0x40, 0xc0, true, 0xdccef7acfaa90ec5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif