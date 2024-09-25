#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::vad_event_block_t*), "_MI_VAD_EVENT_BLOCK.Next", next, 0x0, 0x40, true, 0x222bce53f1bd5caf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_VAD_EVENT_BLOCK.Gate", gate, 0x40, 0xc0, true, 0x2f4bcf6ea0c10085)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmaddress_list_t), "_MI_VAD_EVENT_BLOCK.SecureInfo", secure_info, 0x40, 0x80, true, 0x97d94ead53e608b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_VAD_EVENT_BLOCK.BitMap", bit_map, 0x40, 0x80, true, 0xa2c0aca75a91a3db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mminpage_support_t*), "_MI_VAD_EVENT_BLOCK.InPageSupport", in_page_support, 0x40, 0x40, true, 0x1c8ed31a3fc49f2a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct mi::largepage_image_info_t, struct mi::largepage_vad_info_t>), "_MI_VAD_EVENT_BLOCK.LargePage", large_page, 0x40, 0xc0, true, 0xce4a8354c2c9f289)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MI_VAD_EVENT_BLOCK.CreatingThread", creating_thread, 0x40, 0x40, true, 0x83c60369072df2a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::sub64k_free_ranges_t), "_MI_VAD_EVENT_BLOCK.PebTeb", peb_teb, 0x40, 0xc0, true, 0xa9913f37e4ab49a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_VAD_EVENT_BLOCK.WaitReason", wait_reason, 0x200, 0x20, true, 0x2d319b1bcc3d58f2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::physical_view_t), "_MI_VAD_EVENT_BLOCK.AweView", awe_view, 0x40, 0x80, true, 0xdb5721f61c07fac1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_short_t*), "_MI_VAD_EVENT_BLOCK.PlaceholderVad", placeholder_vad, 0x40, 0x40, true, 0x71bd74cb415f016b)
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