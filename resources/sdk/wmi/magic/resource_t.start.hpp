#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_RESOURCE.AcquireTime", acquire_time, 0x0, 0x40, true, 0x29cf5bcf8695a7fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_RESOURCE.HoldTime", hold_time, 0x40, 0x40, true, 0x496c13c576f398f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_RESOURCE.WaitTime", wait_time, 0x80, 0x40, true, 0x24ab34a2cc12dd96)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_RESOURCE.MaxRecursionDepth", max_recursion_depth, 0xc0, 0x20, true, 0x39b82c30c046f8f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_RESOURCE.ThreadId", thread_id, 0xe0, 0x20, true, 0xeeaedaefcb81e655)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_RESOURCE.Resource", resource, 0x100, 0x40, true, 0xfab6d12d493dabfc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_RESOURCE.Action", action, 0x140, 0x20, true, 0xa11fe25abc15c771)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_RESOURCE.ContentionDelta", contention_delta, 0x160, 0x20, true, 0x8057363a2b57fbe7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif