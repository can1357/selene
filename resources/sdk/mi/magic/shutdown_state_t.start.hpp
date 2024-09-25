#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SHUTDOWN_STATE.CrashDumpInitialized", crash_dump_initialized, 0x0, 0x8, true, 0x392d327e14c0dc18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SHUTDOWN_STATE.ConnectedStandbyActive", connected_standby_active, 0x8, 0x8, true, 0x998aa7f5be80b22a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SHUTDOWN_STATE.SystemShutdown", system_shutdown, 0x20, 0x20, true, 0x818db89b498caee6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_SHUTDOWN_STATE.ShutdownFlushInProgress", shutdown_flush_in_progress, 0x40, 0x20, true, 0x8c567ebe9e262b5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SHUTDOWN_STATE.MirroringActive", mirroring_active, 0x60, 0x20, true, 0x92991ab3bca91f88)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::resume_workitem_t), "_MI_SHUTDOWN_STATE.ResumeItem", resume_item, 0x80, 0xc0, true, 0x9edb7466cb23010)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MI_SHUTDOWN_STATE.MirrorHoldsPfn", mirror_holds_pfn, 0x240, 0x40, true, 0x529a63890903de89)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::bitmap_ex_t, 2>), "_MI_SHUTDOWN_STATE.MirrorBitMaps", mirror_bit_maps, 0x280, 0x0, true, 0x63613da7d6352125)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_SHUTDOWN_STATE.CrashDumpPte", crash_dump_pte, 0x380, 0x40, true, 0x43ba83a050c0777c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SHUTDOWN_STATE.ZeroPageFileAtShutdown", zero_page_file_at_shutdown, 0x10, 0x8, true, 0x298d7b0e97a54871)
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
#endif