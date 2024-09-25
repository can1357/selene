#pragma once
#include <sdkgen/support_library.hpp>
#include "pointl_t.hpp"

#include "magic/devicemode_w_t.start.hpp"
namespace win
{
    // [struct _devicemodeW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct devicemode_w_t                                     
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m000 sdk::array<wchar_t, 32> dm_device_name;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dmDeviceName
        _m001 uint16_t                dm_spec_version;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .dmSpecVersion
        _m002 uint16_t                dm_driver_version;        //{ +0x0042    +0x0042    +0x0042    +0x0042    +0x0042    } | .dmDriverVersion
        _m003 uint16_t                dm_size;                  //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .dmSize
        _m004 uint16_t                dm_driver_extra;          //{ +0x0046    +0x0046    +0x0046    +0x0046    +0x0046    } | .dmDriverExtra
        _m005 uint32_t                dm_fields;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .dmFields
        _m006 int16_t                 dm_orientation;           //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .dmOrientation
        _m007 int16_t                 dm_paper_size;            //{ +0x004e    +0x004e    +0x004e    +0x004e    +0x004e    } | .dmPaperSize
        _m008 int16_t                 dm_paper_length;          //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .dmPaperLength
        _m009 int16_t                 dm_paper_width;           //{ +0x0052    +0x0052    +0x0052    +0x0052    +0x0052    } | .dmPaperWidth
        _m010 int16_t                 dm_scale;                 //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .dmScale
        _m011 int16_t                 dm_copies;                //{ +0x0056    +0x0056    +0x0056    +0x0056    +0x0056    } | .dmCopies
        _m012 int16_t                 dm_default_source;        //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .dmDefaultSource
        _m013 int16_t                 dm_print_quality;         //{ +0x005a    +0x005a    +0x005a    +0x005a    +0x005a    } | .dmPrintQuality
        _m014 struct win::pointl_t    dm_position;              //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .dmPosition
        _m015 uint32_t                dm_display_orientation;   //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .dmDisplayOrientation
        _m016 uint32_t                dm_display_fixed_output;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .dmDisplayFixedOutput
        _m017 int16_t                 dm_color;                 //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .dmColor
        _m018 int16_t                 dm_duplex;                //{ +0x005e    +0x005e    +0x005e    +0x005e    +0x005e    } | .dmDuplex
        _m019 int16_t                 dm_y_resolution;          //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .dmYResolution
        _m020 int16_t                 dm_tt_option;             //{ +0x0062    +0x0062    +0x0062    +0x0062    +0x0062    } | .dmTTOption
        _m021 int16_t                 dm_collate;               //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .dmCollate
        _m022 sdk::array<wchar_t, 32> dm_form_name;             //{ +0x0066    +0x0066    +0x0066    +0x0066    +0x0066    } | .dmFormName
        _m023 uint16_t                dm_log_pixels;            //{ +0x00a6    +0x00a6    +0x00a6    +0x00a6    +0x00a6    } | .dmLogPixels
        _m024 uint32_t                dm_bits_per_pel;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .dmBitsPerPel
        _m025 uint32_t                dm_pels_width;            //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .dmPelsWidth
        _m026 uint32_t                dm_pels_height;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .dmPelsHeight
        _m027 uint32_t                dm_display_flags;         //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .dmDisplayFlags
        _m028 uint32_t                dm_nup;                   //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .dmNup
        _m029 uint32_t                dm_display_frequency;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .dmDisplayFrequency
        _m030 uint32_t                dm_icm_method;            //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .dmICMMethod
        _m031 uint32_t                dm_icm_intent;            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .dmICMIntent
        _m032 uint32_t                dm_media_type;            //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .dmMediaType
        _m033 uint32_t                dm_dither_type;           //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .dmDitherType
        _m034 uint32_t                dm_reserved1;             //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .dmReserved1
        _m035 uint32_t                dm_reserved2;             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .dmReserved2
        _m036 uint32_t                dm_panning_width;         //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .dmPanningWidth
        _m037 uint32_t                dm_panning_height;        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .dmPanningHeight
                                                              
        SDK_NONVOL_PROPERTIES( "_devicemodeW.$", 0xdc, true, 0x53a985f567528b30 );                        
        SDK_FIXED_SIZE( devicemode_w_t, 0xdc );                        
    };                                                        
};
#include "magic/devicemode_w_t.end.hpp"
SDK_VERIFY( struct win::devicemode_w_t, 0xdc );
