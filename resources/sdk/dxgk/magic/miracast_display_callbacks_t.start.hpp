#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MIRACAST_DISPLAY_CALLBACKS.MiracastHandle", miracast_handle, 0x0, 0x40, true, 0x934df2772b6f02a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_miracast_send_message_t ), "_DXGK_MIRACAST_DISPLAY_CALLBACKS.DxgkCbMiracastSendMessage", dxgk_cb_miracast_send_message, 0x40, 0x40, true, 0xd00495e8f56efc51)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_miracast_report_chunk_info_t ), "_DXGK_MIRACAST_DISPLAY_CALLBACKS.DxgkCbReportChunkInfo", dxgk_cb_report_chunk_info, 0x80, 0x40, true, 0x39df4619014823d4)
#else
#define _m00
#define _m01
#define _m02
#endif