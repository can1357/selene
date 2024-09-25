#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPI2CIOTRANSMISSION.Read", read, 0x0, 0x1, true, 0xe2e1d74b2e160176, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPI2CIOTRANSMISSION.Write", write, 0x1, 0x1, true, 0xeb63c2af6813c4e1, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPI2CIOTRANSMISSION.EDDCMode", eddc_mode, 0x2, 0x1, true, 0x9c161972e69d704a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXGKARG_DPI2CIOTRANSMISSION.OffsetSizeInBytes", offset_size_in_bytes, 0x3, 0x3, true, 0x370a662701fa16d1, 3, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPI2CIOTRANSMISSION.CanUseCachedData", can_use_cached_data, 0x6, 0x1, true, 0x77d58c8dede402f7, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.RootPortIndex", root_port_index, 0x20, 0x20, true, 0x78062c2ad22a6240)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.I2CAddress", i2c_address, 0x40, 0x20, true, 0x53b3b4dabe244cf4)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_DXGKARG_DPI2CIOTRANSMISSION.WordOffset", word_offset, 0x60, 0x8, true, 0xee33b45ee65c29b9, 8, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXGKARG_DPI2CIOTRANSMISSION.SegmentPointer", segment_pointer, 0x68, 0x7, true, 0xcb0a5578c78741cb, 7, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.Offset", offset, 0x60, 0x20, true, 0x31e7cadbbc6de509)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.BufferSizeSupplied", buffer_size_supplied, 0x80, 0x20, true, 0x3a2b1b5d975cae28)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.BytesToWrite", bytes_to_write, 0xa0, 0x20, true, 0x9ecc4c5f7e0ef9c1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.BytesToRead", bytes_to_read, 0xc0, 0x20, true, 0x315af5d862e2dafe)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.DPNativeError", dp_native_error, 0xe0, 0x20, true, 0x73acbcae7674655a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.BytesWritten", bytes_written, 0x100, 0x20, true, 0x82e93a8ffc7d0aea)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPI2CIOTRANSMISSION.BytesRead", bytes_read, 0x120, 0x20, true, 0x57223f6db062dcb3)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DXGKARG_DPI2CIOTRANSMISSION.Data", data, 0x140, 0x8, true, 0x66383bb17dcee243)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif