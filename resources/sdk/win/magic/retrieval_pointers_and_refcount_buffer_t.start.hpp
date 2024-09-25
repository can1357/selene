#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.ExtentCount", extent_count, 0x0, 0x20, true, 0x8e0482d43fa0fbd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.StartingVcn", starting_vcn, 0x40, 0x40, true, 0x149e2c0b70ce4e28)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.Extents.NextVcn", next_vcn, 0x0, 0x40, true, 0x9e149d96f9f56e29)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.Extents.Lcn", lcn, 0x40, 0x40, true, 0xe27eb70ffc41343a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.Extents.ReferenceCount", reference_count, 0x80, 0x20, true, 0xeebc1d007b391860)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_extents_t, 1>), "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.Extents", extents, 0x80, 0xc0, true, 0xffadc63a49daeaa2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif