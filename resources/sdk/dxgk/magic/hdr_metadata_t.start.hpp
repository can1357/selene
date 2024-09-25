#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::hdr_metadata_type_t), "_DXGK_HDR_METADATA.Type", type, 0x0, 0x20, true, 0x2793cfe6fdae448c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HDR_METADATA.Size", size, 0x20, 0x20, true, 0x9b4d6babac464d6e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_HDR_METADATA.pMetaData", p_meta_data, 0x40, 0x40, true, 0x2559ae982d9833aa)
#else
#define _m00
#define _m01
#define _m02
#endif