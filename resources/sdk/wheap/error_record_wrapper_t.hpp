#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/error_record_t.hpp"
#include "error_record_wrapper_flags_t.hpp"

#include "magic/error_record_wrapper_t.start.hpp"
namespace wheap
{
    struct error_source_t;

    // [struct _WHEAP_ERROR_RECORD_WRAPPER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_record_wrapper_t                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m00 nt::list_entry_t                          work_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkEntry
        _m01 uint32_t                                  length;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m02 uint32_t                                  processor_number;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ProcessorNumber
        _m03 union wheap::error_record_wrapper_flags_t flags;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m04 volatile int32_t                          in_use;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .InUse
        _m05 struct wheap::error_source_t*             error_source;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorSource
        _m06 struct whea::error_record_t               error_record;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ErrorRecord
                                                                        
        SDK_MAGIC_PROPERTIES( "_WHEAP_ERROR_RECORD_WRAPPER.$", 0xf0, true, 0x3054d48475118e28 );                 
        SDK_FIXED_SIZE( error_record_wrapper_t, 0xf0 );                 
    };                                                                  
};
#include "magic/error_record_wrapper_t.end.hpp"
SDK_VERIFY( struct wheap::error_record_wrapper_t, 0xf0 );
