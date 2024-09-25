#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_SCALE_CAPABILITIES.Header", header, 0x0, 0x20, true, 0x6b66978dd6aa58a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_CAPABILITIES.CapabilitiesFlags", capabilities_flags, 0x20, 0x20, true, 0x4c6d6028ab0cf64c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_CAPABILITIES.NumberOfInterruptMessages", number_of_interrupt_messages, 0x40, 0x20, true, 0xef44c04da1d4b0f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_SCALE_CAPABILITIES.NumberOfReceiveQueues", number_of_receive_queues, 0x60, 0x20, true, 0x988dfc5a4085f070)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_SCALE_CAPABILITIES.NumberOfIndirectionTableEntries", number_of_indirection_table_entries, 0x80, 0x10, true, 0xa90bbefd63694e03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif