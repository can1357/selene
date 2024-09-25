#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETSTABLEPOWERSTATE.hAdapter", h_adapter, 0x0, 0x20, true, 0xb3955a24044d8111)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_SETSTABLEPOWERSTATE.Enabled", enabled, 0x20, 0x20, true, 0x937d8f2f05c0e709)
#else
#define _m00
#define _m01
#endif