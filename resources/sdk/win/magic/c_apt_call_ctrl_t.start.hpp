#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CAptCallCtrl._fInMsgFilter", f_in_msg_filter, 0x0, 0x20, true, 0xdf0255f89248f04d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_cli_modal_loop_t*), "CAptCallCtrl._pTopCML", p_top_cml, 0x40, 0x40, true, 0x4ee885ed3e6902c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::s_window_data_t, 2>), "CAptCallCtrl._WD", wd, 0x80, 0x0, true, 0x4f3ad567b32c4b10)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_message_filter_t*), "CAptCallCtrl._pMF", p_mf, 0x0, 0x0, false, 0xf8c75a3975effe53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif