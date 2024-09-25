#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_RANGE_ENTRY.StartOffset", start_offset, 0x0, 0x0, false, 0xb153969de1e624f7)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_HYBRID_RANGE_ENTRY.NativeCode", native_code, 0x0, 0x0, false, 0x103293e6f3f95201, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IMAGE_HYBRID_RANGE_ENTRY.AddressBits", address_bits, 0x0, 0x0, false, 0xbea5d4c2107d5b57, 31, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_HYBRID_RANGE_ENTRY.Length", length, 0x0, 0x0, false, 0x45fe61833bb5f0f3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif