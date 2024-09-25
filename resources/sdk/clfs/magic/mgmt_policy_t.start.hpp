#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.Version", version, 0x0, 0x20, true, 0x16599f5ccfa48001)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.LengthInBytes", length_in_bytes, 0x20, 0x20, true, 0x4eff6ec0b1c9048a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyFlags", policy_flags, 0x40, 0x20, true, 0xed316fe11ad457f4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum clfs::mgmt_policy_type_t), "_CLFS_MGMT_POLICY.PolicyType", policy_type, 0x60, 0x20, true, 0x33d2307c1182597c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.MaximumSize.Containers", containers, 0x0, 0x20, true, 0xb377a4a68f191f9d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_maximum_size_t), "_CLFS_MGMT_POLICY.PolicyParameters.MaximumSize", maximum_size, 0x0, 0x20, true, 0x66c1cd9d0f34f5e2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.MinimumSize.Containers", containers, 0x0, 0x20, true, 0x4261633e5b146fae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_minimum_size_t), "_CLFS_MGMT_POLICY.PolicyParameters.MinimumSize", minimum_size, 0x0, 0x20, true, 0xe554a8270ab7d3cb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSize.SizeInBytes", size_in_bytes, 0x0, 0x20, true, 0xc1ca4103d40f3628)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_new_container_size_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSize", new_container_size, 0x0, 0x20, true, 0x4c630d80a5cf84b8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.GrowthRate.AbsoluteGrowthInContainers", absolute_growth_in_containers, 0x0, 0x20, true, 0x2a1227115bcb959d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.GrowthRate.RelativeGrowthPercentage", relative_growth_percentage, 0x20, 0x20, true, 0xcda059e77dc46ba9)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_growth_rate_t), "_CLFS_MGMT_POLICY.PolicyParameters.GrowthRate", growth_rate, 0x0, 0x40, true, 0x69419b4b5b5e21a2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.LogTail.MinimumAvailablePercentage", minimum_available_percentage, 0x0, 0x20, true, 0xef133e0a9854d372)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.LogTail.MinimumAvailableContainers", minimum_available_containers, 0x20, 0x20, true, 0xce572b46f7e5a430)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u25_log_tail_t), "_CLFS_MGMT_POLICY.PolicyParameters.LogTail", log_tail, 0x0, 0x40, true, 0x804c0f0221741051)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.AutoShrink.Percentage", percentage, 0x0, 0x20, true, 0x6d0baa15140a23c2)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u30_auto_shrink_t), "_CLFS_MGMT_POLICY.PolicyParameters.AutoShrink", auto_shrink, 0x0, 0x20, true, 0x8dfca07aab472fcf)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_POLICY.PolicyParameters.AutoGrow.Enabled", enabled, 0x0, 0x20, true, 0xfedebc2095d72e7d)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u35_auto_grow_t), "_CLFS_MGMT_POLICY.PolicyParameters.AutoGrow", auto_grow, 0x0, 0x20, true, 0xe1ea10b048080f13)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerPrefix.PrefixLengthInBytes", prefix_length_in_bytes, 0x0, 0x10, true, 0x70aad95c8b0f6f78)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerPrefix.PrefixString", prefix_string, 0x10, 0x10, true, 0xcd2e87377129ca15)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u40_new_container_prefix_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerPrefix", new_container_prefix, 0x0, 0x20, true, 0x5a56e0a523a3f4bb)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSuffix.NextContainerSuffix", next_container_suffix, 0x0, 0x40, true, 0x502d7d91770043c7)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u45_new_container_suffix_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSuffix", new_container_suffix, 0x0, 0x40, true, 0xd9496bd49bc4ae17)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerExtension.ExtensionLengthInBytes", extension_length_in_bytes, 0x0, 0x10, true, 0xba1c6187861b3d48)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerExtension.ExtensionString", extension_string, 0x10, 0x10, true, 0xaa669587b28e849a)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u50_new_container_extension_t), "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerExtension", new_container_extension, 0x0, 0x20, true, 0x96717e9c2cacfaa)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_policy_parameters_t), "_CLFS_MGMT_POLICY.PolicyParameters", policy_parameters, 0x80, 0x40, true, 0xf6071c8ba8475322)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif