#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::collection_desc_t*), "_HIDP_DEVICE_DESC.CollectionDesc", collection_desc, 0x0, 0x40, true, 0x298fa4d1197cf717)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDP_DEVICE_DESC.CollectionDescLength", collection_desc_length, 0x40, 0x20, true, 0xbed4e38464bdd23d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::report_ids_t*), "_HIDP_DEVICE_DESC.ReportIDs", report_i_ds, 0x80, 0x40, true, 0x1ad51c8dd63d27af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDP_DEVICE_DESC.ReportIDsLength", report_i_ds_length, 0xc0, 0x20, true, 0xa66cec25570f8e22)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::getcoldesc_dbg_t), "_HIDP_DEVICE_DESC.Dbg", dbg, 0xe0, 0x0, true, 0x7ec14c635e1af4b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif