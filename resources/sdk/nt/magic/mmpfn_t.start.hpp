#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMPFN.ListEntry", list_entry, 0x0, 0x80, true, 0x5433d2026aee8f91)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MMPFN.TreeNode", tree_node, 0x0, 0xc0, true, 0xa1b7e40ca749dd8a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN.Next", next, 0x0, 0x40, true, 0x91541ca0ee3a36e7)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_MMPFN.Flink", flink, 0x0, 0x24, true, 0x66d4f6f6f0e3da98, 0, uint64_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint28_t), "_MMPFN.NodeFlinkHigh", node_flink_high, 0x24, 0x1c, true, 0x5c57ab8ce724641a, 0, uint64_t)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMPFN.PteAddress", pte_address, 0x40, 0x40, true, 0xee1e711e6b6eb9c1)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFN.PteLong", pte_long, 0x40, 0x40, true, 0xc25c700ca50bee7f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MMPFN.OriginalPte", original_pte, 0x80, 0x40, true, 0xc29f2dea6c1ffde3)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mipfnblink_t), "_MMPFN.u2", u2, 0xc0, 0x40, true, 0x101ee184fdde9a6f)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_MMPFN.EntireField", entire_field, 0x100, 0x20, true, 0xc59e532d6192468c, 0, uint32_t,uint64_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_MMPFN.NodeFlinkLow", node_flink_low, 0x138, 0x8, true, 0x9397cc73d3564a7a, 0, uint8_t,uint64_t)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMPFN.ReferenceCount", reference_count, 0x100, 0x10, true, 0x47ee15f126738ed7)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnentry1_t), "_MMPFN.e1", e1, 0x110, 0x8, true, 0xbb7fc0165ff977f6)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnentry3_t), "_MMPFN.e3", e3, 0x118, 0x8, true, 0x7867ddfb9382f8ca)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_e2_t), "_MMPFN.e2", e2, 0x100, 0x10, true, 0x75a4f3809753b642)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMPFN.NodeBlinkLow", node_blink_low, 0x120, 0x10, true, 0x4a728f4af19ce5f1)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMPFN.ViewCount", view_count, 0x138, 0x8, true, 0x705d79bc102e65ba)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_u4_t), "_MMPFN.u4", u4, 0x140, 0x40, true, 0xd07b29c8206d4ec8)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MMPFN.NextSlistPfn", next_slist_pfn, 0x0, 0x40, true, 0xeccf667937bfab98)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::active_pfn_t), "_MMPFN.Active", active, 0x0, 0x40, true, 0xcff5fd941fe20b44)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPFN.ModifiedListBucketIndex", modified_list_bucket_index, 0x138, 0x4, true, 0xfe6f5ec122a5b9fd, 4, uint8_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMPFN.AnchorLargePageSize", anchor_large_page_size, 0x138, 0x2, true, 0xbf8fffa57376d50f, 2, uint8_t)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_u3_t), "_MMPFN.u3", u3, 0x0, 0x0, false, 0xdc14dc7c44b479d6)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pfn_ulong5_t), "_MMPFN.u5", u5, 0x0, 0x0, false, 0x77d91932755e913)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_MMPFN.PteFrame", pte_frame, 0x0, 0x0, false, 0xac0091e06be11496, 40, uint64_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.ResidentPage", resident_page, 0x0, 0x0, false, 0xb53d90e6d66b3b9b, 1, uint64_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MMPFN.Partition", partition, 0x0, 0x0, false, 0xef93126f58167278, 10, uint64_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.FileOnly", file_only, 0x0, 0x0, false, 0x165a269071107e68, 1, uint64_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.PfnExists", pfn_exists, 0x0, 0x0, false, 0x543ae84331e42d74, 1, uint64_t)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPFN.PageIdentity", page_identity, 0x0, 0x0, false, 0xcfed2e770fa754aa, 3, uint64_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.PrototypePte", prototype_pte, 0x0, 0x0, false, 0x29935e9f63cd4c05, 1, uint64_t)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFN.WsIndex", ws_index, 0x0, 0x0, false, 0x2090f7698f9856c4)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_MMPFN.Event", event, 0x0, 0x0, false, 0x5cfaae9b6910fc29)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_MMPFN.VolatileNext", volatile_next, 0x0, 0x0, false, 0xd63973d36ef48bb7)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_MMPFN.KernelStackOwner", kernel_stack_owner, 0x0, 0x0, false, 0x82e3c7749a570453)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MMPFN.NextStackPfn", next_stack_pfn, 0x0, 0x0, false, 0x899d99f11f382214)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_MMPFN.VolatilePteAddress", volatile_pte_address, 0x0, 0x0, false, 0xb886efedf04640ec)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPFN.VaType", va_type, 0x0, 0x0, false, 0xf72de82efbfed3b0, 4, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMPFN.e2.ReferenceCount", reference_count, 0x0, 0x10, true, 0xdafa132b800e874e)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint36_t), "_MMPFN.u4.PteFrame", pte_frame, 0x0, 0x24, true, 0xe282722a2fe03372, 36, uint64_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MMPFN.u4.Partition", partition, 0x27, 0xa, true, 0x95796da31e9f352d, 10, uint64_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.u4.FileOnly", file_only, 0x31, 0x1, true, 0xa6046b6363c821ed, 1, uint64_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.u4.PfnExists", pfn_exists, 0x32, 0x1, true, 0xd47c355cd2d9b4e1, 1, uint64_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPFN.u4.PageIdentity", page_identity, 0x3c, 0x3, true, 0xf36d85e625cd2390, 3, uint64_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.u4.PrototypePte", prototype_pte, 0x3f, 0x1, true, 0xe52f61e3fba00302, 1, uint64_t)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFN.u4.EntireField", entire_field, 0x0, 0x40, true, 0x5d68731ab91ebdfd)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN.u4.ResidentPage", resident_page, 0x24, 0x1, true, 0x2172596efe768b1, 1, uint64_t)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMPFN.u4.Channel", channel, 0x0, 0x0, false, 0x7ebbb56f1fe86007, 2, uint64_t)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MMPFN.u4.PageColor", page_color, 0x0, 0x0, false, 0xefc4532f7d6372fb, 6, uint64_t)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMPFN.u3.ReferenceCount", reference_count, 0x0, 0x0, false, 0x549f3e581e5b3d01)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnentry1_t), "_MMPFN.u3.e1", e1, 0x0, 0x0, false, 0xbd1619c55179cab4)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnentry3_t), "_MMPFN.u3.e3", e3, 0x0, 0x0, false, 0xa95209f8978118c1)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMPFN.u3.e2.ReferenceCount", reference_count, 0x0, 0x0, false, 0xfe82ecb5029e517e)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_e2_t), "_MMPFN.u3.e2", e2, 0x0, 0x0, false, 0xadc302241df22157)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPFN.u3.EntireField", entire_field, 0x0, 0x0, false, 0xa4b385626e956c9f)
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
#define _m015
#define _m016
#define _m017
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m14
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#endif