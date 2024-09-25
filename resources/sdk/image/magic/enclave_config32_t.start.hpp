#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.Size", size, 0x0, 0x20, true, 0xe9174d0dee4dc0ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.MinimumRequiredConfigSize", minimum_required_config_size, 0x20, 0x20, true, 0x53b19d9338de8057)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.PolicyFlags", policy_flags, 0x40, 0x20, true, 0xcd259b80d1d75ed5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.NumberOfImports", number_of_imports, 0x60, 0x20, true, 0x6dfc299e6fff0e3a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.ImportList", import_list, 0x80, 0x20, true, 0xab8b0c60a4410195)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.ImportEntrySize", import_entry_size, 0xa0, 0x20, true, 0x5346cf14bc394da)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_CONFIG32.FamilyID", family_id, 0xc0, 0x80, true, 0xbe4b0b83ab7b4c5a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_CONFIG32.ImageID", image_id, 0x140, 0x80, true, 0xbb72148f08028036)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.ImageVersion", image_version, 0x1c0, 0x20, true, 0xba18eda66525b8a2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.SecurityVersion", security_version, 0x1e0, 0x20, true, 0x354412d84002353b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.EnclaveSize", enclave_size, 0x200, 0x20, true, 0x5be7e29d3c7a0150)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.NumberOfThreads", number_of_threads, 0x220, 0x20, true, 0x5eb476209e280bc5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_CONFIG32.EnclaveFlags", enclave_flags, 0x240, 0x20, true, 0x5a4049bdf97007d6)
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