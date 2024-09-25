#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_WMI_REQUEST_BLOCK.Length", length, 0x0, 0x10, true, 0x27bcc25e89ec6cf9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.Function", function, 0x10, 0x8, true, 0x72678f24cc1b8d8e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.SrbStatus", srb_status, 0x18, 0x8, true, 0x4beeba7b8af36f33)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.WMISubFunction", wmi_sub_function, 0x20, 0x8, true, 0x8272605949c84234)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.PathId", path_id, 0x28, 0x8, true, 0x1989520e3fc507db)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.TargetId", target_id, 0x30, 0x8, true, 0x9a8d0841d982ecaf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.Lun", lun, 0x38, 0x8, true, 0xd394038090e989e0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_WMI_REQUEST_BLOCK.WMIFlags", wmi_flags, 0x48, 0x8, true, 0xffdec269ff47ee3e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_WMI_REQUEST_BLOCK.SrbFlags", srb_flags, 0x60, 0x20, true, 0xc3fd3a2bd0746a6a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_WMI_REQUEST_BLOCK.DataTransferLength", data_transfer_length, 0x80, 0x20, true, 0xd0258939abdb25fd)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_WMI_REQUEST_BLOCK.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0x45ef95b36484a99d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_WMI_REQUEST_BLOCK.DataBuffer", data_buffer, 0xc0, 0x40, true, 0x2b5a11e0b0db5514)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_WMI_REQUEST_BLOCK.DataPath", data_path, 0x100, 0x40, true, 0xb0eeddbbbbafcf79)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_WMI_REQUEST_BLOCK.OriginalRequest", original_request, 0x180, 0x40, true, 0xd7c08617c4c6e342)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_WMI_REQUEST_BLOCK.SrbExtension", srb_extension, 0x1c0, 0x40, true, 0x45ab0b9c8f3b132)
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