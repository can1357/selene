#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_SECTION.SectionNode", section_node, 0x0, 0xc0, true, 0x2152c7b36ae6bd1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION.StartingVpn", starting_vpn, 0xc0, 0x40, true, 0x50f642d115d8998a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION.EndingVpn", ending_vpn, 0x100, 0x40, true, 0x5959d4c15b0db494)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_SECTION.ControlArea", control_area, 0x140, 0x40, true, 0xf15f92a08d0b593e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_SECTION.FileObject", file_object, 0x140, 0x40, true, 0x767d92cd21269054)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION.RemoteImageFileObject", remote_image_file_object, 0x140, 0x1, true, 0xb431fd96bc342a5e, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION.RemoteDataFileObject", remote_data_file_object, 0x141, 0x1, true, 0x73cb402667f59d31, 1, uint64_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION.SizeOfSection", size_of_section, 0x180, 0x40, true, 0xbfaf81cd94aeffcc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION.LongFlags", long_flags, 0x1c0, 0x20, true, 0xc0540b7aa5d1f353)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsection_flags_t), "_SECTION.Flags", flags, 0x1c0, 0x20, true, 0xcfb065aeb9a36720)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_SECTION.InitialPageProtection", initial_page_protection, 0x1e0, 0xc, true, 0x7432a1471f9dae74, 12, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint19_t), "_SECTION.SessionId", session_id, 0x1ec, 0x13, true, 0x6fd7d3e15b630ab5, 19, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION.NoValidationNeeded", no_validation_needed, 0x1ff, 0x1, true, 0x5b0c6cd67d6c9251, 1, uint32_t)
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
#endif