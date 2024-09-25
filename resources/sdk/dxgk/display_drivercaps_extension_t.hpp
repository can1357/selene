#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/display_drivercaps_extension_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISPLAY_DRIVERCAPS_EXTENSION]
    // => WDK 10 (NV)
    //
    struct display_drivercaps_extension_t        
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  secure_display_support;      //{ +0x0000@0  } | .SecureDisplaySupport
        _m01 uint1_t  virtual_mode_support;        //{ +0x0000@1  } | .VirtualModeSupport
        _m02 uint1_t  hdr_fp16_scanout_support;    //{ +0x0000@2  } | .HdrFP16ScanoutSupport
        _m03 uint1_t  hdr_argb10_scanout_support;  //{ +0x0000@3  } | .HdrARGB10ScanoutSupport
        _m04 uint1_t  hdr10_metadata_support;      //{ +0x0000@4  } | .Hdr10MetadataSupport
        _m05 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.$", 0x0, false, 0x9038c2babd815930 );                           
        SDK_FIXED_SIZE( display_drivercaps_extension_t, 0x4 );                           
    };                                           
};
#include "magic/display_drivercaps_extension_t.end.hpp"
SDK_VERIFY( struct dxgk::display_drivercaps_extension_t, 0x4 );
