#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SendMessageToClassicSTAParams.dwThreadIdClassicSTA", dw_thread_id_classic_sta, 0x0, 0x20, true, 0x5a0770ea50d014ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::send_message_to_classic_sta_reason_t), "SendMessageToClassicSTAParams.reason", reason, 0x20, 0x20, true, 0x107f999c72b4b65f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "SendMessageToClassicSTAParams.hWnd", h_wnd, 0x40, 0x40, true, 0x75f5bd2ff850281a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SendMessageToClassicSTAParams.Msg", msg, 0x80, 0x20, true, 0x5e91290753301a32)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "SendMessageToClassicSTAParams.wParam", w_param, 0xc0, 0x40, true, 0xd26b030fe1d73892)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "SendMessageToClassicSTAParams.lParam", l_param, 0x100, 0x40, true, 0xeb91ae8143be2eac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SendMessageToClassicSTAParams.hEventSendMessageDone", h_event_send_message_done, 0x140, 0x40, true, 0x4706363acecaac80)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "SendMessageToClassicSTAParams.hrSendMessage", hr_send_message, 0x180, 0x20, true, 0xcb46accc927c884f)
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