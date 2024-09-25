#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPAUXIOTRANSMISSION.Write", write, 0x0, 0x1, true, 0x536bbfac340c646a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPAUXIOTRANSMISSION.CanUseCachedData", can_use_cached_data, 0x1, 0x1, true, 0xb8878f03066dbb42, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPAUXIOTRANSMISSION.RootPortIndex", root_port_index, 0x20, 0x20, true, 0xceba29221a87978e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPAUXIOTRANSMISSION.DPCDAddress", dpcd_address, 0x40, 0x20, true, 0xa852f92a82103afe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_DPAUXIOTRANSMISSION.NumBytesRequested", num_bytes_requested, 0x60, 0x8, true, 0x4c1c0001da28c0c9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPAUXIOTRANSMISSION.DPNativeError", dp_native_error, 0x80, 0x20, true, 0xc49fc40b590d009d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_DPAUXIOTRANSMISSION.NumBytesDone", num_bytes_done, 0xa0, 0x8, true, 0x1f0aa676e75ceffb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXGKARG_DPAUXIOTRANSMISSION.Data", data, 0xa8, 0x80, true, 0x58f5cad55bcd452d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif