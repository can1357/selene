#pragma once
#include <sdkgen/support_library.hpp>
#include "gen_addr_t.hpp"
#include "description_header_t.hpp"

#include "magic/fadt_t.start.hpp"
namespace nt
{
    // [struct _FADT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fadt_t                                                        
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m000 struct nt::description_header_t header;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                        facs;                        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .facs
        _m002 uint32_t                        dsdt;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dsdt
        _m003 uint8_t                         int_model;                   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .int_model
        _m004 uint8_t                         pm_profile;                  //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .pm_profile
        _m005 uint16_t                        sci_int_vector;              //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .sci_int_vector
        _m006 uint32_t                        smi_cmd_io_port;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .smi_cmd_io_port
        _m007 uint8_t                         acpi_on_value;               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .acpi_on_value
        _m008 uint8_t                         acpi_off_value;              //{ +0x0035    +0x0035    +0x0035    +0x0035    } | .acpi_off_value
        _m009 uint8_t                         s4bios_req;                  //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .s4bios_req
        _m010 uint8_t                         pstate_control;              //{ +0x0037    +0x0037    +0x0037    +0x0037    } | .pstate_control
        _m011 uint32_t                        pm1a_evt_blk_io_port;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pm1a_evt_blk_io_port
        _m012 uint32_t                        pm1b_evt_blk_io_port;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .pm1b_evt_blk_io_port
        _m013 uint32_t                        pm1a_ctrl_blk_io_port;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pm1a_ctrl_blk_io_port
        _m014 uint32_t                        pm1b_ctrl_blk_io_port;       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .pm1b_ctrl_blk_io_port
        _m015 uint32_t                        pm2_ctrl_blk_io_port;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pm2_ctrl_blk_io_port
        _m016 uint32_t                        pm_tmr_blk_io_port;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .pm_tmr_blk_io_port
        _m017 uint32_t                        gp0_blk_io_port;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .gp0_blk_io_port
        _m018 uint32_t                        gp1_blk_io_port;             //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .gp1_blk_io_port
        _m019 uint8_t                         pm1_evt_len;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pm1_evt_len
        _m020 uint8_t                         pm1_ctrl_len;                //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .pm1_ctrl_len
        _m021 uint8_t                         pm2_ctrl_len;                //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .pm2_ctrl_len
        _m022 uint8_t                         pm_tmr_len;                  //{ +0x005b    +0x005b    +0x005b    +0x005b    } | .pm_tmr_len
        _m023 uint8_t                         gp0_blk_len;                 //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .gp0_blk_len
        _m024 uint8_t                         gp1_blk_len;                 //{ +0x005d    +0x005d    +0x005d    +0x005d    } | .gp1_blk_len
        _m025 uint8_t                         gp1_base;                    //{ +0x005e    +0x005e    +0x005e    +0x005e    } | .gp1_base
        _m026 uint8_t                         cstate_control;              //{ +0x005f    +0x005f    +0x005f    +0x005f    } | .cstate_control
        _m027 uint16_t                        lvl2_latency;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .lvl2_latency
        _m028 uint16_t                        lvl3_latency;                //{ +0x0062    +0x0062    +0x0062    +0x0062    } | .lvl3_latency
        _m029 uint16_t                        flush_size;                  //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .flush_size
        _m030 uint16_t                        flush_stride;                //{ +0x0066    +0x0066    +0x0066    +0x0066    } | .flush_stride
        _m031 uint8_t                         duty_offset;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .duty_offset
        _m032 uint8_t                         duty_width;                  //{ +0x0069    +0x0069    +0x0069    +0x0069    } | .duty_width
        _m033 uint8_t                         day_alarm_index;             //{ +0x006a    +0x006a    +0x006a    +0x006a    } | .day_alarm_index
        _m034 uint8_t                         month_alarm_index;           //{ +0x006b    +0x006b    +0x006b    +0x006b    } | .month_alarm_index
        _m035 uint8_t                         century_alarm_index;         //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .century_alarm_index
        _m036 uint16_t                        boot_arch;                   //{ +0x006d    +0x006d    +0x006d    +0x006d    } | .boot_arch
        _m037 uint32_t                        flags;                       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .flags
        _m038 struct nt::gen_addr_t           reset_reg;                   //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .reset_reg
        _m039 uint8_t                         reset_val;                   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .reset_val
        _m040 uint16_t                        arm_boot_arch;               //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .arm_boot_arch
        _m041 int64_t                         x_firmware_ctrl;             //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .x_firmware_ctrl
        _m042 int64_t                         x_dsdt;                      //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .x_dsdt
        _m043 struct nt::gen_addr_t           x_pm1a_evt_blk;              //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .x_pm1a_evt_blk
        _m044 struct nt::gen_addr_t           x_pm1b_evt_blk;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .x_pm1b_evt_blk
        _m045 struct nt::gen_addr_t           x_pm1a_ctrl_blk;             //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .x_pm1a_ctrl_blk
        _m046 struct nt::gen_addr_t           x_pm1b_ctrl_blk;             //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .x_pm1b_ctrl_blk
        _m047 struct nt::gen_addr_t           x_pm2_ctrl_blk;              //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .x_pm2_ctrl_blk
        _m048 struct nt::gen_addr_t           x_pm_tmr_blk;                //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .x_pm_tmr_blk
        _m049 struct nt::gen_addr_t           x_gp0_blk;                   //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .x_gp0_blk
        _m050 struct nt::gen_addr_t           x_gp1_blk;                   //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .x_gp1_blk
        _m051 struct nt::gen_addr_t           sleep_control_reg;           //{ +0x00f4    +0x00f4    +0x00f4    +0x00f4    } | .sleep_control_reg
        _m052 struct nt::gen_addr_t           sleep_status_reg;            //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .sleep_status_reg
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m053 uint8_t                         minor_version_number;        //{ +0x0083    +0x0083    +0x0083    } | .minor_version_number
                                                                         
        // Windows 11                                                    
        //                                                               
        _m054 uint64_t                        hypervisor_vendor_identity;  //{ +0x010c    } | .hypervisor_vendor_identity
                                                                         
        SDK_MAGIC_PROPERTIES( "_FADT.$", 0x10c, true, 0xfe1fba9cf0c50de5 );                           
        SDK_DYNAMIC_SIZE( fadt_t );                                      
    };                                                                   
};
#include "magic/fadt_t.end.hpp"
