#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY.hContext", h_context, 0x0, 0x20, true, 0x50804f8af80ad8a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY.Priority", priority, 0x20, 0x20, true, 0xb3c82f64b2e9f5b)
#else
#define _m00
#define _m01
#endif