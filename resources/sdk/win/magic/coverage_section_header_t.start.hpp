#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.Signature", signature, 0x0, 0x20, true, 0x2efdbb0fc6817b9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.CoverageType", coverage_type, 0x20, 0x20, true, 0x45f5fcceedfd0cba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_COVERAGE_SECTION_HEADER.MD5Hash", md5_hash, 0x40, 0x80, true, 0xd0529a4898e9fe78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.CoverageSectionSize", coverage_section_size, 0xc0, 0x20, true, 0x48cf6c635fe4f4e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.CoverageVectorSize", coverage_vector_size, 0xe0, 0x20, true, 0xa342266d1f4c1e15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.CoverageVectorOffset", coverage_vector_offset, 0x100, 0x20, true, 0xef1972bd4a2b182d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_SECTION_HEADER.ExtraDataOffset", extra_data_offset, 0x120, 0x20, true, 0xf76b07d273c6dc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif