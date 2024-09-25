#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulFlags", ul_flags, 0x0, 0x20, true, 0x9afcedec59ae0a6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulEncodedAssemblyIdentityLength", ul_encoded_assembly_identity_length, 0x20, 0x20, true, 0x15d6e7b094ae2670)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulManifestPathType", ul_manifest_path_type, 0x40, 0x20, true, 0x45780c99fc366b7a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulManifestPathLength", ul_manifest_path_length, 0x60, 0x20, true, 0x1c110e930f334f8f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.liManifestLastWriteTime", li_manifest_last_write_time, 0x80, 0x40, true, 0xef0797335a3eb6eb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulPolicyPathType", ul_policy_path_type, 0xc0, 0x20, true, 0xb2a7276c7090c677)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulPolicyPathLength", ul_policy_path_length, 0xe0, 0x20, true, 0x5bfa03b14f10f341)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.liPolicyLastWriteTime", li_policy_last_write_time, 0x100, 0x40, true, 0x37ddf52a2eddae7c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulMetadataSatelliteRosterIndex", ul_metadata_satellite_roster_index, 0x140, 0x20, true, 0xde57dd0daadc3164)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulManifestVersionMajor", ul_manifest_version_major, 0x160, 0x20, true, 0x146d7fdb6a5219a4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulManifestVersionMinor", ul_manifest_version_minor, 0x180, 0x20, true, 0x5f175ed58286bb7b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulPolicyVersionMajor", ul_policy_version_major, 0x1a0, 0x20, true, 0x1278173a2230e02d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulPolicyVersionMinor", ul_policy_version_minor, 0x1c0, 0x20, true, 0xa447354a6be1baac)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulAssemblyDirectoryNameLength", ul_assembly_directory_name_length, 0x1e0, 0x20, true, 0x6858b4cce13460c6)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.lpAssemblyEncodedAssemblyIdentity", lp_assembly_encoded_assembly_identity, 0x200, 0x40, true, 0xddd02415cd012109)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.lpAssemblyManifestPath", lp_assembly_manifest_path, 0x240, 0x40, true, 0x3403cf39e8730b81)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.lpAssemblyPolicyPath", lp_assembly_policy_path, 0x280, 0x40, true, 0x6e9346ba9322e8af)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.lpAssemblyDirectoryName", lp_assembly_directory_name, 0x2c0, 0x40, true, 0x53f44ef77e37d528)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.ulFileCount", ul_file_count, 0x300, 0x20, true, 0x8848e61669054cc3)
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
#endif