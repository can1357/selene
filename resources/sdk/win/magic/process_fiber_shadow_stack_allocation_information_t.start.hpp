#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.ReserveSize", reserve_size, 0x0, 0x40, true, 0x53c8417738919f9f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.CommitSize", commit_size, 0x40, 0x40, true, 0xd3ac573abff4c026)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.PreferredNode", preferred_node, 0x80, 0x20, true, 0x2423bc0640911ccf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.Ssp", ssp, 0xc0, 0x40, true, 0xcff61ac78063035d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif