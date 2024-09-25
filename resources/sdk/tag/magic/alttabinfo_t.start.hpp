#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagALTTABINFO.cbSize", cb_size, 0x0, 0x20, true, 0xfd15563e9343e748)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.cItems", c_items, 0x20, 0x20, true, 0x42df411ca05029a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.cColumns", c_columns, 0x40, 0x20, true, 0xf658175c522daaad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.cRows", c_rows, 0x60, 0x20, true, 0x144e69d66ba7878)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.iColFocus", i_col_focus, 0x80, 0x20, true, 0xacc85839e3b72846)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.iRowFocus", i_row_focus, 0xa0, 0x20, true, 0xe1437b8763253aec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.cxItem", cx_item, 0xc0, 0x20, true, 0xb5e6f45ee8dfaf42)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagALTTABINFO.cyItem", cy_item, 0xe0, 0x20, true, 0xe7194fbf2f1f7197)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagALTTABINFO.ptStart", pt_start, 0x100, 0x40, true, 0xaa5e5b0acc532b93)
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