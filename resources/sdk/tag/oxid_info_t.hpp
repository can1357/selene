#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "comversion_t.hpp"

#include "magic/oxid_info_t.start.hpp"
namespace tag
{
    struct dualstringarray_t;

    // [struct tagOXID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oxid_info_t                                              
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                          
        _m00 uint32_t                       dw_tid;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwTid
        _m01 uint32_t                       dw_pid;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPid
        _m02 uint32_t                       dw_authn_hint;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwAuthnHint
        _m03 struct tag::comversion_t       version;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .version
        _m04 struct nt::guid_t              ipid_rem_unknown;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ipidRemUnknown
        _m05 uint32_t                       dw_flags;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
        _m06 struct tag::dualstringarray_t* psa;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .psa
        _m07 struct nt::guid_t              guid_process_identifier;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .guidProcessIdentifier
                                                                    
        SDK_MAGIC_PROPERTIES( "tagOXID_INFO.$", 0x40, true, 0x5521886803e15ee );                        
        SDK_FIXED_SIZE( oxid_info_t, 0x40 );                        
    };                                                              
};
#include "magic/oxid_info_t.end.hpp"
SDK_VERIFY( struct tag::oxid_info_t, 0x40 );
