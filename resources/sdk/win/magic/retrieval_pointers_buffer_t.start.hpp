#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "RETRIEVAL_POINTERS_BUFFER.ExtentCount", extent_count, 0x0, 0x20, true, 0xcec5f7efd1fa6100)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_BUFFER.StartingVcn", starting_vcn, 0x40, 0x40, true, 0xc818ed47fb5fb4bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_BUFFER.Extents.NextVcn", next_vcn, 0x0, 0x40, true, 0x5c3ff9d8727bf42c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "RETRIEVAL_POINTERS_BUFFER.Extents.Lcn", lcn, 0x40, 0x40, true, 0xda60e69b16f6f947)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_extents_t, 1>), "RETRIEVAL_POINTERS_BUFFER.Extents", extents, 0x80, 0x80, true, 0xb2358cb6545dd798)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif