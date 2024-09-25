#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEX.hSharedHandle", h_shared_handle, 0x0, 0x20, true, 0x3522ffde34fe11ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENKEYEDMUTEX.hKeyedMutex", h_keyed_mutex, 0x20, 0x20, true, 0x3037d990b110d0ff)
#else
#define _m00
#define _m01
#endif