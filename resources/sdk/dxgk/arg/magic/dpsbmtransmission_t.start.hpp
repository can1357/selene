#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DPSBMTRANSMISSION.CanUseCachedData", can_use_cached_data, 0x0, 0x1, true, 0x2792282c1c363e74, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.RootPortIndex", root_port_index, 0x20, 0x20, true, 0xb6fb8ab02b513415)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.BufferSizeSupplied", buffer_size_supplied, 0x40, 0x20, true, 0x99db6e5c19c44170)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.RequestLength", request_length, 0x60, 0x20, true, 0xea6c95cc714421fc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.MaxReplyLength", max_reply_length, 0x80, 0x20, true, 0xa162a8c2d952102a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.DPNativeError", dp_native_error, 0xa0, 0x20, true, 0xb5980041ee22da0e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DPSBMTRANSMISSION.ActualReplyLength", actual_reply_length, 0xc0, 0x20, true, 0x88fd126e9519843d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DXGKARG_DPSBMTRANSMISSION.Data", data, 0xe0, 0x8, true, 0x30fc3e3f52ebcb9)
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