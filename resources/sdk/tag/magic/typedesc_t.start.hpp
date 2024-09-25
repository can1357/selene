#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::typedesc_t*), "tagTYPEDESC.lptdesc", lptdesc, 0x0, 0x40, true, 0x57440994809035d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::arraydesc_t*), "tagTYPEDESC.lpadesc", lpadesc, 0x0, 0x40, true, 0x9ad1ddbb64e0ae42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTYPEDESC.hreftype", hreftype, 0x0, 0x20, true, 0x337101f3e75e60cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEDESC.vt", vt, 0x40, 0x10, true, 0xce7d4c92626612fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif