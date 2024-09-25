#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FULL_PTR_XLAT_TABLES.RefIdToPointer", ref_id_to_pointer, 0x0, 0x40, true, 0x5f2da5e3c6ca1c99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FULL_PTR_XLAT_TABLES.PointerToRefId", pointer_to_ref_id, 0x40, 0x40, true, 0x475a10b6a62fa0ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FULL_PTR_XLAT_TABLES.NextRefId", next_ref_id, 0x80, 0x20, true, 0x865fa39dfe58d6d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::xlat_side_t), "_FULL_PTR_XLAT_TABLES.XlatSide", xlat_side, 0xa0, 0x20, true, 0x99f4a84d3f9807af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif