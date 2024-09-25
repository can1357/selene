#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_HISTORY_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x5f93b762884c5ed6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_HISTORY_INFO.HistoryBufferSize", history_buffer_size, 0x20, 0x20, true, 0x8ea2b9493a35ac87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_HISTORY_INFO.NumberOfHistoryBuffers", number_of_history_buffers, 0x40, 0x20, true, 0x6c571d6d8eff2ca0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_HISTORY_INFO.dwFlags", dw_flags, 0x60, 0x20, true, 0x70d4ba19cad96866)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif