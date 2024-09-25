#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_CLASSPNP_SCAN_FOR_SPECIAL_INFO.VendorId", vendor_id, 0x0, 0x40, true, 0x5e4ddc330c92feb0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_CLASSPNP_SCAN_FOR_SPECIAL_INFO.ProductId", product_id, 0x40, 0x40, true, 0xd5b7fbb3581f2955)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_CLASSPNP_SCAN_FOR_SPECIAL_INFO.ProductRevision", product_revision, 0x80, 0x40, true, 0xfe35c28c5df2eaa3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLASSPNP_SCAN_FOR_SPECIAL_INFO.Data", data, 0xc0, 0x40, true, 0x82af1b39557bc325)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif