#pragma once
#include <sdkgen/support_library.hpp>
#include "irplock_t.hpp"
#include "work_queue_item_t.hpp"
#include "system_power_state_t.hpp"
#include "../pnp/device_delete_type_t.hpp"

namespace pnp { struct device_event_entry_t; }

#include "magic/pending_relations_list_entry_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct relation_list_t;
    struct dock_interface_t;

    // [struct _PENDING_RELATIONS_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pending_relations_list_entry_t                                  
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                 
        _m00 nt::list_entry_t                  link;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::work_queue_item_t      work_item;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkItem
        _m02 struct pnp::device_event_entry_t* device_event;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceEvent
        _m03 struct nt::device_object_t*       device_object;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DeviceObject
        _m04 struct nt::relation_list_t*       relations_list;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RelationsList
        _m05 struct nt::irp_t*                 eject_irp;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EjectIrp
        _m06 enum nt::irplock_t                lock;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Lock
        _m07 uint32_t                          problem;                      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Problem
        _m08 uint8_t                           profile_changing_eject;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ProfileChangingEject
        _m09 uint8_t                           display_safe_removal_dialog;  //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .DisplaySafeRemovalDialog
        _m10 enum nt::system_power_state_t     lightest_sleep_state;         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .LightestSleepState
        _m11 struct nt::dock_interface_t*      dock_interface;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DockInterface
        _m12 uint8_t                           dequeue_pending;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DequeuePending
        _m13 enum pnp::device_delete_type_t    delete_type;                  //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .DeleteType
                                                                           
        SDK_MAGIC_PROPERTIES( "_PENDING_RELATIONS_LIST_ENTRY.$", 0x70, true, 0x94e3abbf8bad684f );                            
        SDK_FIXED_SIZE( pending_relations_list_entry_t, 0x70 );                            
    };                                                                     
};
#include "magic/pending_relations_list_entry_t.end.hpp"
SDK_VERIFY( struct nt::pending_relations_list_entry_t, 0x70 );
