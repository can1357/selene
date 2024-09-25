#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "STORAGE_BREAK_RESERVATION_REQUEST.Length", length, 0x0, 0x20, true, 0x206fa19bc2b6062a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "STORAGE_BREAK_RESERVATION_REQUEST._unused", unused, 0x20, 0x8, true, 0x20eb7807100b3ce4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "STORAGE_BREAK_RESERVATION_REQUEST.PathId", path_id, 0x28, 0x8, true, 0x136462397bc2ec07)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "STORAGE_BREAK_RESERVATION_REQUEST.TargetId", target_id, 0x30, 0x8, true, 0x292ec1d156c69d0d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "STORAGE_BREAK_RESERVATION_REQUEST.Lun", lun, 0x38, 0x8, true, 0x99f6575e03c10949)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif