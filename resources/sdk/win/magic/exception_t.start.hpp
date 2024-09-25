#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_exception.type", type, 0x0, 0x20, true, 0xf2f5a4da2b1982a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_exception.name", name, 0x40, 0x40, true, 0x99bc8f14d7d00dad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_exception.arg1", arg1, 0x80, 0x40, true, 0xed7ec7cf335746a5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_exception.arg2", arg2, 0xc0, 0x40, true, 0xa8e7b0e440323fad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_exception.retval", retval, 0x100, 0x40, true, 0x7848bd0ba6900ab9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif