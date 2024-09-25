#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::outputdupl_context_debug_status_t), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.Status", status, 0x0, 0x20, true, 0x33fa4a0eac008f21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.ProcessID", process_id, 0x40, 0x40, true, 0x68468bcceb29418a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.AccumulatedPresents", accumulated_presents, 0x80, 0x20, true, 0x8481957b8d7651e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.LastPresentTime", last_present_time, 0xc0, 0x40, true, 0xbd97014e15275f32)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.LastMouseTime", last_mouse_time, 0x100, 0x40, true, 0xb49d9dcee804c80d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 16>), "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.ProcessName", process_name, 0x140, 0x80, true, 0x8f7213cfb90749f8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif