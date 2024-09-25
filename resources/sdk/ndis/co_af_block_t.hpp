#pragma once
#include <sdkgen/support_library.hpp>
#include "request_t.hpp"
#include "client_characteristics_t.hpp"
#include "co_client_optional_handlers_t.hpp"

#include "magic/co_af_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct co_af_block_t;
    struct miniport_block_t;
    struct call_manager_characteristics_t;
    struct co_call_manager_optional_handlers_t;

    // [struct _NDIS_CO_AF_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_af_block_t                                                        
    {                                                                           
        using call_mgr_chars_t = struct ndis::co_call_manager_optional_handlers_t*;                      
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                      
        _m00 struct ndis::co_af_block_t*                  next_af;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextAf
        _m01 uint32_t                                     flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 int32_t                                      references;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .References
        _m03 struct ndis::miniport_block_t*               miniport;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Miniport
        _m04 struct ndis::call_manager_characteristics_t* call_mgr_entries;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CallMgrEntries
        _m05 call_mgr_chars_t                             call_mgr_chars;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CallMgrChars
        _m06 struct ndis::open_block_t*                   call_mgr_open;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CallMgrOpen
        _m07 void*                                        call_mgr_context;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CallMgrContext
        _m08 struct ndis::client_characteristics_t        client_entries;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ClientEntries
        _m09 struct ndis::co_client_optional_handlers_t   client_chars;           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ClientChars
        _m10 struct ndis::open_block_t*                   client_open;            //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .ClientOpen
        _m11 void*                                        client_context;         //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .ClientContext
        _m12 uint64_t                                     lock;                   //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .Lock
        _m13 uint32_t                                     cm_major_ndis_version;  //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .CmMajorNdisVersion
        _m14 uint32_t                                     cl_major_ndis_version;  //{ +0x018c    +0x018c    +0x018c    +0x018c    } | .ClMajorNdisVersion
        _m15 struct ndis::request_t*                      ndis5_cm_request;       //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .Ndis5CmRequest
        _m16 struct ndis::request_t                       request;                //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .Request
        _m17 struct ndis::request_t*                      close_af_ndis_request;  //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .CloseAfNdisRequest
        _m18 uint8_t                                      close_af_requested;     //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .CloseAfRequested
                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_AF_BLOCK.$", 0x258, true, 0xf92ff00bd30738a3 );                      
        SDK_FIXED_SIZE( co_af_block_t, 0x258 );                                 
    };                                                                          
};
#include "magic/co_af_block_t.end.hpp"
SDK_VERIFY( struct ndis::co_af_block_t, 0x258 );
