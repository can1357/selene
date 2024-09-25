#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::history_buffer_t*), "_DXGKARG_FORMATHISTORYBUFFER.pHistoryBuffer", p_history_buffer, 0x0, 0x40, true, 0x466bbe5799d36052)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FORMATHISTORYBUFFER.HistoryBufferSize", history_buffer_size, 0x40, 0x20, true, 0x97ad35ea20eae26a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_FORMATHISTORYBUFFER.pFormattedBuffer", p_formatted_buffer, 0x80, 0x40, true, 0x429bf1ba6b26893e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FORMATHISTORYBUFFER.FormattedBufferSize", formatted_buffer_size, 0xc0, 0x20, true, 0xf4fecc1702c4c2d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FORMATHISTORYBUFFER.NumTimestamps", num_timestamps, 0xe0, 0x20, true, 0x798a7ec43004c6c2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::arg::historybufferprecision_t), "_DXGKARG_FORMATHISTORYBUFFER.Precision", precision, 0x100, 0x20, true, 0xe7c01f4f306df880)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FORMATHISTORYBUFFER.Offset", offset, 0x120, 0x20, true, 0x2a6e1a44a631a81f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif