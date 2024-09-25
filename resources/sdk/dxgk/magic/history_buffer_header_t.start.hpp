#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HISTORY_BUFFER_HEADER.RenderCbSequence", render_cb_sequence, 0x0, 0x20, true, 0x20a38174a7281a48)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HISTORY_BUFFER_HEADER.NumTimestamps", num_timestamps, 0x20, 0x20, true, 0xb27708ad66f308f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HISTORY_BUFFER_HEADER.PrivateDataSize", private_data_size, 0x40, 0x20, true, 0xbf66b0d53b00a629)
#else
#define _m00
#define _m01
#define _m02
#endif