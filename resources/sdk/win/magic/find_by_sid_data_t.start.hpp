#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FIND_BY_SID_DATA.Restart", restart, 0x0, 0x20, true, 0x197f1485e020244b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "FIND_BY_SID_DATA.Sid", sid, 0x20, 0x60, true, 0x99ec12a758ea3c1d)
#else
#define _m00
#define _m01
#endif