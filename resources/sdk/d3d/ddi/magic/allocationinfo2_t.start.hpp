#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO2.hAllocation", h_allocation, 0x0, 0x20, true, 0x94cb1ac0f2afdb23)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_ALLOCATIONINFO2.hSection", h_section, 0x40, 0x40, true, 0xd711e73b4ed5081)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DDDI_ALLOCATIONINFO2.pSystemMem", p_system_mem, 0x40, 0x40, true, 0x5e54be689e658c2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_ALLOCATIONINFO2.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0xd053cf9bb7e4e2bd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO2.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0x19642a4c6290a0ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO2.VidPnSourceId", vid_pn_source_id, 0xe0, 0x20, true, 0x33ea83009b532c59)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONINFO2.Flags.Primary", primary, 0x0, 0x1, true, 0x8e2e21e2da02bf7f, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONINFO2.Flags.Stereo", stereo, 0x1, 0x1, true, 0xbd87f39cd856aad9, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONINFO2.Flags.OverridePriority", override_priority, 0x2, 0x1, true, 0x4e72ff830dc1ea40, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO2.Flags.Value", value, 0x0, 0x20, true, 0x97f390c7d28f124a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DDDI_ALLOCATIONINFO2.Flags", flags, 0x100, 0x20, true, 0x37cb3957f2f3b5cc)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_ALLOCATIONINFO2.GpuVirtualAddress", gpu_virtual_address, 0x140, 0x40, true, 0x5cf298d8a2d32e6f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO2.Priority", priority, 0x180, 0x20, true, 0x821ba9e88df82c5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif