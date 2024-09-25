#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.Cylinders", cylinders, 0x0, 0x40, true, 0xc0f7bb9054c08ce8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_media_type_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.MediaType", media_type, 0x40, 0x20, true, 0x6e72c988c4edb9ab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.TracksPerCylinder", tracks_per_cylinder, 0x60, 0x20, true, 0x2f92250bcef7c98f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.SectorsPerTrack", sectors_per_track, 0x80, 0x20, true, 0xe65bdf6bcfadbb8f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.BytesPerSector", bytes_per_sector, 0xa0, 0x20, true, 0xc665ce9a02bfd7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.NumberMediaSides", number_media_sides, 0xc0, 0x20, true, 0xca72c79e0775599)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.MediaCharacteristics", media_characteristics, 0xe0, 0x20, true, 0x6dccf577179120cd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_disk_info_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo", disk_info, 0x0, 0x0, true, 0x78e5bc2dc17d6f0d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.Cylinders", cylinders, 0x0, 0x40, true, 0x262a0e095340399)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_media_type_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.MediaType", media_type, 0x40, 0x20, true, 0x56802b7e05d915c2)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.TracksPerCylinder", tracks_per_cylinder, 0x60, 0x20, true, 0xc99e502151a8fac2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.SectorsPerTrack", sectors_per_track, 0x80, 0x20, true, 0x55e242239f0284c6)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.BytesPerSector", bytes_per_sector, 0xa0, 0x20, true, 0x6b227906e39036af)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.NumberMediaSides", number_media_sides, 0xc0, 0x20, true, 0xaa0527531d006f31)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.MediaCharacteristics", media_characteristics, 0xe0, 0x20, true, 0x14accd50d96fcbf4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_disk_info_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo", removable_disk_info, 0x0, 0x0, true, 0x4598591c309a8724)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_media_type_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.MediaType", media_type, 0x0, 0x20, true, 0xf4058c7caf02314f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.MediaCharacteristics", media_characteristics, 0x20, 0x20, true, 0x416a9c684c35d7ec)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.CurrentBlockSize", current_block_size, 0x40, 0x20, true, 0x577f9dbe80cf9ed3)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_bus_type_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusType", bus_type, 0x60, 0x20, true, 0x74909f2225376fa)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData.ScsiInformation.MediumType", medium_type, 0x0, 0x8, true, 0xd060e23e14194aa5)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData.ScsiInformation.DensityCode", density_code, 0x8, 0x8, true, 0xc0d5b591bf1098ed)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_scsi_information_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData.ScsiInformation", scsi_information, 0x0, 0x10, true, 0xd673380df313ddbe)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_bus_specific_data_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData", bus_specific_data, 0x80, 0x10, true, 0x9e8ba2a55e43cd56)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_tape_info_t), "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo", tape_info, 0x0, 0xa0, true, 0x4079d0049fb157c5)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_device_specific_t), "_DEVICE_MEDIA_INFO.DeviceSpecific", device_specific, 0x0, 0x0, true, 0xfc50cda4834da865)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#endif