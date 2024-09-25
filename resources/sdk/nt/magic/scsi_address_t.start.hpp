#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_ADDRESS.Length", length, 0x0, 0x20, true, 0xf6a751da7cfee6fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_ADDRESS.PortNumber", port_number, 0x20, 0x8, true, 0x857c238011f58924)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_ADDRESS.PathId", path_id, 0x28, 0x8, true, 0xb95a87339ef3e97b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_ADDRESS.TargetId", target_id, 0x30, 0x8, true, 0xec54556c4f634479)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_ADDRESS.Lun", lun, 0x38, 0x8, true, 0x387380256afc28aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif