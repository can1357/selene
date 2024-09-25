#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_RTL_ENCLAVE_LAUNCH_TOKEN.Measurement", measurement, 0x0, 0x0, true, 0x3599742dc65e3aa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_RTL_ENCLAVE_LAUNCH_TOKEN.AuthorId", author_id, 0x100, 0x0, true, 0x53d4d473ddde77c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_RTL_ENCLAVE_LAUNCH_TOKEN.FamilyId", family_id, 0x200, 0x80, true, 0x234a5326cc8872f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_RTL_ENCLAVE_LAUNCH_TOKEN.ImageId", image_id, 0x280, 0x80, true, 0xea8c89b330e7970)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_ENCLAVE_LAUNCH_TOKEN.EnclaveSize", enclave_size, 0x300, 0x40, true, 0x96cdcabf0d9bd6a4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ENCLAVE_LAUNCH_TOKEN.EnclaveSvn", enclave_svn, 0x340, 0x20, true, 0xe8c2b1010deaf9d7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ENCLAVE_LAUNCH_TOKEN.PolicyFlags", policy_flags, 0x360, 0x20, true, 0xd180f1c11b4c7f2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif