#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FLUSH_INFORMATION.SupportedFlushMethods", supported_flush_methods, 0x0, 0x20, true, 0xd4669ce008f6d459)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FLUSH_INFORMATION.ProcessorCacheFlushSize", processor_cache_flush_size, 0x20, 0x20, true, 0x9eb2a9403853e12f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FLUSH_INFORMATION.SystemFlushCapabilities", system_flush_capabilities, 0x40, 0x40, true, 0x2777972141b06a96)
#else
#define _m00
#define _m01
#define _m02
#endif