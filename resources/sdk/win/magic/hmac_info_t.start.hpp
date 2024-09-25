#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HMAC_Info.HashAlgid", hash_algid, 0x0, 0x20, true, 0x24d2042eb9668b68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HMAC_Info.pbInnerString", pb_inner_string, 0x40, 0x40, true, 0x1afe9159f3ed50b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HMAC_Info.cbInnerString", cb_inner_string, 0x80, 0x20, true, 0x7dbe6b6a008acd82)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HMAC_Info.pbOuterString", pb_outer_string, 0xc0, 0x40, true, 0xeb896134d900c362)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HMAC_Info.cbOuterString", cb_outer_string, 0x100, 0x20, true, 0x96f7dc65357c0d09)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif