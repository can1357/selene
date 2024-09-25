#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_spec_version_t.start.hpp"
namespace nt
{
    // [union _STORAGE_SPEC_VERSION]
    // => WDK 10 (NV)
    //
    union storage_spec_version_t                  
    {                                             
        union u0_minor_version_t                  
        {                                         
            // WDK 10                             
            //                                    
            _m00 uint8_t  sub_minor;                //{ +0x0000    } | .SubMinor
            _m01 uint8_t  minor;                    //{ +0x0001    } | .Minor
            _m02 uint16_t as_ushort;                //{ +0x0000    } | .AsUshort
                                                  
            SDK_NONVOL_PROPERTIES( "_STORAGE_SPEC_VERSION.MinorVersion.$", 0x0, false, 0x521290fcf93a8d22 );                        
            SDK_FIXED_SIZE( u0_minor_version_t, 0x2 );                        
        };                                        
                                                  
        // WDK 10                                 
        //                                        
        _m03 u0_minor_version_t     minor_version;  //{ +0x0000    } | .MinorVersion
        _m04 uint16_t               major_version;  //{ +0x0002    } | .MajorVersion
        _m05 uint32_t               as_ulong;       //{ +0x0000    } | .AsUlong
                                                  
        SDK_NONVOL_PROPERTIES( "_STORAGE_SPEC_VERSION.$", 0x0, false, 0x4d013cfa48d5fe2f );              
        SDK_FIXED_SIZE( storage_spec_version_t, 0x4 );              
    };                                            
};
#include "magic/storage_spec_version_t.end.hpp"
SDK_VERIFY( union nt::storage_spec_version_t::u0_minor_version_t, 0x2 );
SDK_VERIFY( union nt::storage_spec_version_t, 0x4 );
