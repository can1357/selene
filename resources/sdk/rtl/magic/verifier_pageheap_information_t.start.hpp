#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAP_INFORMATION.Size", size, 0x0, 0x20, true, 0x3f70c8f2a47fc954)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAP_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xce28afb67a605a0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAP_INFORMATION.HeapFlags", heap_flags, 0x40, 0x20, true, 0x8bc43a5aec4f41de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAP_INFORMATION.ExtraFlags", extra_flags, 0x60, 0x20, true, 0xab49efc9e6656cd7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_VERIFIER_PAGEHEAP_INFORMATION.HeapHandle", heap_handle, 0x80, 0x40, true, 0xdc52058dacec1c62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif