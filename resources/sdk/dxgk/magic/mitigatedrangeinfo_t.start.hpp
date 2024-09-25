#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MITIGATEDRANGEINFO.BasePageNumber", base_page_number, 0x0, 0x40, true, 0xf5678fde95538317)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MITIGATEDRANGEINFO.PageCount", page_count, 0x40, 0x20, true, 0xbe69393b4185c3e3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_MITIGATEDRANGEINFO.InterceptReads", intercept_reads, 0x60, 0x8, true, 0x3a6ef489f0c64c6f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_MITIGATEDRANGEINFO.InterceptWrites", intercept_writes, 0x68, 0x8, true, 0x588d46d8cb2b084f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif