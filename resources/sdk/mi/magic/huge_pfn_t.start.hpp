#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HUGE_PFN.EntireField", entire_field, 0x0, 0x40, true, 0xf3a1cb1e3c50fbb)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_HUGE_PFN.PageState", page_state, 0x12, 0x3, true, 0x35af6ee721bee8d5, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.HasError", has_error, 0x28, 0x1, true, 0xcaf51daad3406865, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MI_HUGE_PFN.Partition", partition, 0x29, 0xb, true, 0xaee22ab19a011ec1, 11, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint18_t), "_MI_HUGE_PFN.Flink", flink, 0x0, 0x12, true, 0x2445339dc2a73d15, 18, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint18_t), "_MI_HUGE_PFN.Blink", blink, 0x15, 0x12, true, 0x7f735cfbb776db65, 18, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.WriteInProgress", write_in_progress, 0x27, 0x1, true, 0x1c299fa0b45a86aa, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint49_t), "_MI_HUGE_PFN.ZeroedDuringStateChanges", zeroed_during_state_changes, 0x0, 0x0, false, 0xd5313abed8dc9698, 49, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_HUGE_PFN.OnList.PageState", page_state, 0x0, 0x0, false, 0xc53c4eedb7d531e6, 3, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.OnList.HasError", has_error, 0x0, 0x0, false, 0x65176560d4d20c6f, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MI_HUGE_PFN.OnList.Partition", partition, 0x0, 0x0, false, 0x42fd4b25b4d69153, 11, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_MI_HUGE_PFN.OnList.Flink", flink, 0x0, 0x0, false, 0xe73cdd2773dff1ff, 22, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_MI_HUGE_PFN.OnList.Blink", blink, 0x0, 0x0, false, 0x88f6a83aa44ac2ca, 22, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.OnList.WriteInProgress", write_in_progress, 0x0, 0x0, false, 0xce5199ff32efeec, 1, uint64_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_on_list_t), "_MI_HUGE_PFN.OnList", on_list, 0x0, 0x0, false, 0xc7d92fb7e5cb84bc)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_HUGE_PFN.Active.PageState", page_state, 0x0, 0x0, false, 0x6eb10d8722ae0a6c, 3, uint64_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.Active.HasError", has_error, 0x0, 0x0, false, 0x5c239db56a933bc6, 1, uint64_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MI_HUGE_PFN.Active.Partition", partition, 0x0, 0x0, false, 0xa8d62f4919f620b, 11, uint64_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.Active.DeleteBit", delete_bit, 0x0, 0x0, false, 0xa3334a46874cde76, 1, uint64_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.Active.ContentsWereNonZeroWhenInitiallyUnlinked", contents_were_non_zero_when_initially_unlinked, 0x0, 0x0, false, 0xb31df2ba0c5a7f8e, 1, uint64_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_MI_HUGE_PFN.Active.ShareCount", share_count, 0x0, 0x0, false, 0xe6af41f78ecf5da6, 22, uint64_t)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_active_t), "_MI_HUGE_PFN.Active", active, 0x0, 0x0, false, 0xa0f8060b9e17f7f6)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_HUGE_PFN.Transition.PageState", page_state, 0x0, 0x0, false, 0x2bf1bf8c7acc2df7, 3, uint64_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HUGE_PFN.Transition.HasError", has_error, 0x0, 0x0, false, 0xba58942353502e8, 1, uint64_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MI_HUGE_PFN.Transition.Partition", partition, 0x0, 0x0, false, 0x1557875e2bdce5, 11, uint64_t)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_MI_HUGE_PFN.Transition.DanglingIoNodes", dangling_io_nodes, 0x0, 0x0, false, 0x952ef349d3800110, 9, uint64_t)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_transition_t), "_MI_HUGE_PFN.Transition", transition, 0x0, 0x0, false, 0x527481f38ac592e3)
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
#define _m25
#define _m26
#endif