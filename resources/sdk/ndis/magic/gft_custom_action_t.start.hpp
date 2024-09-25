#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_CUSTOM_ACTION.Header", header, 0x0, 0x20, true, 0xfa691e5423f5a1c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION.Flags", flags, 0x20, 0x20, true, 0x1b9bdef6160f24f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION.ProfileId", profile_id, 0x40, 0x20, true, 0xa05f45d7b42e1317)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION.Type", type, 0x60, 0x20, true, 0x9f59ce912f76c404)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION.Length", length, 0x80, 0x20, true, 0xabe866172633d7ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_CUSTOM_ACTION.Alignment", alignment, 0xc0, 0x40, true, 0x529c663238f8b4b6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_GFT_CUSTOM_ACTION.ActionData", action_data, 0xc0, 0x8, true, 0xc1624328da934415)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif