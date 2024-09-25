#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_SELECTION_DEPENDENCY.Processor", processor, 0x0, 0x20, true, 0x6b2c5c2447e2c6c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_menu_t), "_PPM_SELECTION_DEPENDENCY.Menu", menu, 0x40, 0x80, true, 0x5e8afcc7acd47a78)
#else
#define _m00
#define _m01
#endif