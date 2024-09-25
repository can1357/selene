#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTSIZEINFO.DedicatedVideoMemorySize", dedicated_video_memory_size, 0x0, 0x40, true, 0x1e6c2bfe9775daa5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTSIZEINFO.DedicatedSystemMemorySize", dedicated_system_memory_size, 0x40, 0x40, true, 0xfdfa8901acaea85e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTSIZEINFO.SharedSystemMemorySize", shared_system_memory_size, 0x80, 0x40, true, 0x6cf51878299483c4)
#else
#define _m00
#define _m01
#define _m02
#endif