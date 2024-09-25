#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_HAVEIID.Size", size, 0x0, 0x20, true, 0xac23653d40f768a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "_wireSAFEARR_HAVEIID.apUnknown", ap_unknown, 0x40, 0x40, true, 0xbd42241518ffeba2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_wireSAFEARR_HAVEIID.iid", iid, 0x80, 0x80, true, 0xb587a49ea95a1570)
#else
#define _m00
#define _m01
#define _m02
#endif