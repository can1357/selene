#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_LSN.offset.idxRecord", idx_record, 0x0, 0x20, true, 0x73cb49a05caa1cf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_LSN.offset.cidContainer", cid_container, 0x20, 0x20, true, 0x5f22bd2f2175c827)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_offset_t), "_CLS_LSN.offset", offset, 0x0, 0x40, true, 0xa403df2e2de885d0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_LSN.ullOffset", ull_offset, 0x0, 0x40, true, 0xc68229fac562cd90)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_LSN.Internal", internal, 0x0, 0x40, true, 0xef7bf81cc5f97f73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif