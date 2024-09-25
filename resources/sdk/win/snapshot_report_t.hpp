#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/snapshot_report_t.start.hpp"
namespace win
{
    struct hpss_t;
    struct stowed_exception_information_v2_flat_t;

    // [class SnapshotReport]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class snapshot_report_t                                      
    {                                                            
        using flat_stowed_exception_t = struct win::stowed_exception_information_v2_flat_t*;                           
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                       
        _m00 struct win::hpss_t*      snapshot_handle;             //{ +0x0000    +0x0000    +0x0000    } | ._snapshotHandle
        _m01 flat_stowed_exception_t  flat_stowed_exception;       //{ +0x0008    +0x0008    +0x0008    } | ._flatStowedException
        _m02 uint32_t                 num_flat_stowed_exceptions;  //{ +0x0010    +0x0010    +0x0010    } | ._numFlatStowedExceptions
        _m03 nt::context*             snapshot_context;            //{ +0x0018    +0x0018    +0x0018    } | ._snapshotContext
        _m04 uint32_t                 snapshot_thread_id;          //{ +0x0020    +0x0020    +0x0020    } | ._snapshotThreadId
        _m05 void*                    snapshot_return_address;     //{ +0x0028    +0x0028    +0x0028    } | ._snapshotReturnAddress
                                                                 
        SDK_MAGIC_PROPERTIES( "SnapshotReport.$", 0x38, true, 0x7bec9617fbe7d2f9 );                           
        SDK_FIXED_SIZE( snapshot_report_t, 0x38 );                           
    };                                                           
};
#include "magic/snapshot_report_t.end.hpp"
SDK_VERIFY( class win::snapshot_report_t, 0x38 );
