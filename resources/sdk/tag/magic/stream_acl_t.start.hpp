#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTREAM_ACL.ulNumOfDenyEntries", ul_num_of_deny_entries, 0x0, 0x20, true, 0xcc1be24f0d2a5bd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTREAM_ACL.ulNumOfGrantEntries", ul_num_of_grant_entries, 0x20, 0x20, true, 0x36a40125425c5d1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stream_ace_t*), "tagSTREAM_ACL.pACL", p_acl, 0x40, 0x40, true, 0x91ea6777100fe3e8)
#else
#define _m00
#define _m01
#define _m02
#endif