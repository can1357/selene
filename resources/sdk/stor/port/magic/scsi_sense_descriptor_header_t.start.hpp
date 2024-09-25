#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_HEADER.DescriptorType", descriptor_type, 0x0, 0x8, true, 0x81faf644b6320741)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_HEADER.AdditionalLength", additional_length, 0x8, 0x8, true, 0xd55ea411486b040e)
#else
#define _m00
#define _m01
#endif