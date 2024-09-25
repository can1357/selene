#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadlocaleinfostruct.refcount", refcount, 0x0, 0x20, true, 0x8f9d60491873b428)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "threadlocaleinfostruct.lc_codepage", lc_codepage, 0x20, 0x20, true, 0xb0d361baa5ee19a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "threadlocaleinfostruct.lc_collate_cp", lc_collate_cp, 0x40, 0x20, true, 0xddec238ac9b5d778)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "threadlocaleinfostruct.lc_handle", lc_handle, 0x60, 0xc0, true, 0x22b4fe480c8191e7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::lc_id_t, 6>), "threadlocaleinfostruct.lc_id", lc_id, 0x120, 0x20, true, 0xf1790affe1307f8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "threadlocaleinfostruct.lc_category.locale", locale, 0x0, 0x40, true, 0x20f3024c372a43fc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "threadlocaleinfostruct.lc_category.wlocale", wlocale, 0x40, 0x40, true, 0xcce31688438e8b67)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.lc_category.refcount", refcount, 0x80, 0x40, true, 0x3be28574372a6206)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.lc_category.wrefcount", wrefcount, 0xc0, 0x40, true, 0x85084507e86b3f10)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_lc_category_t, 6>), "threadlocaleinfostruct.lc_category", lc_category, 0x240, 0x0, true, 0xca1bbe12d9d46455)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadlocaleinfostruct.lc_clike", lc_clike, 0x840, 0x20, true, 0xf707a41510aa76ea)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadlocaleinfostruct.mb_cur_max", mb_cur_max, 0x860, 0x20, true, 0xb0b890953c587b0f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.lconv_intl_refcount", lconv_intl_refcount, 0x880, 0x40, true, 0xdd71692b6bcb79fa)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.lconv_num_refcount", lconv_num_refcount, 0x8c0, 0x40, true, 0xe4bc39cffe55aa6a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.lconv_mon_refcount", lconv_mon_refcount, 0x900, 0x40, true, 0x2073af8da365a465)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::lconv_t*), "threadlocaleinfostruct.lconv", lconv, 0x940, 0x40, true, 0xd629529ed877cc57)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "threadlocaleinfostruct.ctype1_refcount", ctype1_refcount, 0x980, 0x40, true, 0x7c2e70e0883885aa)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "threadlocaleinfostruct.ctype1", ctype1, 0x9c0, 0x40, true, 0x410a686ab43322f4)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t*), "threadlocaleinfostruct.pctype", pctype, 0xa00, 0x40, true, 0x68d5741ffca72033)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "threadlocaleinfostruct.pclmap", pclmap, 0xa40, 0x40, true, 0x250df443de5873ff)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "threadlocaleinfostruct.pcumap", pcumap, 0xa80, 0x40, true, 0x128fd4ea39054f0c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::lc_time_data_t*), "threadlocaleinfostruct.lc_time_curr", lc_time_curr, 0xac0, 0x40, true, 0x38ec87d9b186ba49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif