#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_short_t), "_MMVAD.Core", core, 0x0, 0x0, true, 0x9a32d17d1f690fca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMVAD.LongFlags2", long_flags2, 0x200, 0x20, true, 0x627d1aa44ba19103)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::mmvad_flags2_t, volatile struct nt::mmvad_flags2_t>), "_MMVAD.VadFlags2", vad_flags2, 0x200, 0x20, true, 0xc586d8290c0ede35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t*), "_MMVAD.Subsection", subsection, 0x240, 0x40, true, 0x4167f745d82e9b6d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMVAD.FirstPrototypePte", first_prototype_pte, 0x280, 0x40, true, 0x8061d28467a883e6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMVAD.LastContiguousPte", last_contiguous_pte, 0x2c0, 0x40, true, 0x7c0d7faa7651f689)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMVAD.ViewLinks", view_links, 0x300, 0x80, true, 0x819882de4f1e2ade)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MMVAD.VadsProcess", vads_process, 0x380, 0x40, true, 0xb8224cc3d9364838)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::vad_sequential_info_t), "_MMVAD.SequentialVa", sequential_va, 0x3c0, 0x40, true, 0x50561cb622b1dc6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmextend_info_t*), "_MMVAD.ExtendedInfo", extended_info, 0x3c0, 0x40, true, 0x620761ebe69979b4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_MMVAD.FileObject", file_object, 0x400, 0x40, true, 0x2258b8793dccca73)
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
#endif