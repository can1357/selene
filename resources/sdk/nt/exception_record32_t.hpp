#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_record32_t.start.hpp"
namespace nt
{
    // [struct _EXCEPTION_RECORD32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exception_record32_t                             
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 int32_t                  exception_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionCode
        _m01 uint32_t                 exception_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ExceptionFlags
        _m02 uint32_t                 exception_record;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExceptionRecord
        _m03 uint32_t                 exception_address;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ExceptionAddress
        _m04 uint32_t                 number_parameters;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberParameters
        _m05 sdk::array<uint32_t, 15> exception_information;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ExceptionInformation
                                                            
        SDK_NONVOL_PROPERTIES( "_EXCEPTION_RECORD32.$", 0x50, true, 0xf0352bdb394e5465 );                      
        SDK_FIXED_SIZE( exception_record32_t, 0x50 );                      
    };                                                      
};
#include "magic/exception_record32_t.end.hpp"
SDK_VERIFY( struct nt::exception_record32_t, 0x50 );
