#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::unpacked_entry_t), "_HEAP_ENTRY.UnpackedEntry", unpacked_entry, 0x0, 0x80, true, 0x60c7dccbaa327f6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_ENTRY.PreviousBlockPrivateData", previous_block_private_data, 0x0, 0x40, true, 0x41190cc24781428f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.Size", size, 0x40, 0x10, true, 0x239d13b25a38b26d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.Flags", flags, 0x50, 0x8, true, 0x74fd27efb8545298)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.SmallTagIndex", small_tag_index, 0x58, 0x8, true, 0xe49fbba6608f2fee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_ENTRY.SubSegmentCode", sub_segment_code, 0x40, 0x20, true, 0xfcb835ab26f9174e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.PreviousSize", previous_size, 0x60, 0x10, true, 0xae959609a6e6e622)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.SegmentOffset", segment_offset, 0x70, 0x8, true, 0x3b51d40b738b4596)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.LFHFlags", lfh_flags, 0x70, 0x8, true, 0xd6cbb9a92234533f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.UnusedBytes", unused_bytes, 0x78, 0x8, true, 0xe985d00f70c785a7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_ENTRY.CompactHeader", compact_header, 0x40, 0x40, true, 0xf2e60872a1e3bc85)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::extended_entry_t), "_HEAP_ENTRY.ExtendedEntry", extended_entry, 0x0, 0x80, true, 0x9f3bd12c2e2d6197)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.FunctionIndex", function_index, 0x40, 0x10, true, 0xebae54f88a085d23)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.ContextValue", context_value, 0x50, 0x10, true, 0x4fa8585c0eb44c92)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_ENTRY.InterceptorValue", interceptor_value, 0x40, 0x20, true, 0x296db59e8c4cdb64)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.UnusedBytesLength", unused_bytes_length, 0x60, 0x10, true, 0x67a64e367386104c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.EntryOffset", entry_offset, 0x70, 0x8, true, 0x8219692f89f169a9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.ExtendedBlockSignature", extended_block_signature, 0x78, 0x8, true, 0x12a6ccf96f92807f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_ENTRY.ReservedForAlignment", reserved_for_alignment, 0x0, 0x40, true, 0xe53f565cd839c800)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_ENTRY.Code1", code1, 0x40, 0x20, true, 0xe0490d7660702725)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY.Code2", code2, 0x60, 0x10, true, 0xc51bcfd14f337503)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.Code3", code3, 0x70, 0x8, true, 0x909dee29f22e3cd5)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_ENTRY.Code4", code4, 0x78, 0x8, true, 0x297665d1d71d1248)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_ENTRY.Code234", code234, 0x60, 0x20, true, 0x14cc11ccb676e9bd)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_ENTRY.AgregateCode", agregate_code, 0x40, 0x40, true, 0x7f9de824bc81fdd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif