#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL.NameFormat", name_format, 0x0, 0x20, true, 0xa95d7111741ae824)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_root_t), "_NAME_CACHE_LIST_CTRL.List", list, 0x40, 0x40, true, 0xf9de29fd09bce27f)
#else
#define _m00
#define _m01
#endif