#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSHAREDPRIMARYHANDLE.hAdapter", h_adapter, 0x0, 0x20, true, 0x382319c9fba49204)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSHAREDPRIMARYHANDLE.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x1714b89c690cf36f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSHAREDPRIMARYHANDLE.hSharedPrimary", h_shared_primary, 0x40, 0x20, true, 0xe11eeb19be85951d)
#else
#define _m00
#define _m01
#define _m02
#endif