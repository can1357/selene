#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_CREATEKEYEDMUTEX2.InitialValue", initial_value, 0x0, 0x40, true, 0x1f8f6331599d9384)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEKEYEDMUTEX2.hSharedHandle", h_shared_handle, 0x40, 0x20, true, 0xf880d454f5204677)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEKEYEDMUTEX2.hKeyedMutex", h_keyed_mutex, 0x60, 0x20, true, 0xe230d25d78870fdc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEKEYEDMUTEX2.pPrivateRuntimeData", p_private_runtime_data, 0x80, 0x40, true, 0x33bad627316ee136)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEKEYEDMUTEX2.PrivateRuntimeDataSize", private_runtime_data_size, 0xc0, 0x20, true, 0x9637b13a9085f9c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::createkeyedmutex2_flags_t), "_D3DKMT_CREATEKEYEDMUTEX2.Flags", flags, 0xe0, 0x20, true, 0x17c8fa6562201777)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif