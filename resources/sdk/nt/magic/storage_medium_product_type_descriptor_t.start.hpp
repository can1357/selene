#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x57fd178abf7fb778)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x8d1a85c333e030c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR.MediumProductType", medium_product_type, 0x40, 0x20, true, 0x276e5e98acda7d8e)
#else
#define _m00
#define _m01
#define _m02
#endif