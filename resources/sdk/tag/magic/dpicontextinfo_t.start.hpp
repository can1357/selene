#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDPICONTEXTINFO.dpiContext", dpi_context, 0x0, 0x20, true, 0x4149f9d1e1dd7ff5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDPICONTEXTINFO.fDirty", f_dirty, 0x20, 0x20, true, 0x47c79781f71d1999)
#else
#define _m00
#define _m01
#endif