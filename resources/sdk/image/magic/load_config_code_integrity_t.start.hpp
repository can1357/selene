#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_CODE_INTEGRITY.Flags", flags, 0x0, 0x10, true, 0xc248cb4d3ed7b27c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_CODE_INTEGRITY.Catalog", catalog, 0x10, 0x10, true, 0x413fd24af5daeb20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_CODE_INTEGRITY.CatalogOffset", catalog_offset, 0x20, 0x20, true, 0xae49911081416b77)
#else
#define _m00
#define _m01
#define _m02
#endif