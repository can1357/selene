#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_record_t.start.hpp"
namespace nt
{
    struct exception_record_t;

    // [struct _EXCEPTION_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exception_record_t                                     
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 int32_t                        exception_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionCode
        _m01 uint32_t                       exception_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ExceptionFlags
        _m02 struct nt::exception_record_t* exception_record;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExceptionRecord
        _m03 void*                          exception_address;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExceptionAddress
        _m04 uint32_t                       number_parameters;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberParameters
        _m05 sdk::array<uint64_t, 15>       exception_information;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ExceptionInformation
                                                                  
        SDK_NONVOL_PROPERTIES( "_EXCEPTION_RECORD.$", 0x98, true, 0x73193155ae16431c );                      
        SDK_FIXED_SIZE( exception_record_t, 0x98 );                      
    };                                                            
};
#include "magic/exception_record_t.end.hpp"
SDK_VERIFY( struct nt::exception_record_t, 0x98 );
