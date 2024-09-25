#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "__std_exception_data._What", what, 0x0, 0x40, true, 0x1cd12548b7e20ea6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "__std_exception_data._DoFree", do_free, 0x40, 0x8, true, 0xc48c0135a8a29178)
#else
#define _m00
#define _m01
#endif