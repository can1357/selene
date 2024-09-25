#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY.hAdapter", h_adapter, 0x0, 0x20, true, 0xb07dcc83b01a859)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY.Recovered", recovered, 0x20, 0x20, true, 0x1081271c0231c9f2)
#else
#define _m00
#define _m01
#endif