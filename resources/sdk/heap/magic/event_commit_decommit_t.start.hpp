#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_COMMIT_DECOMMIT.HeapHandle", heap_handle, 0x0, 0x40, true, 0x4ee323044869994d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_COMMIT_DECOMMIT.Block", block, 0x40, 0x40, true, 0x4fcc7cd2cf6903f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EVENT_COMMIT_DECOMMIT.Size", size, 0x80, 0x40, true, 0x152abbd4bf424ec3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_EVENT_COMMIT_DECOMMIT.Caller", caller, 0xc0, 0x20, true, 0xac3810af703da31b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif