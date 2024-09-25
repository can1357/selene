#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::description_header_t), "_FADT.Header", header, 0x0, 0x20, true, 0xc9289ad84fdd8dd2)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.facs", facs, 0x120, 0x20, true, 0x3d76a49639071c97)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.dsdt", dsdt, 0x140, 0x20, true, 0x36b281b452a06825)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.int_model", int_model, 0x160, 0x8, true, 0x18b62a121df27b1c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pm_profile", pm_profile, 0x168, 0x8, true, 0xec89c9c1f6d17ecb)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.sci_int_vector", sci_int_vector, 0x170, 0x10, true, 0x47674b2fad8cdd4a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.smi_cmd_io_port", smi_cmd_io_port, 0x180, 0x20, true, 0xe7c3460c1a8010b9)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.acpi_on_value", acpi_on_value, 0x1a0, 0x8, true, 0xee71aa3f34367bf1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.acpi_off_value", acpi_off_value, 0x1a8, 0x8, true, 0x95ce02a27488c8f4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.s4bios_req", s4bios_req, 0x1b0, 0x8, true, 0x8c5f33ddea817c54)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pstate_control", pstate_control, 0x1b8, 0x8, true, 0x79e7c3a68a9c8a60)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm1a_evt_blk_io_port", pm1a_evt_blk_io_port, 0x1c0, 0x20, true, 0x4516dba39a76b082)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm1b_evt_blk_io_port", pm1b_evt_blk_io_port, 0x1e0, 0x20, true, 0x171f2d1420642243)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm1a_ctrl_blk_io_port", pm1a_ctrl_blk_io_port, 0x200, 0x20, true, 0x661bd33aa5c9ccfe)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm1b_ctrl_blk_io_port", pm1b_ctrl_blk_io_port, 0x220, 0x20, true, 0xc2e5137c733755da)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm2_ctrl_blk_io_port", pm2_ctrl_blk_io_port, 0x240, 0x20, true, 0xe73b83682c2a700)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.pm_tmr_blk_io_port", pm_tmr_blk_io_port, 0x260, 0x20, true, 0x408a92b6c63dd101)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.gp0_blk_io_port", gp0_blk_io_port, 0x280, 0x20, true, 0xc7a53d51eda24a7f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.gp1_blk_io_port", gp1_blk_io_port, 0x2a0, 0x20, true, 0x8447b1b36b9847c9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pm1_evt_len", pm1_evt_len, 0x2c0, 0x8, true, 0x8d7e1317662d3114)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pm1_ctrl_len", pm1_ctrl_len, 0x2c8, 0x8, true, 0x8a9c304ae79137b0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pm2_ctrl_len", pm2_ctrl_len, 0x2d0, 0x8, true, 0x8790e655e4843511)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.pm_tmr_len", pm_tmr_len, 0x2d8, 0x8, true, 0xa694b34e2ca29383)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.gp0_blk_len", gp0_blk_len, 0x2e0, 0x8, true, 0x6250d16fc7ef16ee)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.gp1_blk_len", gp1_blk_len, 0x2e8, 0x8, true, 0x9f3db9fad758ee46)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.gp1_base", gp1_base, 0x2f0, 0x8, true, 0x645bc5f3fed32506)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.cstate_control", cstate_control, 0x2f8, 0x8, true, 0x2f5c1ff0395c60fa)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.lvl2_latency", lvl2_latency, 0x300, 0x10, true, 0xd08d72663799e4be)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.lvl3_latency", lvl3_latency, 0x310, 0x10, true, 0xd6816fa04891ca2c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.flush_size", flush_size, 0x320, 0x10, true, 0x3a0d006b412f6437)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.flush_stride", flush_stride, 0x330, 0x10, true, 0xc10f69597e948f14)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.duty_offset", duty_offset, 0x340, 0x8, true, 0x26da029f07dd51f5)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.duty_width", duty_width, 0x348, 0x8, true, 0x4e724fe553daba71)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.day_alarm_index", day_alarm_index, 0x350, 0x8, true, 0xdc2d15682cb4fa90)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.month_alarm_index", month_alarm_index, 0x358, 0x8, true, 0xadc012a006766935)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.century_alarm_index", century_alarm_index, 0x360, 0x8, true, 0x850d8ee49dd7cbd5)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.boot_arch", boot_arch, 0x368, 0x10, true, 0x28c8c9c416316159)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FADT.flags", flags, 0x380, 0x20, true, 0x6266bfd05ad50fb9)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.reset_reg", reset_reg, 0x3a0, 0x60, true, 0x15e5725e8bcf52cf)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.reset_val", reset_val, 0x400, 0x8, true, 0x82d09fc4ae8a81a8)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FADT.arm_boot_arch", arm_boot_arch, 0x408, 0x10, true, 0xbd8c69c99df7f68e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FADT.x_firmware_ctrl", x_firmware_ctrl, 0x420, 0x40, true, 0xb4d55337255c5ade)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FADT.x_dsdt", x_dsdt, 0x460, 0x40, true, 0x9d1359472497c31e)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm1a_evt_blk", x_pm1a_evt_blk, 0x4a0, 0x60, true, 0xb954e76f64ec5a8c)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm1b_evt_blk", x_pm1b_evt_blk, 0x500, 0x60, true, 0x4783eb2a9db4e7b3)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm1a_ctrl_blk", x_pm1a_ctrl_blk, 0x560, 0x60, true, 0x2df8e0bcb1a8240e)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm1b_ctrl_blk", x_pm1b_ctrl_blk, 0x5c0, 0x60, true, 0x6b3d838583ca99f0)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm2_ctrl_blk", x_pm2_ctrl_blk, 0x620, 0x60, true, 0x3ebca6e60a5a9e4d)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_pm_tmr_blk", x_pm_tmr_blk, 0x680, 0x60, true, 0xa1101725bebba4c)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_gp0_blk", x_gp0_blk, 0x6e0, 0x60, true, 0xa0a8b22da00c066e)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.x_gp1_blk", x_gp1_blk, 0x740, 0x60, true, 0xb47b34c92b754af9)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.sleep_control_reg", sleep_control_reg, 0x7a0, 0x60, true, 0xbde585b16d4585e6)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gen_addr_t), "_FADT.sleep_status_reg", sleep_status_reg, 0x800, 0x60, true, 0xef4d73812589d659)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FADT.minor_version_number", minor_version_number, 0x418, 0x8, true, 0xb95608e457a1d1e3)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FADT.hypervisor_vendor_identity", hypervisor_vendor_identity, 0x0, 0x0, false, 0x34dc5309b4111adb)
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
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#endif