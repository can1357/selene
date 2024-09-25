#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_STATUS_INDICATION.Header", header, 0x0, 0x20, true, 0x5bf0cddb9f9b9bcc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_STATUS_INDICATION.SourceHandle", source_handle, 0x40, 0x40, true, 0x97b27291d7f8c927)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_STATUS_INDICATION.PortNumber", port_number, 0x80, 0x20, true, 0xbde0ab8ab8b71339)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_STATUS_INDICATION.StatusCode", status_code, 0xa0, 0x20, true, 0x88e5f33c8054bf62)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_STATUS_INDICATION.Flags", flags, 0xc0, 0x20, true, 0xa4a6ba3b49d46b5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_STATUS_INDICATION.DestinationHandle", destination_handle, 0x100, 0x40, true, 0xa090e693eac9dcb3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_STATUS_INDICATION.RequestId", request_id, 0x140, 0x40, true, 0x37aed98a744a5e94)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_STATUS_INDICATION.StatusBuffer", status_buffer, 0x180, 0x40, true, 0x8f9975b827d25a34)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_STATUS_INDICATION.StatusBufferSize", status_buffer_size, 0x1c0, 0x20, true, 0x7ce4404186f4b5f9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_STATUS_INDICATION.Guid", guid, 0x1e0, 0x80, true, 0xa040d161f0b00298)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_NDIS_STATUS_INDICATION.NdisReserved", ndis_reserved, 0x280, 0x0, true, 0x41546aae3754f9fd)
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
#endif