#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_X942_OTHER_INFO.pszContentEncryptionObjId", psz_content_encryption_obj_id, 0x0, 0x40, true, 0xa4448010e89c315a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CRYPT_X942_OTHER_INFO.rgbCounter", rgb_counter, 0x40, 0x20, true, 0x2e270a876e6d605e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CRYPT_X942_OTHER_INFO.rgbKeyLength", rgb_key_length, 0x60, 0x20, true, 0xc87ab94ed7643efe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_X942_OTHER_INFO.PubInfo", pub_info, 0x80, 0x80, true, 0xb1729cf4c8739563)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif