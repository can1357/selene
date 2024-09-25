#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_ENCLAVE_INIT_INFO_VBS_BASIC.FamilyId", family_id, 0x0, 0x80, true, 0xd630753ef6b7b855)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_ENCLAVE_INIT_INFO_VBS_BASIC.ImageId", image_id, 0x80, 0x80, true, 0xcea289db364ced0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ENCLAVE_INIT_INFO_VBS_BASIC.EnclaveSize", enclave_size, 0x100, 0x40, true, 0xaa0032df4a07782d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCLAVE_INIT_INFO_VBS_BASIC.EnclaveSvn", enclave_svn, 0x140, 0x20, true, 0x27a3171665d46a05)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ENCLAVE_INIT_INFO_VBS_BASIC.SignatureInfoHandle", signature_info_handle, 0x180, 0x40, true, 0x9227d4bbed862a1e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif