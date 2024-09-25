#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.Version", version, 0x0, 0x20, true, 0x6d1005d149eb74c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.Size", size, 0x20, 0x20, true, 0x6d25b3e006cc0bba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.SequenceNumber", sequence_number, 0x40, 0x20, true, 0x11ac1409f894f208)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.BaseImageList", base_image_list, 0x60, 0x20, true, 0x80825a4bd0cbf77d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.BaseImageCount", base_image_count, 0x80, 0x20, true, 0x875bb992eae0030a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.BufferOffset", buffer_offset, 0xa0, 0x20, true, 0xfa968b897866b3fa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HOT_PATCH_INFO.ExtraPatchSize", extra_patch_size, 0xc0, 0x20, true, 0xe965f78c35873439)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif