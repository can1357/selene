#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPQUEUEINFO.MaxHardwareFlipQueueLength", max_hardware_flip_queue_length, 0x0, 0x20, true, 0xc475aced25c9741c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPQUEUEINFO.MaxSoftwareFlipQueueLength", max_software_flip_queue_length, 0x20, 0x20, true, 0x66c60ff5275e63f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::flipinfoflags_t), "_D3DKMT_FLIPQUEUEINFO.FlipFlags", flip_flags, 0x40, 0x20, true, 0xb9e207d8bb62902b)
#else
#define _m00
#define _m01
#define _m02
#endif