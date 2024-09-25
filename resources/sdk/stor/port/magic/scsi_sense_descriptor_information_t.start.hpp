#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(scsi_sense_descriptor_header_t ), "_SCSI_SENSE_DESCRIPTOR_INFORMATION.Header", header, 0x0, 0x10, true, 0x6c8489c1b4cc4ce8)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SCSI_SENSE_DESCRIPTOR_INFORMATION.Valid", valid, 0x10, 0x1, true, 0x1ba84db4566d535b, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SCSI_SENSE_DESCRIPTOR_INFORMATION.Information", information, 0x20, 0x40, true, 0x8229de56495b25c6)
#else
#define _m00
#define _m01
#define _m02
#endif