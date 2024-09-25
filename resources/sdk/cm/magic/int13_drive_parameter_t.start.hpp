#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_INT13_DRIVE_PARAMETER.DriveSelect", drive_select, 0x0, 0x10, true, 0x3cca324f9f060279)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_INT13_DRIVE_PARAMETER.MaxCylinders", max_cylinders, 0x10, 0x20, true, 0xe18f46626f8210ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_INT13_DRIVE_PARAMETER.SectorsPerTrack", sectors_per_track, 0x30, 0x10, true, 0x75801e96fbaa5017)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_INT13_DRIVE_PARAMETER.MaxHeads", max_heads, 0x40, 0x10, true, 0xd0f931483ec4423a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_INT13_DRIVE_PARAMETER.NumberDrives", number_drives, 0x50, 0x10, true, 0x1af80a31a29a85de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif