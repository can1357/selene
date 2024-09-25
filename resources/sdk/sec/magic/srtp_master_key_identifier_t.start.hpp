#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEC_SRTP_MASTER_KEY_IDENTIFIER.MasterKeyIdentifierSize", master_key_identifier_size, 0x0, 0x8, true, 0xa9e1e2e120425a15)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_SRTP_MASTER_KEY_IDENTIFIER.MasterKeyIdentifier", master_key_identifier, 0x8, 0x8, true, 0xadde30b3446a89b3)
#else
#define _m00
#define _m01
#endif