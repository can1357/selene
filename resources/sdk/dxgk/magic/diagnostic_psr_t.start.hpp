#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_header_t), "_DXGK_DIAGNOSTIC_PSR.Header", header, 0x0, 0xa0, true, 0x324b81bfaf384325)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::diagnostic_psr_refresh_reason_t), "_DXGK_DIAGNOSTIC_PSR.RefreshReason", refresh_reason, 0xa0, 0x20, true, 0xba4ad46ef3979989)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_PSR.Value", value, 0xa0, 0x20, true, 0x10bbeb95e963dfc7)
#else
#define _m00
#define _m01
#define _m02
#endif