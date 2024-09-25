#pragma once
#include <sdkgen/support_library.hpp>
#include "co_address_family_t.hpp"
#include "call_manager_characteristics_t.hpp"
#include "co_call_manager_optional_handlers_t.hpp"

#include "magic/af_list_t.start.hpp"
namespace ndis
{
    struct af_list_t;
    struct open_block_t;

    // [struct _NDIS_AF_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct af_list_t                                                             
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                       
        _m00 struct ndis::af_list_t*                          next_af;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextAf
        _m01 struct ndis::open_block_t*                       open;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Open
        _m02 struct ndis::co_address_family_t                 address_family;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressFamily
        _m03 struct ndis::call_manager_characteristics_t      cm_chars;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CmChars
        _m04 struct ndis::co_call_manager_optional_handlers_t call_mgr_chars;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CallMgrChars
        _m05 uint32_t                                         ndis_major_version;  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .NdisMajorVersion
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_AF_LIST.$", 0x140, true, 0xf1c71e409a58793a );                   
        SDK_FIXED_SIZE( af_list_t, 0x140 );                                      
    };                                                                           
};
#include "magic/af_list_t.end.hpp"
SDK_VERIFY( struct ndis::af_list_t, 0x140 );
