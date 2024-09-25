#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_capabilities_page_t.start.hpp"
namespace nt
{
    // [struct _CDVD_CAPABILITIES_PAGE]
    // => WDK 10 (NV)
    //
    struct cdvd_capabilities_page_t                           
    {                                                         
        // WDK 10                                             
        //                                                    
        _m000 uint6_t                page_code;                 //{ +0x0000@0  } | .PageCode
        _m001 uint1_t                ps_bit;                    //{ +0x0000@7  } | .PSBit
        _m002 uint8_t                page_length;               //{ +0x0001    } | .PageLength
        _m003 uint1_t                cdr_read;                  //{ +0x0002@0  } | .CDRRead
        _m004 uint1_t                cde_read;                  //{ +0x0002@1  } | .CDERead
        _m005 uint1_t                method2;                   //{ +0x0002@2  } | .Method2
        _m006 uint1_t                dvdrom_read;               //{ +0x0002@3  } | .DVDROMRead
        _m007 uint1_t                dvdr_read;                 //{ +0x0002@4  } | .DVDRRead
        _m008 uint1_t                dvdram_read;               //{ +0x0002@5  } | .DVDRAMRead
        _m009 uint1_t                cdr_write;                 //{ +0x0003@0  } | .CDRWrite
        _m010 uint1_t                cde_write;                 //{ +0x0003@1  } | .CDEWrite
        _m011 uint1_t                test_write;                //{ +0x0003@2  } | .TestWrite
        _m012 uint1_t                dvdr_write;                //{ +0x0003@4  } | .DVDRWrite
        _m013 uint1_t                dvdram_write;              //{ +0x0003@5  } | .DVDRAMWrite
        _m014 uint1_t                audio_play;                //{ +0x0004@0  } | .AudioPlay
        _m015 uint1_t                composite;                 //{ +0x0004@1  } | .Composite
        _m016 uint1_t                digital_port_one;          //{ +0x0004@2  } | .DigitalPortOne
        _m017 uint1_t                digital_port_two;          //{ +0x0004@3  } | .DigitalPortTwo
        _m018 uint1_t                mode2_form1;               //{ +0x0004@4  } | .Mode2Form1
        _m019 uint1_t                mode2_form2;               //{ +0x0004@5  } | .Mode2Form2
        _m020 uint1_t                multi_session;             //{ +0x0004@6  } | .MultiSession
        _m021 uint1_t                buffer_underrun_free;      //{ +0x0004@7  } | .BufferUnderrunFree
        _m022 uint1_t                cdda;                      //{ +0x0005@0  } | .CDDA
        _m023 uint1_t                cdda_accurate;             //{ +0x0005@1  } | .CDDAAccurate
        _m024 uint1_t                rw_supported;              //{ +0x0005@2  } | .RWSupported
        _m025 uint1_t                rw_deinterleaved;          //{ +0x0005@3  } | .RWDeinterleaved
        _m026 uint1_t                c2_pointers;               //{ +0x0005@4  } | .C2Pointers
        _m027 uint1_t                isrc;                      //{ +0x0005@5  } | .ISRC
        _m028 uint1_t                upc;                       //{ +0x0005@6  } | .UPC
        _m029 uint1_t                read_bar_code_capable;     //{ +0x0005@7  } | .ReadBarCodeCapable
        _m030 uint1_t                lock;                      //{ +0x0006@0  } | .Lock
        _m031 uint1_t                lock_state;                //{ +0x0006@1  } | .LockState
        _m032 uint1_t                prevent_jumper;            //{ +0x0006@2  } | .PreventJumper
        _m033 uint1_t                eject;                     //{ +0x0006@3  } | .Eject
        _m034 uint3_t                loading_mechanism_type;    //{ +0x0006@5  } | .LoadingMechanismType
        _m035 uint1_t                separate_volume;           //{ +0x0007@0  } | .SeparateVolume
        _m036 uint1_t                seperate_channel_mute;     //{ +0x0007@1  } | .SeperateChannelMute
        _m037 uint1_t                supports_disk_present;     //{ +0x0007@2  } | .SupportsDiskPresent
        _m038 uint1_t                sw_slot_selection;         //{ +0x0007@3  } | .SWSlotSelection
        _m039 uint1_t                side_change_capable;       //{ +0x0007@4  } | .SideChangeCapable
        _m040 uint1_t                rw_in_lead_in_readable;    //{ +0x0007@5  } | .RWInLeadInReadable
        _m041 sdk::array<uint8_t, 2> read_speed_maximum;        //{ +0x0008    } | .ReadSpeedMaximum
        _m042 sdk::array<uint8_t, 2> obsolete_reserved;         //{ +0x0008    } | .ObsoleteReserved
        _m043 sdk::array<uint8_t, 2> number_volume_levels;      //{ +0x000a    } | .NumberVolumeLevels
        _m044 sdk::array<uint8_t, 2> buffer_size;               //{ +0x000c    } | .BufferSize
        _m045 sdk::array<uint8_t, 2> read_speed_current;        //{ +0x000e    } | .ReadSpeedCurrent
        _m046 sdk::array<uint8_t, 2> obsolete_reserved2;        //{ +0x000e    } | .ObsoleteReserved2
        _m047 uint8_t                obsolete_reserved3;        //{ +0x0010    } | .ObsoleteReserved3
        _m048 uint1_t                bck;                       //{ +0x0011@1  } | .BCK
        _m049 uint1_t                rck;                       //{ +0x0011@2  } | .RCK
        _m050 uint1_t                lsbf;                      //{ +0x0011@3  } | .LSBF
        _m051 uint2_t                length;                    //{ +0x0011@4  } | .Length
        _m052 sdk::array<uint8_t, 2> write_speed_maximum;       //{ +0x0012    } | .WriteSpeedMaximum
        _m053 sdk::array<uint8_t, 2> obsolete_reserved4;        //{ +0x0012    } | .ObsoleteReserved4
        _m054 sdk::array<uint8_t, 2> write_speed_current;       //{ +0x0014    } | .WriteSpeedCurrent
        _m055 sdk::array<uint8_t, 2> obsolete_reserved11;       //{ +0x0014    } | .ObsoleteReserved11
        _m056 sdk::array<uint8_t, 2> copy_management_revision;  //{ +0x0016    } | .CopyManagementRevision
                                                              
        SDK_NONVOL_PROPERTIES( "_CDVD_CAPABILITIES_PAGE.$", 0x0, false, 0xef13e1c97ef5ebf1 );                         
        SDK_FIXED_SIZE( cdvd_capabilities_page_t, 0x18 );                         
    };                                                        
};
#include "magic/cdvd_capabilities_page_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_capabilities_page_t, 0x18 );
