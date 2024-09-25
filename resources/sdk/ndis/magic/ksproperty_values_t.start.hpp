#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksidentifier_t), "KSPROPERTY_VALUES.PropTypeSet", prop_type_set, 0x0, 0x0, false, 0x8071d28d22a9d01d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_VALUES.MembersListCount", members_list_count, 0x0, 0x0, false, 0xd024796552c5b8a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksproperty_memberslist_t*), "KSPROPERTY_VALUES.MembersList", members_list, 0x0, 0x0, false, 0xfce75252791a2082)
#else
#define _m00
#define _m01
#define _m02
#endif