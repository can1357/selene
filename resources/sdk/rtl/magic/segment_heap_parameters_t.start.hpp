#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_SEGMENT_HEAP_PARAMETERS.Version", version, 0x0, 0x10, true, 0xbf6a780229b4fb5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_SEGMENT_HEAP_PARAMETERS.Size", size, 0x10, 0x10, true, 0xf7b00ce14a1aca2b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SEGMENT_HEAP_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xfc9a293a608fd9c1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::segment_heap_memory_source_t), "_RTL_SEGMENT_HEAP_PARAMETERS.MemorySource", memory_source, 0x40, 0x40, true, 0xbda9c047747d9417)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif