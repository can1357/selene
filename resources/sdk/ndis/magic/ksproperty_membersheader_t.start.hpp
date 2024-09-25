#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_MEMBERSHEADER.MembersFlags", members_flags, 0x0, 0x0, false, 0x3efa86c84a079181)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_MEMBERSHEADER.MembersSize", members_size, 0x0, 0x0, false, 0x61eac6fd0cd883e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_MEMBERSHEADER.MembersCount", members_count, 0x0, 0x0, false, 0xdea5162478bc0f8f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_MEMBERSHEADER.Flags", flags, 0x0, 0x0, false, 0x15a5ae01a0966974)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif