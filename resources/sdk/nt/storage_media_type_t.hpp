#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_MEDIA_TYPE]
    //  WDK 10
    //
    enum class storage_media_type_t : int32_t
    {                                        
        dds_4mm =            0x20,             // WDK 10
        mini_qic =           0x21,             // WDK 10
        travan =             0x22,             // WDK 10
        qic =                0x23,             // WDK 10
        mp_8mm =             0x24,             // WDK 10
        ame_8mm =            0x25,             // WDK 10
        ait1_8mm =           0x26,             // WDK 10
        dlt =                0x27,             // WDK 10
        nctp =               0x28,             // WDK 10
        ibm_3480 =           0x29,             // WDK 10
        ibm_3490e =          0x2a,             // WDK 10
        ibm_magstar_3590 =   0x2b,             // WDK 10
        ibm_magstar_mp =     0x2c,             // WDK 10
        stk_data_d3 =        0x2d,             // WDK 10
        sony_dtf =           0x2e,             // WDK 10
        dv_6mm =             0x2f,             // WDK 10
        dmi =                0x30,             // WDK 10
        sony_d2 =            0x31,             // WDK 10
        cleaner_cartridge =  0x32,             // WDK 10
        cd_rom =             0x33,             // WDK 10
        cd_r =               0x34,             // WDK 10
        cd_rw =              0x35,             // WDK 10
        dvd_rom =            0x36,             // WDK 10
        dvd_r =              0x37,             // WDK 10
        dvd_rw =             0x38,             // WDK 10
        mo_3_rw =            0x39,             // WDK 10
        mo_5_wo =            0x3a,             // WDK 10
        mo_5_rw =            0x3b,             // WDK 10
        mo_5_limdow =        0x3c,             // WDK 10
        pc_5_wo =            0x3d,             // WDK 10
        pc_5_rw =            0x3e,             // WDK 10
        pd_5_rw =            0x3f,             // WDK 10
        abl_5_wo =           0x40,             // WDK 10
        pinnacle_apex_5_rw = 0x41,             // WDK 10
        sony_12_wo =         0x42,             // WDK 10
        philips_12_wo =      0x43,             // WDK 10
        hitachi_12_wo =      0x44,             // WDK 10
        cygnet_12_wo =       0x45,             // WDK 10
        kodak_14_wo =        0x46,             // WDK 10
        mo_nfr_525 =         0x47,             // WDK 10
        nikon_12_rw =        0x48,             // WDK 10
        iomega_zip =         0x49,             // WDK 10
        iomega_jaz =         0x4a,             // WDK 10
        syquest_ez135 =      0x4b,             // WDK 10
        syquest_ezflyer =    0x4c,             // WDK 10
        syquest_syjet =      0x4d,             // WDK 10
        avatar_f2 =          0x4e,             // WDK 10
        mp2_8mm =            0x4f,             // WDK 10
        dst_s =              0x50,             // WDK 10
        dst_m =              0x51,             // WDK 10
        dst_l =              0x52,             // WDK 10
        vxa_tape_1 =         0x53,             // WDK 10
        vxa_tape_2 =         0x54,             // WDK 10
        stk_9840 =           0x55,             // WDK 10
        lto_ultrium =        0x56,             // WDK 10
        lto_accelis =        0x57,             // WDK 10
        dvd_ram =            0x58,             // WDK 10
        ait_8mm =            0x59,             // WDK 10
        adr_1 =              0x5a,             // WDK 10
        adr_2 =              0x5b,             // WDK 10
        stk_9940 =           0x5c,             // WDK 10
        sait =               0x5d,             // WDK 10
        vxa_tape =           0x5e,             // WDK 10
    };                                       
};
