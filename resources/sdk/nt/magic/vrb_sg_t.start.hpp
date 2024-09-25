#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "__VRB_SG.PhysicalAddress", physical_address, 0x0, 0x40, true, 0x58f8291f9f9761cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "__VRB_SG.Length", length, 0x40, 0x20, true, 0xc919a634de5226c1)
#else
#define _m00
#define _m01
#endif