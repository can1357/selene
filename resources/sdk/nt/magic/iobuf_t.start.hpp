#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_iobuf._ptr", ptr, 0x0, 0x40, true, 0xfdeab4db6550f36a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_iobuf._cnt", cnt, 0x40, 0x20, true, 0x764c3c4b4391193)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_iobuf._base", base, 0x80, 0x40, true, 0x997b84747f1477b8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_iobuf._flag", flag, 0xc0, 0x20, true, 0x70530add424b08b6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_iobuf._file", file, 0xe0, 0x20, true, 0xc77c521181500db4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_iobuf._charbuf", charbuf, 0x100, 0x20, true, 0x4631574b9f91e660)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_iobuf._bufsiz", bufsiz, 0x120, 0x20, true, 0x3b1fd676ba74ee6c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_iobuf._tmpfname", tmpfname, 0x140, 0x40, true, 0x258199b8ed6fe28d)
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