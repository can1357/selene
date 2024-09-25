#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SID_AND_ATTRIBUTES_HASH.SidCount", sid_count, 0x0, 0x20, true, 0x18840f58eb6b77b2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_SID_AND_ATTRIBUTES_HASH.SidAttr", sid_attr, 0x40, 0x40, true, 0xddab2a665145811a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 32>), "_SID_AND_ATTRIBUTES_HASH.Hash", hash, 0x80, 0x0, true, 0x89b79143665c3463)
#else
#define _m00
#define _m01
#define _m02
#endif