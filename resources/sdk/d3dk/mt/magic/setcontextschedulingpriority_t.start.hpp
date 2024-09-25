#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY.hContext", h_context, 0x0, 0x20, true, 0x6eef24abfcb187d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY.Priority", priority, 0x20, 0x20, true, 0x4b0ce6e862aa0645)
#else
#define _m00
#define _m01
#endif