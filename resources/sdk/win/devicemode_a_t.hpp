#pragma once
#include <sdkgen/support_library.hpp>
#include "pointl_t.hpp"

#include "magic/devicemode_a_t.start.hpp"
namespace win
{
    // [struct _devicemodeA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct devicemode_a_t                                     
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m000 sdk::array<uint8_t, 32> dm_device_name;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dmDeviceName
        _m001 uint16_t                dm_spec_version;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .dmSpecVersion
        _m002 uint16_t                dm_driver_version;        //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .dmDriverVersion
        _m003 uint16_t                dm_size;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .dmSize
        _m004 uint16_t                dm_driver_extra;          //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .dmDriverExtra
        _m005 uint32_t                dm_fields;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .dmFields
        _m006 int16_t                 dm_orientation;           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .dmOrientation
        _m007 int16_t                 dm_paper_size;            //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .dmPaperSize
        _m008 int16_t                 dm_paper_length;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .dmPaperLength
        _m009 int16_t                 dm_paper_width;           //{ +0x0032    +0x0032    +0x0032    +0x0032    +0x0032    } | .dmPaperWidth
        _m010 int16_t                 dm_scale;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .dmScale
        _m011 int16_t                 dm_copies;                //{ +0x0036    +0x0036    +0x0036    +0x0036    +0x0036    } | .dmCopies
        _m012 int16_t                 dm_default_source;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .dmDefaultSource
        _m013 int16_t                 dm_print_quality;         //{ +0x003a    +0x003a    +0x003a    +0x003a    +0x003a    } | .dmPrintQuality
        _m014 struct win::pointl_t    dm_position;              //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .dmPosition
        _m015 uint32_t                dm_display_orientation;   //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .dmDisplayOrientation
        _m016 uint32_t                dm_display_fixed_output;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .dmDisplayFixedOutput
        _m017 int16_t                 dm_color;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .dmColor
        _m018 int16_t                 dm_duplex;                //{ +0x003e    +0x003e    +0x003e    +0x003e    +0x003e    } | .dmDuplex
        _m019 int16_t                 dm_y_resolution;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .dmYResolution
        _m020 int16_t                 dm_tt_option;             //{ +0x0042    +0x0042    +0x0042    +0x0042    +0x0042    } | .dmTTOption
        _m021 int16_t                 dm_collate;               //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .dmCollate
        _m022 sdk::array<uint8_t, 32> dm_form_name;             //{ +0x0046    +0x0046    +0x0046    +0x0046    +0x0046    } | .dmFormName
        _m023 uint16_t                dm_log_pixels;            //{ +0x0066    +0x0066    +0x0066    +0x0066    +0x0066    } | .dmLogPixels
        _m024 uint32_t                dm_bits_per_pel;          //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .dmBitsPerPel
        _m025 uint32_t                dm_pels_width;            //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .dmPelsWidth
        _m026 uint32_t                dm_pels_height;           //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .dmPelsHeight
        _m027 uint32_t                dm_display_flags;         //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .dmDisplayFlags
        _m028 uint32_t                dm_nup;                   //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .dmNup
        _m029 uint32_t                dm_display_frequency;     //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .dmDisplayFrequency
        _m030 uint32_t                dm_icm_method;            //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .dmICMMethod
        _m031 uint32_t                dm_icm_intent;            //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .dmICMIntent
        _m032 uint32_t                dm_media_type;            //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .dmMediaType
        _m033 uint32_t                dm_dither_type;           //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .dmDitherType
        _m034 uint32_t                dm_reserved1;             //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .dmReserved1
        _m035 uint32_t                dm_reserved2;             //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .dmReserved2
        _m036 uint32_t                dm_panning_width;         //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .dmPanningWidth
        _m037 uint32_t                dm_panning_height;        //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .dmPanningHeight
                                                              
        SDK_NONVOL_PROPERTIES( "_devicemodeA.$", 0x9c, true, 0x292af0d343920148 );                        
        SDK_FIXED_SIZE( devicemode_a_t, 0x9c );                        
    };                                                        
};
#include "magic/devicemode_a_t.end.hpp"
SDK_VERIFY( struct win::devicemode_a_t, 0x9c );
