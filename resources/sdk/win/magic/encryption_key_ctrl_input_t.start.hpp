#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTION_KEY_CTRL_INPUT.HeaderSize", header_size, 0x0, 0x20, true, 0x7d1f30be2f850507)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTION_KEY_CTRL_INPUT.StructureSize", structure_size, 0x20, 0x20, true, 0xa2686154886a4e3e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ENCRYPTION_KEY_CTRL_INPUT.KeyOffset", key_offset, 0x40, 0x10, true, 0xb6a333a7ba61ed9d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ENCRYPTION_KEY_CTRL_INPUT.KeySize", key_size, 0x50, 0x10, true, 0x8bf1c701dc39b71f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTION_KEY_CTRL_INPUT.DplLock", dpl_lock, 0x60, 0x20, true, 0x107f4ba4097ffe97)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ENCRYPTION_KEY_CTRL_INPUT.DplUserId", dpl_user_id, 0x80, 0x40, true, 0x6c6b023f4dc442b1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ENCRYPTION_KEY_CTRL_INPUT.DplCredentialId", dpl_credential_id, 0xc0, 0x40, true, 0xd0571a09f5e6f4c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif