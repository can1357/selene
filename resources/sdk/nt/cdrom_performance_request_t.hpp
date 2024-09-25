#pragma once
#include <sdkgen/support_library.hpp>
#include "cdrom_performance_type_t.hpp"
#include "cdrom_performance_request_type_t.hpp"
#include "cdrom_performance_exception_type_t.hpp"
#include "cdrom_performance_tolerance_type_t.hpp"

#include "magic/cdrom_performance_request_t.start.hpp"
namespace nt
{
    // [struct _CDROM_PERFORMANCE_REQUEST]
    // => WDK 10 (NV)
    //
    struct cdrom_performance_request_t                                    
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 enum nt::cdrom_performance_request_type_t   request_type;      //{ +0x0000    } | .RequestType
        _m01 enum nt::cdrom_performance_type_t           performance_type;  //{ +0x0004    } | .PerformanceType
        _m02 enum nt::cdrom_performance_exception_type_t exceptions;        //{ +0x0008    } | .Exceptions
        _m03 enum nt::cdrom_performance_tolerance_type_t tolerance;         //{ +0x000c    } | .Tolerance
        _m04 uint32_t                                    staring_lba;       //{ +0x0010    } | .StaringLba
                                                                          
        SDK_NONVOL_PROPERTIES( "_CDROM_PERFORMANCE_REQUEST.$", 0x0, false, 0xc4f593f5a4ee1a32 );                 
        SDK_FIXED_SIZE( cdrom_performance_request_t, 0x14 );                 
    };                                                                    
};
#include "magic/cdrom_performance_request_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_performance_request_t, 0x14 );
