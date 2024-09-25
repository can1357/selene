#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_media_media_specific_information_t*), "_NDIS_NBL_MEDIA_MEDIA_SPECIFIC_INFORMATION.NextEntry", next_entry, 0x0, 0x40, true, 0xfb29b0030c0bccdf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NBL_MEDIA_MEDIA_SPECIFIC_INFORMATION.Tag", tag, 0x40, 0x20, true, 0xc8e1f7f4c08ee951)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_NBL_MEDIA_MEDIA_SPECIFIC_INFORMATION.Data", data, 0x80, 0x8, true, 0x648edeba8a7d70cf)
#else
#define _m00
#define _m01
#define _m02
#endif