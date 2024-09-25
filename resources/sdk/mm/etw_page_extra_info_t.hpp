#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/etw_page_extra_info_t.start.hpp"
namespace mm
{
    // [union _MM_ETW_PAGE_EXTRA_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union etw_page_extra_info_t        
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint1_t  shared_initial;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SharedInitial
        _m01 uint2_t  working_set_type;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WorkingSetType
        _m02 uint1_t  not_addedto_ws;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NotAddedtoWS
        _m03 uint1_t  cow_fault;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .COWFault
        _m04 uint64_t proto_pte;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtoPte
        _m05 void*    virtual_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
                                       
        SDK_MAGIC_PROPERTIES( "_MM_ETW_PAGE_EXTRA_INFO.$", 0x8, true, 0xb56b849c0d911b8a );                 
        SDK_FIXED_SIZE( etw_page_extra_info_t, 0x8 );                 
    };                                 
};
#include "magic/etw_page_extra_info_t.end.hpp"
SDK_VERIFY( union mm::etw_page_extra_info_t, 0x8 );
