#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MIRACAST_CAPS.MaxChunkPrivateDriverDataSize", max_chunk_private_driver_data_size, 0x0, 0x20, true, 0xc7e7da97d3785a2a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MIRACAST_CAPS.Flags.HdcpSupport", hdcp_support, 0x0, 0x1, true, 0x7b67c1331c84ce43, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MIRACAST_CAPS.Flags.Value", value, 0x0, 0x20, true, 0x9dfba5f308665cd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_DXGK_MIRACAST_CAPS.Flags", flags, 0x20, 0x20, true, 0x2feca34d27af2af8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif