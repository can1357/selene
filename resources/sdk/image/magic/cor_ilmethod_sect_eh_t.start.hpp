#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_sect_eh_small_t), "IMAGE_COR_ILMETHOD_SECT_EH.Small", small, 0x0, 0x80, true, 0xb6a3713e89da3f10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_sect_eh_fat_t), "IMAGE_COR_ILMETHOD_SECT_EH.Fat", fat, 0x0, 0xe0, true, 0x467c5219bcd43b4c)
#else
#define _m00
#define _m01
#endif