#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTROPY_LDR_RESULT.maxEntropySources", max_entropy_sources, 0x0, 0x20, true, 0xa9559825f0915597)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct boot::entropy_source_ldr_result_t, 10>), "_BOOT_ENTROPY_LDR_RESULT.EntropySourceResult", entropy_source_result, 0x40, 0x80, true, 0xb3d3aca04f758fdc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_BOOT_ENTROPY_LDR_RESULT.SeedBytesForCng", seed_bytes_for_cng, 0x20c0, 0x80, true, 0x5d26eb997bedb37a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1024>), "_BOOT_ENTROPY_LDR_RESULT.RngBytesForNtoskrnl", rng_bytes_for_ntoskrnl, 0x2240, 0x0, true, 0x5919ce12be4ec7ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_BOOT_ENTROPY_LDR_RESULT.KdEntropy", kd_entropy, 0x4240, 0x0, true, 0x2135f81ce2331909)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif