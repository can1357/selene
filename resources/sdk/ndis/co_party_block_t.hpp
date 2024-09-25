#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_party_block_t.start.hpp"
namespace ndis
{
    struct co_vc_ptr_block_t;

    // [struct _NDIS_CO_PARTY_BLOCK]
    // => Windows 10 v1607
    //
    struct co_party_block_t                                                      
    {                                                                            
        using cl_incoming_drop_party_handler_t = sdk::function<void(int32_t, void*, void*, uint32_t)>*;                               
                                                                                 
        // Windows 10 v1607                                                      
        //                                                                       
        _m00 struct ndis::co_vc_ptr_block_t*      vc_ptr;                          //{ +0x0000    } | .VcPtr
        _m01 void*                                call_mgr_context;                //{ +0x0008    } | .CallMgrContext
        _m02 void*                                client_context;                  //{ +0x0010    } | .ClientContext
        _m03 cl_incoming_drop_party_handler_t     cl_incoming_drop_party_handler;  //{ +0x0018    } | .ClIncomingDropPartyHandler
        _m04 sdk::function<void(int32_t, void*)>* cl_drop_party_complete_handler;  //{ +0x0020    } | .ClDropPartyCompleteHandler
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_PARTY_BLOCK.$", 0x0, false, 0xf23d1bc3ddf8cc4e );                               
        SDK_FIXED_SIZE( co_party_block_t, 0x28 );                                
    };                                                                           
};
#include "magic/co_party_block_t.end.hpp"
SDK_VERIFY( struct ndis::co_party_block_t, 0x28 );
