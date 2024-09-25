#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_NegoKeys.KeyType", key_type, 0x0, 0x20, true, 0xc32977b3d9cd6db3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgContext_NegoKeys.KeyLength", key_length, 0x20, 0x10, true, 0x2cbb305831edd5f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SecPkgContext_NegoKeys.KeyValue", key_value, 0x40, 0x40, true, 0x3f04a4c6d0edc199)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_NegoKeys.VerifyKeyType", verify_key_type, 0x80, 0x20, true, 0x340bfd1cec3d3126)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgContext_NegoKeys.VerifyKeyLength", verify_key_length, 0xa0, 0x10, true, 0x4a343eafff2b20ca)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SecPkgContext_NegoKeys.VerifyKeyValue", verify_key_value, 0xc0, 0x40, true, 0xe3a78f2ecca495cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif