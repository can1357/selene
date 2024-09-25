#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMOUSEINPUT.dx", dx, 0x0, 0x20, true, 0xd238b688dd7e5a7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMOUSEINPUT.dy", dy, 0x20, 0x20, true, 0x7a081a448af02bbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEINPUT.mouseData", mouse_data, 0x40, 0x20, true, 0x9832325f4986c700)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEINPUT.dwFlags", dw_flags, 0x60, 0x20, true, 0x8283d150aee6fccf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEINPUT.time", time, 0x80, 0x20, true, 0xdeba339685ae57a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMOUSEINPUT.dwExtraInfo", dw_extra_info, 0xc0, 0x40, true, 0x36c9bba74c183122)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif