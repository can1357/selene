#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWTEXTPARAMS.cbSize", cb_size, 0x0, 0x20, true, 0xe1f63b5758bdd8c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagDRAWTEXTPARAMS.iTabLength", i_tab_length, 0x20, 0x20, true, 0x4408746544a2590f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagDRAWTEXTPARAMS.iLeftMargin", i_left_margin, 0x40, 0x20, true, 0xff37e4e1bebc7522)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagDRAWTEXTPARAMS.iRightMargin", i_right_margin, 0x60, 0x20, true, 0x96070e66224f5aef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWTEXTPARAMS.uiLengthDrawn", ui_length_drawn, 0x80, 0x20, true, 0x221b241cc787de70)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif