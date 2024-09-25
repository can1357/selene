#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_QUERYADAPTERINFOTYPE]
    //  WDK 10
    //
    enum class queryadapterinfotype_t : int32_t  
    {                                            
        umdriverprivate =                0x0,      // WDK 10
        drivercaps =                     0x1,      // WDK 10
        querysegment =                   0x2,      // WDK 10
        reserved =                       0x3,      // WDK 10
        querysegment2 =                  0x4,      // WDK 10
        querysegment3 =                  0x5,      // WDK 10
        numpowercomponents =             0x6,      // WDK 10
        powercomponentinfo =             0x7,      // WDK 10
        preferredgpunode =               0x8,      // WDK 10
        powercomponentpstateinfo =       0x9,      // WDK 10
        historybufferprecision =         0xa,      // WDK 10
        querysegment4 =                  0xb,      // WDK 10
        segmentmemorystate =             0xc,      // WDK 10
        gpummucaps =                     0xd,      // WDK 10
        pagetableleveldesc =             0xe,      // WDK 10
        physicaladaptercaps =            0xf,      // WDK 10
        display_drivercaps_extension =   0x10,     // WDK 10
        integrated_display_descriptor =  0x11,     // WDK 10
        uefiframebufferranges =          0x12,     // WDK 10
        querycolorimetryoverrides =      0x13,     // WDK 10
        displayid_descriptor =           0x14,     // WDK 10
        framebuffersavesize =            0x15,     // WDK 10
        hardwarereservedranges =         0x16,     // WDK 10
        integrated_display_descriptor2 = 0x17,     // WDK 10
        nodeperfdata =                   0x18,     // WDK 10
        adapterperfdata =                0x19,     // WDK 10
        adapterperfdata_caps =           0x1a,     // WDK 10
        gpuversion =                     0x1b,     // WDK 10
        device_type_caps =               0x1c,     // WDK 10
        wddmdevicecaps =                 0x1d,     // WDK 10
        gpupcaps =                       0x1e,     // WDK 10
        querytargetgammacaps =           0x1f,     // WDK 10
        scanout_caps =                   0x21,     // WDK 10
    };                                           
};
