#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETIO_NET_BUFFER_CONTEXT.OriginalDataOffset", original_data_offset, 0x0, 0x20, true, 0x9c4a4b1349d5017d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETIO_NET_BUFFER_CONTEXT.OriginalDataLength", original_data_length, 0x20, 0x20, true, 0x51a9020bf928d76b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETIO_NET_BUFFER_CONTEXT.TruncatedLength", truncated_length, 0x40, 0x20, true, 0xced0dd71a638b89f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETIO_NET_BUFFER_CONTEXT.Flags", flags, 0x60, 0x20, true, 0xaef01abb2ada51d5)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NETIO_NET_BUFFER_CONTEXT.EcnField", ecn_field, 0x60, 0x2, true, 0xba1cffbaa1f3f72d, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.Converted", converted, 0x63, 0x1, true, 0x7abb24583c29f8b8, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.Restored", restored, 0x64, 0x1, true, 0x4638f5412319e0d1, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.EcnForceNotEct", ecn_force_not_ect, 0x65, 0x1, true, 0x6dde4b849a4d508, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.NdPriority", nd_priority, 0x66, 0x1, true, 0xd7631b508ea8e752, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.IpsnpiForwardInjection", ipsnpi_forward_injection, 0x67, 0x1, true, 0xb344fe6ba6c2a988, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.IpsnpiForwardInjectionCopy", ipsnpi_forward_injection_copy, 0x68, 0x1, true, 0xf873a3fba7af3107, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NETIO_NET_BUFFER_CONTEXT.Scratch", scratch, 0x80, 0x80, true, 0x7d9788c05b84c471)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.EspTrailerSpaceAllocated", esp_trailer_space_allocated, 0x62, 0x1, true, 0x59f3d74874414467, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.SecondMdlAllocatedByTransport", second_mdl_allocated_by_transport, 0x0, 0x0, false, 0x7ae8d885346c7707, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NETIO_NET_BUFFER_CONTEXT.LastMdlAllocatedForEspTrailer", last_mdl_allocated_for_esp_trailer, 0x0, 0x0, false, 0xa4917425d4a42cc0, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif