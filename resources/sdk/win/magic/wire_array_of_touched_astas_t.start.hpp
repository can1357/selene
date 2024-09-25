#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireArrayOfTouchedAstas.size", size, 0x0, 0x20, true, 0x7b283715f89dbe0c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireArrayOfTouchedAstas.ref", ref, 0x40, 0x20, true, 0x838cb692798cdaea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireArrayOfTouchedAstas.array_size", array_size, 0x60, 0x20, true, 0xdf089b273aac32ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "WireArrayOfTouchedAstas.astaOxids", asta_oxids, 0x80, 0x0, true, 0xeffcb5a297f16fa6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif