#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SCSI_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0x69cc31b7ccc2255e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SCSI_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0xa09e3026559777a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_SCSI_DEVICE_DATA.HostIdentifier", host_identifier, 0x20, 0x8, true, 0x1786b9e837cb266c)
#else
#define _m00
#define _m01
#define _m02
#endif