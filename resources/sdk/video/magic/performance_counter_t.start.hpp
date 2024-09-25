#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.NbOfAllocationEvicted", nb_of_allocation_evicted, 0x0, 0x80, true, 0x1a110378d29d0f84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.NbOfAllocationMarked", nb_of_allocation_marked, 0x280, 0x80, true, 0x18043f56ef05964c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.NbOfAllocationRestored", nb_of_allocation_restored, 0x500, 0x80, true, 0x4e9fb024b4dec483)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.KBytesEvicted", k_bytes_evicted, 0x780, 0x80, true, 0x3e98be14b9a4a192)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.KBytesMarked", k_bytes_marked, 0xa00, 0x80, true, 0x10b609cced8b5420)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_VIDEO_PERFORMANCE_COUNTER.KBytesRestored", k_bytes_restored, 0xc80, 0x80, true, 0xb0ccc01aa04df796)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbProcessCommited", nb_process_commited, 0xf00, 0x40, true, 0x75e109174e764aa9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbAllocationCommited", nb_allocation_commited, 0xf40, 0x40, true, 0x2ca4efad63d2e8f6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbAllocationMarked", nb_allocation_marked, 0xf80, 0x40, true, 0xcb694296f5e3e7ea)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesAllocated", k_bytes_allocated, 0xfc0, 0x40, true, 0x568197aaaa046c56)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesAvailable", k_bytes_available, 0x1000, 0x40, true, 0x3e4b5fe55f5a4af6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesCurMarked", k_bytes_cur_marked, 0x1040, 0x40, true, 0xba72e33f936855a2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.Reference", reference, 0x1080, 0x40, true, 0x40b05a9c9f8ae15a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.Unreference", unreference, 0x10c0, 0x40, true, 0xd0e2b33696984760)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.TrueReference", true_reference, 0x1100, 0x40, true, 0x4cdb042ef199a43e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbOfPageIn", nb_of_page_in, 0x1140, 0x40, true, 0xc69802e25905a4c5)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesPageIn", k_bytes_page_in, 0x1180, 0x40, true, 0x67c899db91e9cf94)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbOfPageOut", nb_of_page_out, 0x11c0, 0x40, true, 0x4afcece134b73771)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesPageOut", k_bytes_page_out, 0x1200, 0x40, true, 0xb7b410728442a14a)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.NbOfRotateOut", nb_of_rotate_out, 0x1240, 0x40, true, 0xbcddbf4aabf65224)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PERFORMANCE_COUNTER.KBytesRotateOut", k_bytes_rotate_out, 0x1280, 0x40, true, 0x304466e7047f4812)
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
#endif