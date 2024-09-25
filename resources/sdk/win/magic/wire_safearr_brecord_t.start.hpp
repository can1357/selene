#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_BRECORD.Size", size, 0x0, 0x20, true, 0xa4885842d96eb7de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_brecord_t**), "_wireSAFEARR_BRECORD.aRecord", a_record, 0x40, 0x40, true, 0xdf0bb558d35cf17)
#else
#define _m00
#define _m01
#endif