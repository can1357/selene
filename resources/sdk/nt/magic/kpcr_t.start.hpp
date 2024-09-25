#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct os::tib_t), "_KPCR.NtTib", nt_tib, 0x0, 0xc0, true, 0x94a29e43c47141f9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::kgdtentry64_t*), "_KPCR.GdtBase", gdt_base, 0x0, 0x40, true, 0x70b3bc1650564a0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ktss64_t*), "_KPCR.TssBase", tss_base, 0x40, 0x40, true, 0xa44b87c1613db74)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPCR.UserRsp", user_rsp, 0x80, 0x40, true, 0xee48cd463b95f910)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kpcr_t*), "_KPCR.Self", self, 0xc0, 0x40, true, 0x1dde4edcc53e31f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_t*), "_KPCR.CurrentPrcb", current_prcb, 0x100, 0x40, true, 0x5881d515b5ff099d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kspin_lock_queue_t*), "_KPCR.LockArray", lock_array, 0x140, 0x40, true, 0xaa9a35a51e6a0034)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KPCR.Used_Self", used_self, 0x180, 0x40, true, 0x780ab9e5df9e1ed)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::kidtentry64_t*), "_KPCR.IdtBase", idt_base, 0x1c0, 0x40, true, 0x7a57260633afae60)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPCR.Irql", irql, 0x280, 0x8, true, 0x1335745df76b869b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPCR.SecondLevelCacheAssociativity", second_level_cache_associativity, 0x288, 0x8, true, 0xa5bfc6d5d6394a7f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPCR.ObsoleteNumber", obsolete_number, 0x290, 0x8, true, 0x7b55c16691c243d5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPCR.MajorVersion", major_version, 0x300, 0x10, true, 0xadebc74bb3c6e427)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPCR.MinorVersion", minor_version, 0x310, 0x10, true, 0xfbf006eeac432f1d)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPCR.StallScaleFactor", stall_scale_factor, 0x320, 0x20, true, 0xc883ea5ef10db501)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 15>), "_KPCR.KernelReserved", kernel_reserved, 0x400, 0xe0, true, 0xd529ab843e444a63)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPCR.SecondLevelCacheSize", second_level_cache_size, 0x5e0, 0x20, true, 0x31b211342a7a4e76)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_KPCR.HalReserved", hal_reserved, 0x600, 0x0, true, 0x8ecdf8ed5f120507)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KPCR.KdVersionBlock", kd_version_block, 0x840, 0x40, true, 0x2df04ef347971e23)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 24>), "_KPCR.PcrAlign1", pcr_align1, 0x8c0, 0x0, true, 0x708125458d3ff995)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_t), "_KPCR.Prcb", prcb, 0xc00, 0x0, true, 0x7e19d6f937b3d98c)
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