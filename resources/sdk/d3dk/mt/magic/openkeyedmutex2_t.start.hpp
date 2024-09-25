#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEX2.hSharedHandle", h_shared_handle, 0x0, 0x20, true, 0x1635411393c8b52b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEX2.hKeyedMutex", h_keyed_mutex, 0x20, 0x20, true, 0xe4844dd56b5b26ac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENKEYEDMUTEX2.pPrivateRuntimeData", p_private_runtime_data, 0x40, 0x40, true, 0x9ddc053882710a43)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEX2.PrivateRuntimeDataSize", private_runtime_data_size, 0x80, 0x20, true, 0x80765b6b3d72eea8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif