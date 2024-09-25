#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_BUS_DATA.NumberOfLogicalUnits", number_of_logical_units, 0x0, 0x8, true, 0xfa97f6f938d6526d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_BUS_DATA.InitiatorBusId", initiator_bus_id, 0x8, 0x8, true, 0xfccd03788c9eb38e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_BUS_DATA.InquiryDataOffset", inquiry_data_offset, 0x20, 0x20, true, 0xb9f0fb273d46b0b5)
#else
#define _m00
#define _m01
#define _m02
#endif