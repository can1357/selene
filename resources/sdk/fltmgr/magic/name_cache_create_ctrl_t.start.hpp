#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_CREATE_CTRL.Flags", flags, 0x0, 0x20, true, 0x9d8976c40de24e3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NAME_CACHE_CREATE_CTRL.ErrorStatus", error_status, 0x20, 0x20, true, 0x61c45583211f5f1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_NAME_CACHE_CREATE_CTRL.ErrorInstance", error_instance, 0x40, 0x40, true, 0xc80bb367516692b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_NAME_CACHE_CREATE_CTRL.CompletingInstance", completing_instance, 0x80, 0x40, true, 0xfedaaa0ddec9a25b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_t), "_NAME_CACHE_CREATE_CTRL.NormalizedNameCache", normalized_name_cache, 0xc0, 0x80, true, 0x4bd7639c22b1615d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_t), "_NAME_CACHE_CREATE_CTRL.OpenedNameCache", opened_name_cache, 0x140, 0x80, true, 0x509985c8b2d756db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif