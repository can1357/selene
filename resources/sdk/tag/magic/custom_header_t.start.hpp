#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomHeader.totalSize", total_size, 0x0, 0x20, true, 0x458385c65cc22185)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomHeader.headerSize", header_size, 0x20, 0x20, true, 0x3351c5eccb48c089)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomHeader.cOpaqueData", c_opaque_data, 0x40, 0x20, true, 0x49baace00e80c99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomHeader.destCtx", dest_ctx, 0x60, 0x20, true, 0x42d407a958d6c5c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomHeader.cIfs", c_ifs, 0x80, 0x20, true, 0xf3a708c5efa28233)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCustomHeader.classInfoClsid", class_info_clsid, 0xa0, 0x80, true, 0x80369d16ed0fbc6b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagCustomHeader.pclsid", pclsid, 0x140, 0x40, true, 0xf8b031cf78e2b519)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagCustomHeader.pSizes", p_sizes, 0x180, 0x40, true, 0xc0138a2b06a43b0e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_opaque_data_t*), "tagCustomHeader.opaqueData", opaque_data, 0x1c0, 0x40, true, 0xab360114ce83e8c9)
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
#endif