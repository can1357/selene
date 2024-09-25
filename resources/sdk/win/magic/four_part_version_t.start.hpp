#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FOUR_PART_VERSION.Version64", version64, 0x0, 0x40, true, 0xcf0e68e75ff91d68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FOUR_PART_VERSION.Version32.BuildAndRevision", build_and_revision, 0x0, 0x20, true, 0x44e7a7aacfb9e3e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FOUR_PART_VERSION.Version32.MajorAndMinor", major_and_minor, 0x20, 0x20, true, 0x6aaaf4b7248278a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_version32_t), "_FOUR_PART_VERSION.Version32", version32, 0x0, 0x40, true, 0x47f6990475f7995d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FOUR_PART_VERSION.Version16.Revision", revision, 0x0, 0x10, true, 0x903471d24dcd684b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FOUR_PART_VERSION.Version16.Build", build, 0x10, 0x10, true, 0xe5d0ac99d9293b24)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FOUR_PART_VERSION.Version16.Minor", minor, 0x20, 0x10, true, 0x31fb94cf2e726949)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FOUR_PART_VERSION.Version16.Major", major, 0x30, 0x10, true, 0xbbd4cfe090585b0a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_version16_t), "_FOUR_PART_VERSION.Version16", version16, 0x0, 0x40, true, 0xd3a19be6e81f7f57)
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
#endif