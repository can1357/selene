#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/identify_mfnd_capability_information_t.start.hpp"
namespace stor::port
{
    // [struct _IDENTIFY_MFND_CAPABILITY_INFORMATION]
    // => Windows 11
    //
    struct identify_mfnd_capability_information_t              
    {                                                          
        struct u0_features_t                                   
        {                                                      
            // Windows 11                                      
            //                                                 
            _m22 uint1_t reserved_qo_s_supported;                //{ +0x0000@0  } | .ReservedQoSSupported
            _m23 uint1_t limited_qo_s_supported;                 //{ +0x0000@1  } | .LimitedQoSSupported
            _m24 uint1_t mixed_qo_s_supported;                   //{ +0x0000@2  } | .MixedQoSSupported
                                                               
            SDK_MAGIC_PROPERTIES( "_IDENTIFY_MFND_CAPABILITY_INFORMATION.Features.$", 0x0, false, 0x9b99bcc4918ee1f6 );                                      
            SDK_FIXED_SIZE( u0_features_t, 0x4 );                                      
        };                                                     
                                                               
        // Windows 11                                          
        //                                                     
        _m00 sdk::array<uint8_t, 4>              sig;            //{ +0x0000    } | .SIG
        _m01 uint8_t                             major_version;  //{ +0x0004    } | .MajorVersion
        _m02 uint8_t                             sub_version;    //{ +0x0005    } | .SubVersion
        _m03 uint16_t                            mpfc;           //{ +0x0008    } | .MPFC
        _m04 uint16_t                            apfc;           //{ +0x000a    } | .APFC
        _m05 uint16_t                            mqpc;           //{ +0x000c    } | .MQPC
        _m06 uint16_t                            aqpc;           //{ +0x000e    } | .AQPC
        _m07 uint16_t                            mmmc;           //{ +0x0010    } | .MMMC
        _m08 uint16_t                            ammc;           //{ +0x0012    } | .AMMC
        _m09 uint16_t                            mnc;            //{ +0x0014    } | .MNC
        _m10 uint16_t                            anc;            //{ +0x0016    } | .ANC
        _m11 uint32_t                            tnss;           //{ +0x0018    } | .TNSS
        _m12 uint32_t                            anss;           //{ +0x001c    } | .ANSS
        _m13 uint32_t                            spg;            //{ +0x0020    } | .SPG
        _m14 uint32_t                            trb;            //{ +0x0024    } | .TRB
        _m15 uint32_t                            arb;            //{ +0x0028    } | .ARB
        _m16 uint32_t                            twb;            //{ +0x002c    } | .TWB
        _m17 uint32_t                            awb;            //{ +0x0030    } | .AWB
        _m18 uint32_t                            triops;         //{ +0x0034    } | .TRIOPS
        _m19 uint32_t                            ariops;         //{ +0x0038    } | .ARIOPS
        _m20 uint32_t                            twiops;         //{ +0x003c    } | .TWIOPS
        _m21 uint32_t                            awiops;         //{ +0x0040    } | .AWIOPS
        _m25 u0_features_t                       features;       //{ +0x0044    } | .Features
        _m26 uint8_t                             msccnc;         //{ +0x0048    } | .MSCCNC
                                                               
        SDK_MAGIC_PROPERTIES( "_IDENTIFY_MFND_CAPABILITY_INFORMATION.$", 0x0, false, 0xbf61c367b203897a );              
        SDK_FIXED_SIZE( identify_mfnd_capability_information_t, 0x80 );              
    };                                                         
};
#include "magic/identify_mfnd_capability_information_t.end.hpp"
SDK_VERIFY( struct stor::port::identify_mfnd_capability_information_t::u0_features_t, 0x4 );
SDK_VERIFY( struct stor::port::identify_mfnd_capability_information_t, 0x80 );
