#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PAGETABLEUPDATEADDRESS.CpuVirtual", cpu_virtual, 0x0, 0x40, true, 0xa71fcc0ff053ee21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dgpu_physical_address_t), "_DXGK_PAGETABLEUPDATEADDRESS.GpuPhysical", gpu_physical, 0x0, 0x80, true, 0x2297cc09dd64cfaa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_PAGETABLEUPDATEADDRESS.GpuVirtual", gpu_virtual, 0x0, 0x40, true, 0x1660a36f33c2c5de)
#else
#define _m00
#define _m01
#define _m02
#endif