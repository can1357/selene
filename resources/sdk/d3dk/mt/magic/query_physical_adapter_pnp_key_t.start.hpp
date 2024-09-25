#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x525884e0ea989c14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::pnp_key_type_t), "_D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY.PnPKeyType", pn_p_key_type, 0x20, 0x20, true, 0x8113ab77f51ce13a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY.pDest", p_dest, 0x40, 0x40, true, 0x190cbe58056f630d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY.pCchDest", p_cch_dest, 0x80, 0x40, true, 0x448af442f359ff3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif