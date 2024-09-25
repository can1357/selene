#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_tiny_t), "IMAGE_COR_ILMETHOD.Tiny", tiny, 0x0, 0x8, true, 0x31079a1a6a3377e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_fat_t), "IMAGE_COR_ILMETHOD.Fat", fat, 0x0, 0x60, true, 0xa93c105e55ae8e14)
#else
#define _m00
#define _m01
#endif