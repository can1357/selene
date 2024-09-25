#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V4.Enabled", enabled, 0x0, 0x8, true, 0x29813bd568c1dc5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V4.EncapsulationType", encapsulation_type, 0x20, 0x20, true, 0xc94414c0abb31c38)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V4.HeaderSize", header_size, 0x40, 0x20, true, 0xd1878ab3c8921de4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_v4_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V4", v4, 0x0, 0x60, true, 0xc3e50e68395a74c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V6.Enabled", enabled, 0x0, 0x8, true, 0x757adc2051a7394)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V6.EncapsulationType", encapsulation_type, 0x20, 0x20, true, 0xd430ac8d0abc3094)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V6.HeaderSize", header_size, 0x40, 0x20, true, 0x5ecff4cd1a1edf7e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_v6_t), "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V6", v6, 0x60, 0x60, true, 0xcab52def3eb2c674)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif