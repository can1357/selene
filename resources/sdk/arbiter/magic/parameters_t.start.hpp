#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::test_allocation_parameters_t), "_ARBITER_PARAMETERS.Parameters.TestAllocation", test_allocation, 0x0, 0xc0, true, 0xabb9c624fedac97c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::retest_allocation_parameters_t), "_ARBITER_PARAMETERS.Parameters.RetestAllocation", retest_allocation, 0x0, 0xc0, true, 0xb2d5599ffaa7714b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::boot_allocation_parameters_t), "_ARBITER_PARAMETERS.Parameters.BootAllocation", boot_allocation, 0x0, 0x40, true, 0xc90add62587dbc06)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::query_allocated_resources_parameters_t), "_ARBITER_PARAMETERS.Parameters.QueryAllocatedResources", query_allocated_resources, 0x0, 0x40, true, 0x951dd71f2ae50c4b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::query_conflict_parameters_t), "_ARBITER_PARAMETERS.Parameters.QueryConflict", query_conflict, 0x0, 0x0, true, 0x81a80fb449ea152b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::query_arbitrate_parameters_t), "_ARBITER_PARAMETERS.Parameters.QueryArbitrate", query_arbitrate, 0x0, 0x40, true, 0x2156192dc37799fd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::add_reserved_parameters_t), "_ARBITER_PARAMETERS.Parameters.AddReserved", add_reserved, 0x0, 0x40, true, 0xb27a578cd01e9b21)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_ARBITER_PARAMETERS.Parameters", parameters, 0x0, 0x0, true, 0x4b3cbe5927c4007)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif