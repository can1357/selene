#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::segment_heap_t*), "_RTLP_HP_METADATA_HEAP_CTX.Heap", heap, 0x0, 0x40, true, 0x5db1e1db931f4826)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::run_once_t), "_RTLP_HP_METADATA_HEAP_CTX.InitOnce", init_once, 0x40, 0x40, true, 0xae7d83485ce73023)
#else
#define _m00
#define _m01
#endif