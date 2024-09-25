#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP_FREE_ENTRY.HeapEntry", heap_entry, 0x0, 0x80, true, 0x2334521e0aeeecc1)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::unpacked_entry_t), "_HEAP_FREE_ENTRY.UnpackedEntry", unpacked_entry, 0x0, 0x80, true, 0x98888d9f543feff4)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FREE_ENTRY.PreviousBlockPrivateData", previous_block_private_data, 0x0, 0x40, true, 0x8bf6a1dcabf341a1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.Size", size, 0x40, 0x10, true, 0xb5ce2a49a7d65b81)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.Flags", flags, 0x50, 0x8, true, 0x78fc59b63c9f5a7a)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.SmallTagIndex", small_tag_index, 0x58, 0x8, true, 0xd343fe3860cef91e)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FREE_ENTRY.SubSegmentCode", sub_segment_code, 0x40, 0x20, true, 0x61f063a003d9ad7d)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.PreviousSize", previous_size, 0x60, 0x10, true, 0xb7bd89674858addb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.SegmentOffset", segment_offset, 0x70, 0x8, true, 0x709192b7b8fa046a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.LFHFlags", lfh_flags, 0x70, 0x8, true, 0xa24ddb24a7f8d168)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.UnusedBytes", unused_bytes, 0x78, 0x8, true, 0xd8e5b9cddedf89c9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_FREE_ENTRY.CompactHeader", compact_header, 0x40, 0x40, true, 0x96d5414cb269db3c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::extended_entry_t), "_HEAP_FREE_ENTRY.ExtendedEntry", extended_entry, 0x0, 0x80, true, 0x1d416fc1e50a4ec2)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.FunctionIndex", function_index, 0x40, 0x10, true, 0xd3cf996947bce2ea)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.ContextValue", context_value, 0x50, 0x10, true, 0x62719aae7f431d6f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FREE_ENTRY.InterceptorValue", interceptor_value, 0x40, 0x20, true, 0x9d0c1233faa7ab4c)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.UnusedBytesLength", unused_bytes_length, 0x60, 0x10, true, 0xe68090c78572fa9e)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.EntryOffset", entry_offset, 0x70, 0x8, true, 0xa05aa263c8b06e8b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.ExtendedBlockSignature", extended_block_signature, 0x78, 0x8, true, 0xb435d370973d8846)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_FREE_ENTRY.ReservedForAlignment", reserved_for_alignment, 0x0, 0x40, true, 0xb5d7c1a73f0d2cbb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FREE_ENTRY.Code1", code1, 0x40, 0x20, true, 0x75b786e0427575dd)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY.Code2", code2, 0x60, 0x10, true, 0x8af0c423e34604b3)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.Code3", code3, 0x70, 0x8, true, 0x291fe53bf458bbdf)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_FREE_ENTRY.Code4", code4, 0x78, 0x8, true, 0x61ae25cd38eef28b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_FREE_ENTRY.Code234", code234, 0x60, 0x20, true, 0x99bce4f196275c80)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_FREE_ENTRY.AgregateCode", agregate_code, 0x40, 0x40, true, 0x78edf14bc3cfb00e)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_FREE_ENTRY.FreeList", free_list, 0x80, 0x80, true, 0xc8ef245b41fb8648)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif