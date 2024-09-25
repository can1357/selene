#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_sap_block_t.start.hpp"
namespace ndis
{
    struct co_sap_t;
    struct co_af_block_t;

    // [struct _NDIS_CO_SAP_BLOCK]
    // => Windows 10 v1607
    //
    struct co_sap_block_t                                 
    {                                                     
        // Windows 10 v1607                               
        //                                                
        _m00 void*                       call_mgr_context;  //{ +0x0000    } | .CallMgrContext
        _m01 void*                       client_context;    //{ +0x0008    } | .ClientContext
        _m02 struct ndis::co_af_block_t* af_block;          //{ +0x0010    } | .AfBlock
        _m03 struct ndis::co_sap_t*      sap;               //{ +0x0018    } | .Sap
        _m04 uint32_t                    flags;             //{ +0x0020    } | .Flags
        _m05 int32_t                     references;        //{ +0x0024    } | .References
        _m06 uint64_t                    lock;              //{ +0x0028    } | .Lock
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_SAP_BLOCK.$", 0x0, false, 0x4d63cac90fbde3e3 );                 
        SDK_FIXED_SIZE( co_sap_block_t, 0x30 );                 
    };                                                    
};
#include "magic/co_sap_block_t.end.hpp"
SDK_VERIFY( struct ndis::co_sap_block_t, 0x30 );
