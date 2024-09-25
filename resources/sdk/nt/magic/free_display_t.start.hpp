#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FREE_DISPLAY.RealVectorSize", real_vector_size, 0x0, 0x20, true, 0x8c443d7649854bfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FREE_DISPLAY.Hint", hint, 0x20, 0x20, true, 0x272b016dd9a3f933)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_FREE_DISPLAY.Display", display, 0x40, 0x80, true, 0x732efb136116d970)
#else
#define _m00
#define _m01
#define _m02
#endif