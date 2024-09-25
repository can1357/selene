#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIRTUALGPUVMBUS.VirtualGpuIndex", virtual_gpu_index, 0x0, 0x20, true, 0x53efcad48aa8f8d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETVIRTUALGPUVMBUS.VmBusHandle", vm_bus_handle, 0x40, 0x40, true, 0xef48f5a1ff730a87)
#else
#define _m00
#define _m01
#endif