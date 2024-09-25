#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.HeaderSize", header_size, 0x0, 0x20, true, 0x784f7428c79efb98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ProcessId", process_id, 0x20, 0x20, true, 0x860a96191e0c2fd4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ProcessStartKey", process_start_key, 0x40, 0x40, true, 0x39327779c62a6a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.CreateTime", create_time, 0x80, 0x40, true, 0x55989ef47dc8728c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.CreateInterruptTime", create_interrupt_time, 0xc0, 0x40, true, 0x9e99a291d11407a9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.CreateUnbiasedInterruptTime", create_unbiased_interrupt_time, 0x100, 0x40, true, 0x949cf233fa39f8be)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ProcessSequenceNumber", process_sequence_number, 0x140, 0x40, true, 0xd29ce3e1c7bcaad6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_TELEMETRY_ID_INFORMATION.SessionCreateTime", session_create_time, 0x180, 0x40, true, 0x23f4e8980cd53587)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.SessionId", session_id, 0x1c0, 0x20, true, 0xda053d7d34f33390)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.BootId", boot_id, 0x1e0, 0x20, true, 0x28dc30034617538d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ImageChecksum", image_checksum, 0x200, 0x20, true, 0x4a4ffc45b0eb38d7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ImageTimeDateStamp", image_time_date_stamp, 0x220, 0x20, true, 0xbe2c08df53d44bf3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.UserSidOffset", user_sid_offset, 0x240, 0x20, true, 0x4d2d5d889397f667)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.ImagePathOffset", image_path_offset, 0x260, 0x20, true, 0x30434f27f12f04c3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.PackageNameOffset", package_name_offset, 0x280, 0x20, true, 0x9761abb143f7392f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.RelativeAppNameOffset", relative_app_name_offset, 0x2a0, 0x20, true, 0xa349212985a67d3a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TELEMETRY_ID_INFORMATION.CommandLineOffset", command_line_offset, 0x2c0, 0x20, true, 0x7d1e4e755d33e783)
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
#endif