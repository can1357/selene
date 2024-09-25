#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDS.Signature", signature, 0x0, 0x20, true, 0xe8a02bc0315f219e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RSDS.Guid", guid, 0x20, 0x80, true, 0xea2e594ff7e43a4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDS.Age", age, 0xa0, 0x20, true, 0xeabe77e08b6dea10)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_RSDS.PdbName", pdb_name, 0xc0, 0x8, true, 0xd2159dfe8b4b0ec0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif