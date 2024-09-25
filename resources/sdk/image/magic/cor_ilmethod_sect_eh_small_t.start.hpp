#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::cor_ilmethod_sect_small_t), "IMAGE_COR_ILMETHOD_SECT_EH_SMALL.SectSmall", sect_small, 0x0, 0x10, true, 0x826e38f2d6c30198)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct image::cor_ilmethod_sect_eh_clause_small_t, 1>), "IMAGE_COR_ILMETHOD_SECT_EH_SMALL.Clauses", clauses, 0x20, 0x60, true, 0x193ffae6226de730)
#else
#define _m00
#define _m01
#endif