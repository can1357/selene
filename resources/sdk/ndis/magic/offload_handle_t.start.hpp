#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_NDIS_OFFLOAD_HANDLE.NdisReserved", ndis_reserved, 0x0, 0x40, true, 0xc227b2f318b5f05f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OFFLOAD_HANDLE.MiniportOffloadContext", miniport_offload_context, 0x40, 0x40, true, 0x26de66f2e97c50d9)
#else
#define _m00
#define _m01
#endif