#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY.hContext", h_context, 0x0, 0x20, true, 0x26a413ab9b230b9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY.Priority", priority, 0x20, 0x20, true, 0x53d8339bb6ed01a5)
#else
#define _m00
#define _m01
#endif