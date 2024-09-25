#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEDIA_SPECIFIC_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xe661adf980cba100)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::class_id_t), "_MEDIA_SPECIFIC_INFORMATION.ClassId", class_id, 0x20, 0x20, true, 0xcb394e4c39d61158)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEDIA_SPECIFIC_INFORMATION.Size", size, 0x40, 0x20, true, 0x37a8be07df4bae0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MEDIA_SPECIFIC_INFORMATION.ClassInformation", class_information, 0x60, 0x8, true, 0x321d8d970a615411)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif