#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_speed_request_t), "_CDROM_SET_SPEED.RequestType", request_type, 0x0, 0x20, true, 0x24962612e1d04715)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CDROM_SET_SPEED.ReadSpeed", read_speed, 0x20, 0x10, true, 0x38ccd05366b89d45)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CDROM_SET_SPEED.WriteSpeed", write_speed, 0x30, 0x10, true, 0x7b0a46c373803f84)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_rotation_t), "_CDROM_SET_SPEED.RotationControl", rotation_control, 0x40, 0x20, true, 0x623153ae3710bfde)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif