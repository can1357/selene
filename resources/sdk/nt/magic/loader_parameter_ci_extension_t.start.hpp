#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityOptions", code_integrity_options, 0x0, 0x20, true, 0x5ee9478b985948f9)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_CI_EXTENSION.UpgradeInProgress", upgrade_in_progress, 0x20, 0x1, true, 0xd3b3f20c47aa9533, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_CI_EXTENSION.IsWinPE", is_win_pe, 0x21, 0x1, true, 0xcde05a8a2b053ad8, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_CI_EXTENSION.CustomKernelSignersAllowed", custom_kernel_signers_allowed, 0x22, 0x1, true, 0x1a2c99ace4b018d, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_CI_EXTENSION.StateSeparationEnabled", state_separation_enabled, 0x23, 0x1, true, 0xeda3e688fe483f40, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOADER_PARAMETER_CI_EXTENSION.WhqlEnforcementDate", whql_enforcement_date, 0x40, 0x40, true, 0x99bc0f8986a05634)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.RevocationListOffset", revocation_list_offset, 0x80, 0x20, true, 0x1753e344aac501eb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.RevocationListSize", revocation_list_size, 0xa0, 0x20, true, 0xac185aacffd2d24f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicyOffset", code_integrity_policy_offset, 0xc0, 0x20, true, 0xf9e5f21c882b1037)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicySize", code_integrity_policy_size, 0xe0, 0x20, true, 0x736d5dca12d18eae)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicyHashOffset", code_integrity_policy_hash_offset, 0x100, 0x20, true, 0x2550f960d2cf2ebd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicyHashSize", code_integrity_policy_hash_size, 0x120, 0x20, true, 0x5be4f02860475f99)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicyOriginalHashOffset", code_integrity_policy_original_hash_offset, 0x140, 0x20, true, 0x78345845f3b8b2d5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.CodeIntegrityPolicyOriginalHashSize", code_integrity_policy_original_hash_size, 0x160, 0x20, true, 0x5a4e0bf4268ced15)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_PARAMETER_CI_EXTENSION.WeakCryptoPolicyLoadStatus", weak_crypto_policy_load_status, 0x180, 0x20, true, 0xf39aa56b421e4e56)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.WeakCryptoPolicyOffset", weak_crypto_policy_offset, 0x1a0, 0x20, true, 0x2e71052a22e0a5d5)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.WeakCryptoPolicySize", weak_crypto_policy_size, 0x1c0, 0x20, true, 0xff1f90379f733804)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.SecureBootPolicyOffset", secure_boot_policy_offset, 0x1e0, 0x20, true, 0xf4eff962cd228591)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_CI_EXTENSION.SecureBootPolicySize", secure_boot_policy_size, 0x200, 0x20, true, 0xc40327e5ba90177e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_LOADER_PARAMETER_CI_EXTENSION.SerializedData", serialized_data, 0x240, 0x8, true, 0x77a586207ed5dcee)
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
#endif