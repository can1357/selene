#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_SMART_CARD_ROOT_INFO.rgbCardID", rgb_card_id, 0x0, 0x80, true, 0x472c19ab75b11b5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::root_info_luid_t), "_CRYPT_SMART_CARD_ROOT_INFO.luid", luid, 0x80, 0x40, true, 0x8682772d14532a06)
#else
#define _m00
#define _m01
#endif