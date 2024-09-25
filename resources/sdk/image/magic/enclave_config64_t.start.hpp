#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.Size", size, 0x0, 0x20, true, 0x1ea1564588a6cac4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.MinimumRequiredConfigSize", minimum_required_config_size, 0x20, 0x20, true, 0x8fb559ccc40f8eb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.PolicyFlags", policy_flags, 0x40, 0x20, true, 0x2eb7916b07065a17)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.NumberOfImports", number_of_imports, 0x60, 0x20, true, 0x1d5808d4f179610c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.ImportList", import_list, 0x80, 0x20, true, 0x27a1b0b942bb7c04)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.ImportEntrySize", import_entry_size, 0xa0, 0x20, true, 0x2265ddc036e062bf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_CONFIG64.FamilyID", family_id, 0xc0, 0x80, true, 0xd35707f63eefd65d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_CONFIG64.ImageID", image_id, 0x140, 0x80, true, 0x805794c4b1d4098b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.ImageVersion", image_version, 0x1c0, 0x20, true, 0xb532c86c0471f922)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.SecurityVersion", security_version, 0x1e0, 0x20, true, 0x9daab32d11a9d896)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ENCLAVE_CONFIG64.EnclaveSize", enclave_size, 0x200, 0x40, true, 0x78aad7ddb04017e5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.NumberOfThreads", number_of_threads, 0x240, 0x20, true, 0x6e7ac409a13fe3c4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG64.EnclaveFlags", enclave_flags, 0x260, 0x20, true, 0xdb110e8af55a9417)
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
#endif