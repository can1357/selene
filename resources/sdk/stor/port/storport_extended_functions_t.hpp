#pragma once
#include <sdkgen/support_library.hpp>
#include "getsgstatus_t.hpp"

namespace nt { struct scsi_request_block_t; }

#include "magic/storport_extended_functions_t.start.hpp"
namespace stor::port
{
    struct stor_scatter_gather_list_t;
    struct message_interrupt_information_t;

    // [struct _STORPORT_EXTENDED_FUNCTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storport_extended_functions_t                                                       
    {                                                                                          
        using get_message_interrupt_information_t = sdk::function<uint8_t(void*, uint32_t, struct stor::port::message_interrupt_information_t*)>*;                                  
        using put_scatter_gather_list_t =           sdk::function<void(void*, struct stor::port::stor_scatter_gather_list_t*, uint8_t)>*;                                  
        using build_scatter_gather_list_t =         sdk::function<enum stor::port::getsgstatus_t(void*, void*, void*, uint32_t, sdk::function<void(void**, void**, struct stor::port::stor_scatter_gather_list_t*, void*)>*, void*, uint8_t, void*, uint32_t)>*;                                  
        using allocate_pool_t =                     sdk::function<void*(uint32_t, uint32_t, void*, void**)>*;                                  
        using get_system_address_t =                sdk::function<void*(struct nt::scsi_request_block_t*)>*;                                  
        using get_original_mdl_t =                  sdk::function<void*(struct nt::scsi_request_block_t*)>*;                                  
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                     
        _m00 uint32_t                                        version;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 get_message_interrupt_information_t             get_message_interrupt_information;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GetMessageInterruptInformation
        _m02 put_scatter_gather_list_t                       put_scatter_gather_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PutScatterGatherList
        _m03 build_scatter_gather_list_t                     build_scatter_gather_list;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BuildScatterGatherList
        _m04 sdk::function<void(void*, void*, void*)>*       free_pool;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreePool
        _m05 allocate_pool_t                                 allocate_pool;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocatePool
        _m06 get_system_address_t                            get_system_address;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetSystemAddress
        _m07 sdk::function<uint32_t(void*, uint32_t)>*       acquire_msi_spin_lock;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AcquireMSISpinLock
        _m08 sdk::function<void(void*, uint32_t, uint32_t)>* release_msi_spin_lock;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReleaseMSISpinLock
        _m09 sdk::function<void(void*, void*)>*              complete_service_irp;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CompleteServiceIrp
        _m10 get_original_mdl_t                              get_original_mdl;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GetOriginalMdl
                                                                                               
        SDK_MAGIC_PROPERTIES( "_STORPORT_EXTENDED_FUNCTIONS.$", 0x58, true, 0x42181f32874fbe9c );                                  
        SDK_FIXED_SIZE( storport_extended_functions_t, 0x58 );                                  
    };                                                                                         
};
#include "magic/storport_extended_functions_t.end.hpp"
SDK_VERIFY( struct stor::port::storport_extended_functions_t, 0x58 );
