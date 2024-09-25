#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_ARBITER_TEST_ALLOCATION_PARAMETERS.ArbitrationList", arbitration_list, 0x0, 0x40, true, 0xe58d81f5c25770f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_TEST_ALLOCATION_PARAMETERS.AllocateFromCount", allocate_from_count, 0x40, 0x20, true, 0x8c75f901a795784d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_ARBITER_TEST_ALLOCATION_PARAMETERS.AllocateFrom", allocate_from, 0x80, 0x40, true, 0x2fac28c7e76768a8)
#else
#define _m00
#define _m01
#define _m02
#endif