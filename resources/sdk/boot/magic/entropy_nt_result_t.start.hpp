#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTROPY_NT_RESULT.maxEntropySources", max_entropy_sources, 0x0, 0x20, true, 0xb432549efde83596)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct boot::entropy_source_nt_result_t, 8>), "_BOOT_ENTROPY_NT_RESULT.EntropySourceResult", entropy_source_result, 0x40, 0x80, true, 0x6aabed856180795f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_BOOT_ENTROPY_NT_RESULT.SeedBytesForCng", seed_bytes_for_cng, 0x20c0, 0x80, true, 0x8b119b751d76b339)
#else
#define _m00
#define _m01
#define _m02
#endif