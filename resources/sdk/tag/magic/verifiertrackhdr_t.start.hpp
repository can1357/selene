#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "tagVERIFIERTRACKHDR.list", list, 0x0, 0x80, true, 0x8bef2855a8e40d02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagVERIFIERTRACKHDR.ulSize", ul_size, 0x80, 0x40, true, 0x5911923d877c26be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVERIFIERTRACKHDR.ulTag", ul_tag, 0xc0, 0x20, true, 0xf436001192c7819d)
#else
#define _m00
#define _m01
#define _m02
#endif