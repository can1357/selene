#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "fpb_fdo_resource_t.hpp"
#include "fpb_resource_type_t.hpp"
#include "fpb_fdo_static_flags_t.hpp"
#include "fpb_fdo_dynamic_flags_t.hpp"
#include "fpb_capability_support_t.hpp"
#include "fpb_fdo_resource_allocation_context_t.hpp"

namespace cm { struct resource_list_t; }

#include "magic/fpb_fdo_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct fpb_fdo_t;
    struct fpb_resource_descriptor_t;

    // [struct _PCI_FPB_FDO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_fdo_t                                                        
    {                                                                       
        using arbitration_context_t =        struct pci::fpb_fdo_resource_allocation_context_t;                           
        using fpb_read_capability_t =        sdk::function<void(void*, uint32_t, uint32_t, uint8_t*)>*;                           
        using fpb_write_capability_t =       sdk::function<void(void*, uint32_t, uint32_t, uint8_t*)>*;                           
        using get_resource_descriptor_t =    sdk::function<void(void*, enum pci::fpb_resource_type_t, struct pci::fpb_resource_descriptor_t**)>*;                           
        using set_resource_descriptor_t =    sdk::function<int32_t(void*, enum pci::fpb_resource_type_t, uint64_t, uint64_t, uint8_t)>*;                           
        using commit_resource_descriptor_t = sdk::function<void(void*, enum pci::fpb_resource_type_t, uint8_t)>*;                           
        using get_current_resource_list_t =  sdk::function<int32_t(void*, uint32_t, uint32_t*, struct cm::resource_list_t**, struct cm::resource_list_t**, uint32_t*)>*;                           
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                  
        _m00 struct pci::bus_t*                  bus;                         //{ +0x0000    +0x0000    +0x0000    } | .Bus
        _m01 struct pci::fpb_fdo_t*              root;                        //{ +0x0008    +0x0008    +0x0008    } | .Root
        _m02 struct pci::fpb_fdo_t*              parent;                      //{ +0x0010    +0x0010    +0x0010    } | .Parent
        _m03 struct pci::fpb_fdo_t*              children_head;               //{ +0x0018    +0x0018    +0x0018    } | .ChildrenHead
        _m04 struct pci::fpb_fdo_t*              children_tail;               //{ +0x0020    +0x0020    +0x0020    } | .ChildrenTail
        _m05 struct pci::fpb_fdo_t*              sibling;                     //{ +0x0028    +0x0028    +0x0028    } | .Sibling
        _m06 union pci::fpb_capability_support_t fpb_support_info;            //{ +0x0030    +0x0030    +0x0030    } | .FpbSupportInfo
        _m07 union pci::fpb_fdo_resource_t       resource;                    //{ +0x0038    +0x0038    +0x0038    } | .Resource
        _m08 arbitration_context_t               arbitration_context;         //{ +0x0090    +0x0090    +0x0090    } | .ArbitrationContext
        _m09 struct nt::kevent_t                 fpb_lock;                    //{ +0x00a8    +0x00a8    +0x00a8    } | .FpbLock
        _m10 union pci::fpb_fdo_static_flags_t   flags_static;                //{ +0x00c0    +0x00c0    +0x00c0    } | .FlagsStatic
        _m11 union pci::fpb_fdo_dynamic_flags_t  flags_runtime;               //{ +0x00c4    +0x00c4    +0x00c4    } | .FlagsRuntime
        _m12 void*                               context;                     //{ +0x00c8    +0x00c8    +0x00c8    } | .Context
        _m13 fpb_read_capability_t               fpb_read_capability;         //{ +0x00d0    +0x00d0    +0x00d0    } | .FpbReadCapability
        _m14 fpb_write_capability_t              fpb_write_capability;        //{ +0x00d8    +0x00d8    +0x00d8    } | .FpbWriteCapability
        _m15 get_resource_descriptor_t           get_resource_descriptor;     //{ +0x00e0    +0x00e0    +0x00e0    } | .GetResourceDescriptor
        _m16 set_resource_descriptor_t           set_resource_descriptor;     //{ +0x00e8    +0x00e8    +0x00e8    } | .SetResourceDescriptor
        _m17 commit_resource_descriptor_t        commit_resource_descriptor;  //{ +0x00f0    +0x00f0    +0x00f0    } | .CommitResourceDescriptor
        _m18 get_current_resource_list_t         get_current_resource_list;   //{ +0x00f8    +0x00f8    +0x00f8    } | .GetCurrentResourceList
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_FDO.$", 0x100, true, 0xdb1d97f546c92a18 );                           
        SDK_FIXED_SIZE( fpb_fdo_t, 0x100 );                                 
    };                                                                      
};
#include "magic/fpb_fdo_t.end.hpp"
SDK_VERIFY( struct pci::fpb_fdo_t, 0x100 );
