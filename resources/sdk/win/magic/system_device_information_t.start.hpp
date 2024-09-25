#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfDisks", number_of_disks, 0x0, 0x20, true, 0x571909c32dc03ded)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfFloppies", number_of_floppies, 0x20, 0x20, true, 0x885cad7e9912f81c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfCdRoms", number_of_cd_roms, 0x40, 0x20, true, 0xfb32ed669860d76c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfTapes", number_of_tapes, 0x60, 0x20, true, 0x48b0c3c6f3d4f299)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfSerialPorts", number_of_serial_ports, 0x80, 0x20, true, 0xcef540d4ca7d01fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_INFORMATION.NumberOfParallelPorts", number_of_parallel_ports, 0xa0, 0x20, true, 0xf78c8f32d57adeb2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif