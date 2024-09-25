#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_W32PROCESS.Process", process, 0x0, 0x40, true, 0x91579b951a1d2fb4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.RefCount", ref_count, 0x40, 0x20, true, 0x4fdb9fcaffdc8cc2)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.W32PF_Flags", w32pf_flags, 0x60, 0x20, true, 0xb6105188dae85901)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_W32PROCESS.InputIdleEvent", input_idle_event, 0x80, 0x40, true, 0xf198b63762949fc6)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.StartCursorHideTime", start_cursor_hide_time, 0xc0, 0x20, true, 0xbb3002bbd7eef89f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::w32process_t*), "_W32PROCESS.NextStart", next_start, 0x100, 0x40, true, 0x64e205f5ed8f6b0)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.pDCAttrList", p_dc_attr_list, 0x140, 0x40, true, 0xb602e80e3f323f02)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.pBrushAttrList", p_brush_attr_list, 0x180, 0x40, true, 0x28c1e07602d4da57)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.W32Pid", w32_pid, 0x1c0, 0x20, true, 0x71509c4d39c0183f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_W32PROCESS.GDIHandleCount", gdi_handle_count, 0x1e0, 0x20, true, 0x3e50173aa591ef8b)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.GDIHandleCountPeak", gdi_handle_count_peak, 0x200, 0x20, true, 0x2bee1fd3ac317c88)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_W32PROCESS.UserHandleCount", user_handle_count, 0x220, 0x20, true, 0xf473df99394e7e14)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.UserHandleCountPeak", user_handle_count_peak, 0x240, 0x20, true, 0xd3778b495fc9fdc)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_W32PROCESS.GDIPushLock", gdi_push_lock, 0x280, 0x40, true, 0x18d72d6735595ea5)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_table_t), "_W32PROCESS.GDIEngUserMemAllocTable", gdi_eng_user_mem_alloc_table, 0x2c0, 0x40, true, 0xe5d73dfcaac1af60)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_W32PROCESS.GDIDcAttrFreeList", gdi_dc_attr_free_list, 0x600, 0x80, true, 0xa7d368fe76dfc412)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_W32PROCESS.GDIBrushAttrFreeList", gdi_brush_attr_free_list, 0x680, 0x80, true, 0x89e05e7725dc2966)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_W32PROCESS.GDIW32PIDLockedBitmaps", gdiw32pid_locked_bitmaps, 0x700, 0x80, true, 0x7936e45bf9898875)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.hSecureGdiSharedHandleTable", h_secure_gdi_shared_handle_table, 0x780, 0x40, true, 0x63ebb92c8f3af6db)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.DxProcess", dx_process, 0x7c0, 0x40, true, 0x7d870cd2119c41cf)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.DCompositionProcess", d_composition_process, 0x800, 0x40, true, 0xdb7c5f79de49f66c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.UMPDSandboxingEnabled", umpd_sandboxing_enabled, 0x840, 0x20, true, 0x9d4b61b095a6d8f0)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32PROCESS.pWakeReference", p_wake_reference, 0x880, 0x40, true, 0xb403c5b861dfb7b0)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.defaultDpiContext", default_dpi_context, 0x8c0, 0x20, true, 0xca5aa8f276b06e99)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_W32PROCESS.Dpi", dpi, 0x8e0, 0x10, true, 0xefc46a4388adccef)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32PROCESS.bChangedGdiGammaRamp", b_changed_gdi_gamma_ramp, 0x900, 0x1, true, 0x91178dce6cba16f0, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32PROCESS.bReadScreenBits", b_read_screen_bits, 0x901, 0x1, true, 0x84980f18f0e641ec, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32PROCESS.bWroteScreenBits", b_wrote_screen_bits, 0x902, 0x1, true, 0xb5e5191867dc8d8b, 1, uint32_t)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32PROCESS.Cookie", cookie, 0x0, 0x0, false, 0x288e1ea907c9aa78)
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
#define _m027
#define _m028
#endif