#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTION_BUFFER.EncryptionOperation", encryption_operation, 0x0, 0x20, true, 0x1e887312038f1d0d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ENCRYPTION_BUFFER.Private", _private, 0x20, 0x8, true, 0xc343b8ec28416232)
#else
#define _m00
#define _m01
#endif