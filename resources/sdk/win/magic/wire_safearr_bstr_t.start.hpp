#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_BSTR.Size", size, 0x0, 0x20, true, 0xf86c1d607fea2417)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::flagged_word_blob_t**), "_wireSAFEARR_BSTR.aBstr", a_bstr, 0x40, 0x40, true, 0xc7d0782e71e1bbaf)
#else
#define _m00
#define _m01
#endif