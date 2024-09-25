#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_reply_header_t), "_WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY.Header", header, 0x0, 0x20, true, 0x525b19bee7818378)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY.ProcessHandle", process_handle, 0x40, 0x40, true, 0xc012cecc2f7faa07)
#else
#define _m00
#define _m01
#endif