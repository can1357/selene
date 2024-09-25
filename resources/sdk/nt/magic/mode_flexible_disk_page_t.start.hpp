#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_FLEXIBLE_DISK_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xc8f0b33577780917, 6, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FLEXIBLE_DISK_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0x7b6a68d170a3a5d8, 1, uint8_t)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x424374293bddb01c)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.TransferRate", transfer_rate, 0x10, 0x10, true, 0x415b41048d6af814)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.NumberOfHeads", number_of_heads, 0x20, 0x8, true, 0x1722b75c075a3b29)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.SectorsPerTrack", sectors_per_track, 0x28, 0x8, true, 0xd401750a144c5460)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.BytesPerSector", bytes_per_sector, 0x30, 0x10, true, 0x4e0ce07294e7a68)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.NumberOfCylinders", number_of_cylinders, 0x40, 0x10, true, 0xaba741b67bd3ae3e)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.StartWritePrecom", start_write_precom, 0x50, 0x10, true, 0xa4e03c51e205f23f)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.StartReducedCurrent", start_reduced_current, 0x60, 0x10, true, 0x27af88296313bb36)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.StepRate", step_rate, 0x70, 0x10, true, 0xb792ebdd4177afed)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.StepPluseWidth", step_pluse_width, 0x80, 0x8, true, 0x237a352cfdd2cb4d)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.HeadSettleDelay", head_settle_delay, 0x88, 0x10, true, 0xa1d7f28d073a78d1)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.MotorOnDelay", motor_on_delay, 0x98, 0x8, true, 0xf7873bfad6bbb3f7)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.MotorOffDelay", motor_off_delay, 0xa0, 0x8, true, 0x506be0c9e689874f)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FLEXIBLE_DISK_PAGE.MotorOnAsserted", motor_on_asserted, 0xad, 0x1, true, 0x9f79186cc886f946, 1, uint8_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FLEXIBLE_DISK_PAGE.StartSectorNumber", start_sector_number, 0xae, 0x1, true, 0xfa794d5250323f43, 1, uint8_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FLEXIBLE_DISK_PAGE.TrueReadySignal", true_ready_signal, 0xaf, 0x1, true, 0xbbe3c19a43793a39, 1, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_FLEXIBLE_DISK_PAGE.StepPlusePerCyclynder", step_pluse_per_cyclynder, 0xb0, 0x4, true, 0x42de82c8a2a26390, 4, uint8_t)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.WriteCompenstation", write_compenstation, 0xb8, 0x8, true, 0xdccf4a407970cbf0)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.HeadLoadDelay", head_load_delay, 0xc0, 0x8, true, 0x6c6e6b637273f689)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FLEXIBLE_DISK_PAGE.HeadUnloadDelay", head_unload_delay, 0xc8, 0x8, true, 0xab6f722ed792aa6)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_FLEXIBLE_DISK_PAGE.Pin2Usage", pin2_usage, 0xd0, 0x4, true, 0xec6f14fb5093f72d, 4, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_FLEXIBLE_DISK_PAGE.Pin34Usage", pin34_usage, 0xd4, 0x4, true, 0xbd28e72ce7cf08a6, 4, uint8_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_FLEXIBLE_DISK_PAGE.Pin1Usage", pin1_usage, 0xd8, 0x4, true, 0x397ec0aa58aa8a41, 4, uint8_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_FLEXIBLE_DISK_PAGE.Pin4Usage", pin4_usage, 0xdc, 0x4, true, 0x1ff59b628f8778c5, 4, uint8_t)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FLEXIBLE_DISK_PAGE.MediumRotationRate", medium_rotation_rate, 0xe0, 0x10, true, 0x2cf8afd67238503d)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif