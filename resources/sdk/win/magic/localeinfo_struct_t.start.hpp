#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::threadlocaleinfostruct_t*), "localeinfo_struct.locinfo", locinfo, 0x0, 0x40, true, 0x23c85577ab9b7be7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::threadmbcinfostruct_t*), "localeinfo_struct.mbcinfo", mbcinfo, 0x40, 0x40, true, 0xde28cb69e6c878ee)
#else
#define _m00
#define _m01
#endif