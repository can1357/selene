#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_BUS_EXTENSION_LIST.Next", next, 0x0, 0x40, true, 0x4d21ad33c414dee0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pi::bus_extension_t*), "_BUS_EXTENSION_LIST.BusExtension", bus_extension, 0x40, 0x40, true, 0xc1dcc411ab07413d)
#else
#define _m00
#define _m01
#endif