#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksproperty_membersheader_t), "KSPROPERTY_MEMBERSLIST.MembersHeader", members_header, 0x0, 0x0, false, 0x9d849b990b43fd77)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "KSPROPERTY_MEMBERSLIST.Members", members, 0x0, 0x0, false, 0x5072eb1b6d7bb84e)
#else
#define _m00
#define _m01
#endif