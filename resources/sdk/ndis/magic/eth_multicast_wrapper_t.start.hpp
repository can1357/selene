#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETH_MULTICAST_WRAPPER.RefCount", ref_count, 0x0, 0x20, true, 0xa421e24aa26edea0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_ETH_MULTICAST_WRAPPER.MCastAddress", m_cast_address, 0x20, 0x30, true, 0xafbf8230f06df017)
#else
#define _m00
#define _m01
#endif