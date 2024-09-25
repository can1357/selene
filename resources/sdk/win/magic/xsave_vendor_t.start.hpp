#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_XSAVE_VENDOR.VendorId", vendor_id, 0x0, 0x60, true, 0xa97b9284a75eca95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::xsave_supported_cpu_t), "_XSAVE_VENDOR.SupportedCpu", supported_cpu, 0x80, 0x40, true, 0x960fc294795ad19c)
#else
#define _m00
#define _m01
#endif