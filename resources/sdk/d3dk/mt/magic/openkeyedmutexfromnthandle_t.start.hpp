#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE.hNtHandle", h_nt_handle, 0x0, 0x40, true, 0x927947179a6d1e90)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE.hKeyedMutex", h_keyed_mutex, 0x40, 0x20, true, 0x914f1cdf741e2f36)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE.pPrivateRuntimeData", p_private_runtime_data, 0x80, 0x40, true, 0x77dbc764100d2747)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE.PrivateRuntimeDataSize", private_runtime_data_size, 0xc0, 0x20, true, 0x3ac78f1ad79979e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif