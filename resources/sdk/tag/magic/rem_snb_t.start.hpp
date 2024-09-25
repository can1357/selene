#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSNB.ulCntStr", ul_cnt_str, 0x0, 0x20, true, 0xd647e5a2b834e062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemSNB.ulCntChar", ul_cnt_char, 0x20, 0x20, true, 0xad1740c78f7ec50f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "tagRemSNB.rgString", rg_string, 0x40, 0x10, true, 0x82b9b7add1243670)
#else
#define _m00
#define _m01
#define _m02
#endif