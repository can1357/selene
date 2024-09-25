#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct eprocess_t; }

#include "magic/reg_entry_t.start.hpp"
namespace etw
{
    struct guid_entry_t;
    struct queue_entry_t;
    struct reply_queue_t;
    struct provider_traits_t;

    // [struct _ETW_REG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_entry_t                                                                 
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                             
        _m000 nt::list_entry_t                          reg_list;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegList
        _m001 nt::list_entry_t                          group_reg_list;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GroupRegList
        _m002 struct etw::guid_entry_t*                 guid_entry;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GuidEntry
        _m003 struct etw::guid_entry_t*                 group_entry;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GroupEntry
        _m004 struct etw::reply_queue_t*                reply_queue;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReplyQueue
        _m005 sdk::array<struct etw::queue_entry_t*, 4> reply_slot;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReplySlot
        _m006 void*                                     caller;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Caller
        _m007 uint32_t                                  session_id;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SessionId
        _m008 struct nt::eprocess_t*                    process;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Process
        _m009 void*                                     callback_context;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CallbackContext
        _m010 void*                                     callback;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Callback
        _m011 uint16_t                                  index;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Index
        _m012 uint16_t                                  flags;                           //{ +0x0062    +0x0062    +0x0062    +0x0062    } | .Flags
        _m013 uint1_t                                   dbg_kernel_registration;         //{ +0x0062@0  +0x0062@0  +0x0062@0  +0x0062@0  } | .DbgKernelRegistration
        _m014 uint1_t                                   dbg_user_registration;           //{ +0x0062@1  +0x0062@1  +0x0062@1  +0x0062@1  } | .DbgUserRegistration
        _m015 uint1_t                                   dbg_reply_registration;          //{ +0x0062@2  +0x0062@2  +0x0062@2  +0x0062@2  } | .DbgReplyRegistration
        _m016 uint1_t                                   dbg_classic_registration;        //{ +0x0062@3  +0x0062@3  +0x0062@3  +0x0062@3  } | .DbgClassicRegistration
        _m017 uint1_t                                   dbg_session_space_registration;  //{ +0x0062@4  +0x0062@4  +0x0062@4  +0x0062@4  } | .DbgSessionSpaceRegistration
        _m018 uint1_t                                   dbg_modern_registration;         //{ +0x0062@5  +0x0062@5  +0x0062@5  +0x0062@5  } | .DbgModernRegistration
        _m019 uint1_t                                   dbg_closed;                      //{ +0x0062@6  +0x0062@6  +0x0062@6  +0x0062@6  } | .DbgClosed
        _m020 uint1_t                                   dbg_inserted;                    //{ +0x0062@7  +0x0062@7  +0x0062@7  +0x0062@7  } | .DbgInserted
        _m021 uint1_t                                   dbg_wow64;                       //{ +0x0062@8  +0x0062@8  +0x0062@8  +0x0062@8  } | .DbgWow64
        _m022 uint8_t                                   enable_mask;                     //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .EnableMask
        _m023 uint8_t                                   group_enable_mask;               //{ +0x0065    +0x0065    +0x0065    +0x0065    } | .GroupEnableMask
        _m024 struct etw::provider_traits_t*            traits;                          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Traits
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                             
        _m025 uint1_t                                   dbg_use_descriptor_type;         //{ +0x0062@9  +0x0062@9  +0x0062@9  } | .DbgUseDescriptorType
        _m026 uint1_t                                   dbg_drop_provider_traits;        //{ +0x0062@10 +0x0062@10 +0x0062@10 } | .DbgDropProviderTraits
        _m027 uint8_t                                   host_enable_mask;                //{ +0x0066    +0x0066    +0x0066    } | .HostEnableMask
        _m028 uint8_t                                   host_group_enable_mask;          //{ +0x0067    +0x0067    +0x0067    } | .HostGroupEnableMask
                                                                                       
        // Windows 10 v1607                                                            
        //                                                                             
        _m029 uint8_t                                   use_descriptor_type;             //{ +0x0066    } | .UseDescriptorType
                                                                                       
        SDK_MAGIC_PROPERTIES( "_ETW_REG_ENTRY.$", 0x70, true, 0x7a7e023074744df4 );                               
        SDK_FIXED_SIZE( reg_entry_t, 0x70 );                                           
    };                                                                                 
};
#include "magic/reg_entry_t.end.hpp"
SDK_VERIFY( struct etw::reg_entry_t, 0x70 );
