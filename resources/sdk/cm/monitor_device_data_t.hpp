#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/monitor_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_MONITOR_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct monitor_device_data_t                    
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                          
        _m000 uint16_t version;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m001 uint16_t revision;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m002 uint16_t horizontal_screen_size;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HorizontalScreenSize
        _m003 uint16_t vertical_screen_size;          //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .VerticalScreenSize
        _m004 uint16_t horizontal_resolution;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HorizontalResolution
        _m005 uint16_t vertical_resolution;           //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .VerticalResolution
        _m006 uint16_t horizontal_display_time_low;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .HorizontalDisplayTimeLow
        _m007 uint16_t horizontal_display_time;       //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .HorizontalDisplayTime
        _m008 uint16_t horizontal_display_time_high;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HorizontalDisplayTimeHigh
        _m009 uint16_t horizontal_back_porch_low;     //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .HorizontalBackPorchLow
        _m010 uint16_t horizontal_back_porch;         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .HorizontalBackPorch
        _m011 uint16_t horizontal_back_porch_high;    //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .HorizontalBackPorchHigh
        _m012 uint16_t horizontal_front_porch_low;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .HorizontalFrontPorchLow
        _m013 uint16_t horizontal_front_porch;        //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .HorizontalFrontPorch
        _m014 uint16_t horizontal_front_porch_high;   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .HorizontalFrontPorchHigh
        _m015 uint16_t horizontal_sync_low;           //{ +0x001e    +0x001e    +0x001e    +0x001e    +0x001e    } | .HorizontalSyncLow
        _m016 uint16_t horizontal_sync;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HorizontalSync
        _m017 uint16_t horizontal_sync_high;          //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .HorizontalSyncHigh
        _m018 uint16_t vertical_back_porch_low;       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .VerticalBackPorchLow
        _m019 uint16_t vertical_back_porch;           //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .VerticalBackPorch
        _m020 uint16_t vertical_back_porch_high;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .VerticalBackPorchHigh
        _m021 uint16_t vertical_front_porch_low;      //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .VerticalFrontPorchLow
        _m022 uint16_t vertical_front_porch;          //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .VerticalFrontPorch
        _m023 uint16_t vertical_front_porch_high;     //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .VerticalFrontPorchHigh
        _m024 uint16_t vertical_sync_low;             //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .VerticalSyncLow
        _m025 uint16_t vertical_sync;                 //{ +0x0032    +0x0032    +0x0032    +0x0032    +0x0032    } | .VerticalSync
        _m026 uint16_t vertical_sync_high;            //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .VerticalSyncHigh
                                                    
        SDK_NONVOL_PROPERTIES( "_CM_MONITOR_DEVICE_DATA.$", 0x36, true, 0xdc69e844e01802a2 );                             
        SDK_FIXED_SIZE( monitor_device_data_t, 0x36 );                             
    };                                              
};
#include "magic/monitor_device_data_t.end.hpp"
SDK_VERIFY( struct cm::monitor_device_data_t, 0x36 );
