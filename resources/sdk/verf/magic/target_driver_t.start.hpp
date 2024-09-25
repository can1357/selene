#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::avl_tree_node_ex_t), "_VF_TARGET_DRIVER.TreeNode", tree_node, 0x0, 0xc0, true, 0x8d2cb7360c8bd494)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::target_all_shared_export_thunks_t), "_VF_TARGET_DRIVER.AllSharedExportThunks", all_shared_export_thunks, 0xc0, 0x0, true, 0xfb3bb3750d71e8eb)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VF_TARGET_DRIVER.Flags.SnapSharedExportsFailed", snap_shared_exports_failed, 0x0, 0x1, true, 0x554989dc30617260, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_VF_TARGET_DRIVER.Flags", flags, 0xc0, 0x20, true, 0x211bd91922042623)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::target_verified_driver_data_t*), "_VF_TARGET_DRIVER.VerifiedData", verified_data, 0x1c0, 0x40, true, 0x5adbb130fb8e96d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_VF_TARGET_DRIVER.DriverObject", driver_object, 0x0, 0x0, false, 0xf3f53f633d13341)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif