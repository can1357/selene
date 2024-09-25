#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_fdo_t*), "FxFilteredStartContext.PkgFdo", pkg_fdo, 0x0, 0x40, true, 0x3ab5507f0e355ee0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "FxFilteredStartContext.ResourcesRaw", resources_raw, 0x40, 0x40, true, 0x83f04922ba5d361e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "FxFilteredStartContext.ResourcesTranslated", resources_translated, 0x80, 0x40, true, 0x1880fcf446186c7a)
#else
#define _m00
#define _m01
#define _m02
#endif