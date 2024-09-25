#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_CONNECTION_DATA.Count", count, 0x0, 0x20, true, 0x2934aff0cd2620f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::interrupt_vector_data_t, 1>), "_INTERRUPT_CONNECTION_DATA.Vectors", vectors, 0x40, 0xc0, true, 0x813fc41bfc127a5b)
#else
#define _m00
#define _m01
#endif