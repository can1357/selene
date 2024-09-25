#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_cdma_encoding_t), "_WWAN_SMS_SEND_CDMA.EncodingId", encoding_id, 0x0, 0x20, true, 0x6acdd1ad6abecd60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_cdma_lang_t), "_WWAN_SMS_SEND_CDMA.LanguageId", language_id, 0x20, 0x20, true, 0xdaa9524772e92701)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 50>), "_WWAN_SMS_SEND_CDMA.Address", address, 0x40, 0x90, true, 0xf6fd870c06a13698)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WWAN_SMS_SEND_CDMA.SizeInBytes", size_in_bytes, 0x1d0, 0x10, true, 0x18325cc15d54bce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WWAN_SMS_SEND_CDMA.SizeInCharacters", size_in_characters, 0x1e0, 0x8, true, 0xf833f1041dd0ff75)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 160>), "_WWAN_SMS_SEND_CDMA.EncodedMsg", encoded_msg, 0x1e8, 0x0, true, 0xa5401576f1ebe333)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif