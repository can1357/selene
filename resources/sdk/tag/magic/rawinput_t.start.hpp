#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rawinputheader_t), "tagRAWINPUT.header", header, 0x0, 0xc0, true, 0x120334b0ff4802d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rawmouse_t), "tagRAWINPUT.data.mouse", mouse, 0x0, 0xc0, true, 0xec2f05a243265128)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rawkeyboard_t), "tagRAWINPUT.data.keyboard", keyboard, 0x0, 0x80, true, 0x8cae5fec06460963)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rawhid_t), "tagRAWINPUT.data.hid", hid, 0x0, 0x60, true, 0xeca4e8ea5b51af19)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "tagRAWINPUT.data", data, 0xc0, 0xc0, true, 0xa271bd9bdf947294)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif