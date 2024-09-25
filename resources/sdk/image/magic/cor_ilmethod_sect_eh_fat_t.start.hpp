#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_sect_fat_t), "IMAGE_COR_ILMETHOD_SECT_EH_FAT.SectFat", sect_fat, 0x0, 0x20, true, 0x2a9d032986c57d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct image::cor_ilmethod_sect_eh_clause_fat_t, 1>), "IMAGE_COR_ILMETHOD_SECT_EH_FAT.Clauses", clauses, 0x20, 0xc0, true, 0x49b0a637e230e4da)
#else
#define _m00
#define _m01
#endif