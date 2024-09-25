#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_CREATEKEYEDMUTEX.InitialValue", initial_value, 0x0, 0x40, true, 0xc7af5bcc911d5744)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEKEYEDMUTEX.hSharedHandle", h_shared_handle, 0x40, 0x20, true, 0xb69ea461d79f897c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEKEYEDMUTEX.hKeyedMutex", h_keyed_mutex, 0x60, 0x20, true, 0xdde6f27aa6c47fac)
#else
#define _m00
#define _m01
#define _m02
#endif