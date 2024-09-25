#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HEAP_INFORMATION.ReserveSize", reserve_size, 0x0, 0x40, true, 0x182afd109c403283)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HEAP_INFORMATION.CommitSize", commit_size, 0x40, 0x40, true, 0x802c8c74de30105b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HEAP_INFORMATION.NumberOfHeaps", number_of_heaps, 0x80, 0x20, true, 0x16e9af60dbc8fe3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HEAP_INFORMATION.FirstHeapInformationOffset", first_heap_information_offset, 0xc0, 0x40, true, 0x6b6daeb33637e510)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif