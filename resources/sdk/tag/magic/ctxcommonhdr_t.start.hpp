#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCTXCOMMONHDR.ContextId", context_id, 0x0, 0x80, true, 0x78e7df6212eb9f15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCTXCOMMONHDR.Flags", flags, 0x80, 0x20, true, 0xd5d5c4fea652d00b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCTXCOMMONHDR.dwNumExtents", dw_num_extents, 0xc0, 0x20, true, 0x5d00eba61e35fc6d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCTXCOMMONHDR.cbExtents", cb_extents, 0xe0, 0x20, true, 0x6395823a696d8e09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCTXCOMMONHDR.MshlFlags", mshl_flags, 0x100, 0x20, true, 0xe5d11f54fd3f5895)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif