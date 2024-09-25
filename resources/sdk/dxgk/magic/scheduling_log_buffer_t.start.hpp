#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::scheduling_log_header_t), "_DXGK_SCHEDULING_LOG_BUFFER.Header", header, 0x0, 0x0, true, 0x883acca25043e6f1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::scheduling_log_entry_t, 1>), "_DXGK_SCHEDULING_LOG_BUFFER.Entries", entries, 0x100, 0x0, true, 0x2e02e63f9a14f09c)
#else
#define _m00
#define _m01
#endif