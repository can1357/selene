#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_REPAIR_PARAMETERS.NumberOfRepairCopies", number_of_repair_copies, 0x0, 0x20, true, 0x538113255e3d240c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_REPAIR_PARAMETERS.SourceCopy", source_copy, 0x20, 0x20, true, 0x733ee42d7f6ae8ac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DEVICE_DATA_SET_REPAIR_PARAMETERS.RepairCopies", repair_copies, 0x40, 0x20, true, 0xf3baa63dfc7c6e41)
#else
#define _m00
#define _m01
#define _m02
#endif