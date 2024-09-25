#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.SectionHandleClient", section_handle_client, 0x0, 0x40, true, 0x31953839f2067408)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.ViewBaseClient", view_base_client, 0x40, 0x40, true, 0xd79cada02392878e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.ViewBaseTarget", view_base_target, 0x80, 0x40, true, 0x274cababc371ad21)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DEBUG_INFORMATION.ViewBaseDelta", view_base_delta, 0xc0, 0x40, true, 0xa4a53d635ff7d954)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.EventPairClient", event_pair_client, 0x100, 0x40, true, 0xae81db00b1408d55)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.EventPairTarget", event_pair_target, 0x140, 0x40, true, 0xf340be0431764f44)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.TargetProcessId", target_process_id, 0x180, 0x40, true, 0xd71d285aca83d3f0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.TargetThreadHandle", target_thread_handle, 0x1c0, 0x40, true, 0x88577f24a173f98c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DEBUG_INFORMATION.Flags", flags, 0x200, 0x20, true, 0x3929d056370e7139)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DEBUG_INFORMATION.OffsetFree", offset_free, 0x240, 0x40, true, 0x21c469ea127f9315)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DEBUG_INFORMATION.CommitSize", commit_size, 0x280, 0x40, true, 0x8dbe298964e5101b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DEBUG_INFORMATION.ViewSize", view_size, 0x2c0, 0x40, true, 0x98f2d039dc91a258)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_modules_t*), "_RTL_DEBUG_INFORMATION.Modules", modules, 0x300, 0x40, true, 0x81cd5e973e13e65d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_module_information_ex_t*), "_RTL_DEBUG_INFORMATION.ModulesEx", modules_ex, 0x300, 0x40, true, 0x3fc44f0747caef49)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_backtraces_t*), "_RTL_DEBUG_INFORMATION.BackTraces", back_traces, 0x340, 0x40, true, 0x3a0470672aba1a4b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_heaps_t*), "_RTL_DEBUG_INFORMATION.Heaps", heaps, 0x380, 0x40, true, 0x5baa3c603281cab3)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_locks_t*), "_RTL_DEBUG_INFORMATION.Locks", locks, 0x3c0, 0x40, true, 0x87e547659a42086b)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.SpecificHeap", specific_heap, 0x400, 0x40, true, 0xff7149d97069f363)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.TargetProcessHandle", target_process_handle, 0x440, 0x40, true, 0xf0735c86e7c2a08c)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::process_verifier_options_t*), "_RTL_DEBUG_INFORMATION.VerifierOptions", verifier_options, 0x480, 0x40, true, 0x5d3db1e1d47e961b)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.ProcessHeap", process_heap, 0x4c0, 0x40, true, 0x878dd051926a49f8)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.CriticalSectionHandle", critical_section_handle, 0x500, 0x40, true, 0x7ffd34cc57dab9da)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DEBUG_INFORMATION.CriticalSectionOwnerThread", critical_section_owner_thread, 0x540, 0x40, true, 0x34710100f8f133e2)
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
#endif