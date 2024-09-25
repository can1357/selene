#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACL.AclRevision", acl_revision, 0x0, 0x8, true, 0x757afdec37805a65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACL.Sbz1", sbz1, 0x8, 0x8, true, 0x89ddeb63f533715d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACL.AclSize", acl_size, 0x10, 0x10, true, 0x50942fe0ff08ef0e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACL.AceCount", ace_count, 0x20, 0x10, true, 0x8050398217069c53)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACL.Sbz2", sbz2, 0x30, 0x10, true, 0x7f692d208e76ebf2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif