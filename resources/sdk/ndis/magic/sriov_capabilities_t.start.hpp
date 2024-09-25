#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SRIOV_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xc4faa19073c49690)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SRIOV_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0x11a665a99b3f3f20)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SRIOV_CAPABILITIES.SriovCapabilities", sriov_capabilities, 0x40, 0x20, true, 0x74177547c1d9e7a8)
#else
#define _m00
#define _m01
#define _m02
#endif